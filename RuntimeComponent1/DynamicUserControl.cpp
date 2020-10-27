#include "pch.h"
#include "DynamicUserControl.h"
#if __has_include("DynamicUserControl.g.cpp")
#include "DynamicUserControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::RuntimeComponent1::implementation
{
    DynamicUserControl::DynamicUserControl()
    {
        InitializeComponent();
    }

    int32_t DynamicUserControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DynamicUserControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void DynamicUserControl::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
