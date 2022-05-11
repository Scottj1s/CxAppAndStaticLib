#include "pch.h"
#include "Class2.h"
#include "Class2.g.cpp"

namespace winrt::CxComponent::StaticLibrary2::implementation
{
    int32_t Class2::MyProperty()
    {
        return _property;
    }

    void Class2::MyProperty(int32_t value)
    {
        _property = value;
    }

    void Class2::SetProperty(int32_t /* value */)
    {
        // implemented in derived class 
        throw hresult_not_implemented();
    }
}
