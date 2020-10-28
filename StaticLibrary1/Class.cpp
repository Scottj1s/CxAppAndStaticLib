#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::StaticLibrary1::implementation
{
    int32_t Class::MyProperty()
    {
        return 1729;
    }

    void Class::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
