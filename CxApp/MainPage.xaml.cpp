﻿//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include <string_view>
#include "MainPage.xaml.h"

using namespace CxApp;

using namespace std::literals;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

using namespace winrt;

// In CX app project activation performed by calling GetActivationFactoryByPCWSTR
// that can be hooked by providing an implementation of __winRT::__getActivationFactoryByPCWSTR.
// This is used in this example to show how a C++ WinRT implemented class, from a static library
// can be used as a base class for an object implemented in C++ CX.

// Generated by cppwinrt -opt in class.g.cpp, declared here to avoid including the C++ WinRT generated headers.
void* winrt_make_StaticLibrary1_Class1();


// Replace CRT activation translation unit definitions.
// See https://devblogs.microsoft.com/oldnewthing/20130109-00/?p=5613 for details on how this works.
// This takes advantage of an implementation detail of C++ CX but that won't be changing so we can depend on it safely.
HRESULT __stdcall GetActivationFactoryByPCWSTR(void* str, ::Platform::Guid& riid, void** ppActivationFactory);
void __stdcall FlushFactoryCache();

namespace __winRT
{
    long __stdcall __getActivationFactoryByPCWSTR(void* str, ::Platform::Guid& pGuid, void** ppActivationFactory)
    {
        if (static_cast<wchar_t*>(str) == L"StaticLibrary1.Class1"sv)
        {
            // Note: cppwinrt-generated factory returns default interface, IActivationFactory,
            // so need to QI to the requested factory.
            auto factory = static_cast<IUnknown*>(winrt_make_StaticLibrary1_Class1());
            if (!factory) return E_OUTOFMEMORY;
            auto hr = factory->QueryInterface(pGuid, ppActivationFactory);
            factory->Release();
            return hr;
        }
        return GetActivationFactoryByPCWSTR(str, pGuid, ppActivationFactory);
    }
}

namespace Platform
{
    void __stdcall Module::FlushFactoryCache()
    {
        ::FlushFactoryCache();
    }
}

// ::StaticLibrary1::Class1 is implemented in C++ WinRT.
// Support for its activation is provided in the code above.
ref class Derived1 : public ::StaticLibrary1::Class1
{};

MainPage::MainPage()
{
    InitializeComponent();
    auto d = ref new Derived1();
    auto p = d->MyProperty;
}
