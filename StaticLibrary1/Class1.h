#pragma once

#include "Class1.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct Class1 : Class1T<Class1>
    {
        Class1() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct Class1 : Class1T<Class1, implementation::Class1>
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface)
        {
            return impl::composable_factory<implementation::Class1>::template CreateInstance<StaticLibrary1::Class1>(baseInterface, innerInterface);
        }

        Windows::Foundation::IInspectable ActivateInstance() const
        {
            return make<implementation::Class1>();
        }

    };
}

