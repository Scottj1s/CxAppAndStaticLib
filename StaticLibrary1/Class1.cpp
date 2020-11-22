#include "pch.h"
#include "Class1.h"
#include "Class1.g.cpp"

namespace winrt::StaticLibrary1::implementation
{
    int32_t Class1::MyProperty()
    {
        return _property;
    }

    void Class1::MyProperty(int32_t value)
    {
        _property = value;
    }

    void Class1::SetProperty(int32_t /* value */)
    {
        // implemented in derived class 
        throw hresult_not_implemented();
    }
}
