﻿//
// CxControl1.xaml.cpp
// Implementation of the CxControl1 class
//

#include "pch.h"
#include <string_view>
#include "CxControl1.xaml.h"

using namespace CxComponent;

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


// In CX app project activation performed by calling GetActivationFactoryByPCWSTR
// that can be hooked by providing an implementation of __winRT::__getActivationFactoryByPCWSTR.
// This is used in this example to show how a C++ WinRT implemented class, from a static library
// can be used as a base class for an object implemented in C++ CX.

// Generated by cppwinrt -opt in class.g.cpp, declared here to avoid including the C++ WinRT generated headers.
void* winrt_make_StaticLibrary2_Class2();


// Replace CRT activation TU (is this documented?)
HRESULT __stdcall GetActivationFactoryByPCWSTR(void* str, ::Platform::Guid& riid, void** ppActivationFactory);
void __stdcall FlushFactoryCache();

namespace __winRT
{
    long __stdcall __getActivationFactoryByPCWSTR(void* str, ::Platform::Guid& pGuid, void** ppActivationFactory)
    {
        if (static_cast<wchar_t*>(str) == L"StaticLibrary2.Class2"sv)
        {
            // Note: cppwinrt-generated factory returns default interface, IActivationFactory,
            // so need to QI to the requested factory.
            auto factory = static_cast<IUnknown*>(winrt_make_StaticLibrary2_Class2());
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

// ::StaticLibrary2::Class2 is implemented in C++ WinRT.
// Support for its activation is provided in the code above.
ref class Derived2 : public ::StaticLibrary2::Class2
{};


// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

CxControl1::CxControl1()
{
	InitializeComponent();
    auto d = ref new Derived2();
    auto p = d->MyProperty;
}

