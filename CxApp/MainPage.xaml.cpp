//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "winrt/StaticLibrary1.h"

using namespace CxApp;

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

winrt::Windows::Foundation::IInspectable get_ClassFactory();

int32_t __stdcall get_activation_factory(void* classId, guid const& iid, void** factory) noexcept
{
    hstring const& className = reinterpret_cast<hstring const&>(classId);
    if (className == L"StaticLibrary1.Class")
    {
        *factory = detach_abi(get_ClassFactory());
        return 0;
    }

    // Fallback to normal activation
    hresult hr = RoGetActivationFactory(reinterpret_cast<HSTRING>(classId), iid, factory);
    if (hr == impl::error_not_initialized)
    {
        void* cookie;
        (void)CoIncrementMTAUsage(reinterpret_cast<CO_MTA_USAGE_COOKIE*>(&cookie));
        hr = RoGetActivationFactory(reinterpret_cast<HSTRING>(classId), iid, factory);
    }

    return hr;
}

class Derived : winrt::StaticLibrary1::Class
{};

MainPage::MainPage()
{
	InitializeComponent();
    winrt_activation_handler = get_activation_factory;
	Derived d;
}
