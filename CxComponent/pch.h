#pragma once

#include <collection.h>
#include <ppltasks.h>

// The Xaml Compiler generates code in XamlTypeInfo.g.cpp that binds to classes
// in the module using the template function ActivateType. When it is using
// the C++ CX code generation mode, <CppWinRTProjectLanguage>C++/CX</CppWinRTProjectLanguage>
// a specialization needs to be manually provided for classes implemented using C++ WinRt.
//
// This declaration must be provided.
template<typename T> ::Platform::Object^ ActivateType();

// To support C++ WinRT authored classes
// 1) Declare a make function, like those used for factories in module.g.cpp.
// 2) Implement the make function in the .cpp file for each component.
// 3) Provide the specialization of ActivateType.
void* make_StaticLibrary2_Control2();

template<> inline ::Platform::Object^ ActivateType<::StaticLibrary2::Control2>()
{
    return reinterpret_cast<Platform::Object^>(make_StaticLibrary2_Control2());
}