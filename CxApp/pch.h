//
// pch.h
//

#pragma once

#include <collection.h>
#include <ppltasks.h>
#include "App.xaml.h"

#include <winrt/Windows.Foundation.h>

winrt::Windows::Foundation::IInspectable make_BlankUserControl();

template<typename T>
::Platform::Object^ ActivateType();

template<>
inline
::Platform::Object^ ActivateType<::StaticLibrary1::BlankUserControl>()
{
    return reinterpret_cast<Platform::Object^>(winrt::detach_abi(make_BlankUserControl()));
}
