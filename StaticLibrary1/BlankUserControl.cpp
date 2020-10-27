#include "pch.h"
#include "BlankUserControl.h"
//#if __has_include("BlankUserControl.g.cpp")
//#include "BlankUserControl.g.cpp"
//#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::StaticLibrary1::implementation
{
    BlankUserControl::BlankUserControl()
    {
        InitializeComponent();
    }

    int32_t BlankUserControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void BlankUserControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void BlankUserControl::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}

winrt::Windows::Foundation::IInspectable make_BlankUserControl()
{
    return winrt::make<winrt::StaticLibrary1::implementation::BlankUserControl>();
}
