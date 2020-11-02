#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "Control1.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct Control1 : Control1T<Control1>
    {
        Control1();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct Control1 : Control1T<Control1, implementation::Control1>
    {
    };
}
