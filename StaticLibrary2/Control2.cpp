#include "pch.h"
#include "Control2.h"
#if __has_include("Control2.g.cpp")
#include "Control2.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::CxComponent::StaticLibrary2::implementation
{
    Control2::Control2()
    {
        InitializeComponent();
    }

    int32_t Control2::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Control2::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Control2::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}

void* make_CxComponent_StaticLibrary2_Control2()
{
    return winrt::detach_abi(winrt::make<winrt::CxComponent::StaticLibrary2::implementation::Control2>());
}
