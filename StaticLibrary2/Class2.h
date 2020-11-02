#pragma once

#include "Class2.g.h"

namespace winrt::StaticLibrary2::implementation
{
    struct Class2 : Class2T<Class2>
    {
        Class2() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::StaticLibrary2::factory_implementation
{
    struct Class2 : Class2T<Class2, implementation::Class2>
    {
    };
}
