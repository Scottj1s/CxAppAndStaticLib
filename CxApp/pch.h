//
// pch.h
//

#pragma once

#include <collection.h>
#include <ppltasks.h>
#include "App.xaml.h"

#include <winrt/Windows.Foundation.h>


template<typename T>
::Platform::Object^ ActivateType();

// Specialize ActivateType<> for XamlTypeInfo.g.cpp
void* make_StaticLibrary1_BlankUserControl();
template<>
inline
::Platform::Object^ ActivateType<::StaticLibrary1::BlankUserControl>()
{
    return reinterpret_cast<Platform::Object^>(make_StaticLibrary1_BlankUserControl());
}
