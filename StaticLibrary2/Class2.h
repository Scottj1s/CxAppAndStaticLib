#pragma once

#include "Class2.g.h"

namespace winrt::CxComponent::StaticLibrary2::implementation
{
    struct Class2 : Class2T<Class2>
    {
        Class2() = default;

        int32_t _property{ 2 };
        int32_t MyProperty();
        void MyProperty(int32_t value);
        void SetProperty(int32_t value);
    };
}

namespace winrt::CxComponent::StaticLibrary2::factory_implementation
{
    struct Class2 : Class2T<Class2, implementation::Class2>
    {
    };
}
