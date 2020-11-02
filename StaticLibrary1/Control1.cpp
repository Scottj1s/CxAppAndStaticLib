#include "pch.h"
#include "Control1.h"
#if __has_include("Control1.g.cpp")
#include "Control1.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::StaticLibrary1::implementation
{
    Control1::Control1()
    {
        InitializeComponent();
    }

    int32_t Control1::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Control1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Control1::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}

void* make_StaticLibrary1_Control1()
{
    return winrt::detach_abi(winrt::make<winrt::StaticLibrary1::implementation::Control1>());
}
