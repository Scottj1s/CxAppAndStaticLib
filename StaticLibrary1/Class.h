#pragma once

#include "Class.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface)
        {
            return impl::composable_factory<implementation::Class>::template CreateInstance<StaticLibrary1::Class>(baseInterface, innerInterface);
        }

        Windows::Foundation::IInspectable ActivateInstance() const
        {
            return make<implementation::Class>();
        }

    };
}

