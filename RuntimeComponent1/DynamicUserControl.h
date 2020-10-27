#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "DynamicUserControl.g.h"

namespace winrt::RuntimeComponent1::implementation
{
    struct DynamicUserControl : DynamicUserControlT<DynamicUserControl>
    {
        DynamicUserControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::RuntimeComponent1::factory_implementation
{
    struct DynamicUserControl : DynamicUserControlT<DynamicUserControl, implementation::DynamicUserControl>
    {
    };
}
