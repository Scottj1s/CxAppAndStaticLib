#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "Control2.g.h"

namespace winrt::StaticLibrary2::implementation
{
    struct Control2 : Control2T<Control2>
    {
        Control2();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::StaticLibrary2::factory_implementation
{
    struct Control2 : Control2T<Control2, implementation::Control2>
    {
    };
}
