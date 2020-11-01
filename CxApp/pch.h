#pragma once

#include <collection.h>
#include <ppltasks.h>
#include "App.xaml.h"

#include <winrt/Windows.Foundation.h>

// The Xaml Compiler generates code in XamlTypeInfo.g.cpp that binds to components
// in the module using the template function ActivateType.
//
// This declaration must be provided.
template<typename T> ::Platform::Object^ ActivateType();

// To support C++ WinRT authored classes
// 1) Declare a make function, like those used for factories in module.g.cpp.
// 2) Implement the make function in the .cpp file for each component.
// 3) Provide the specialization of ActivateType.
void* make_StaticLibrary1_BlankUserControl();

template<> inline ::Platform::Object^ ActivateType<::StaticLibrary1::BlankUserControl>()
{
    return reinterpret_cast<Platform::Object^>(make_StaticLibrary1_BlankUserControl());
}