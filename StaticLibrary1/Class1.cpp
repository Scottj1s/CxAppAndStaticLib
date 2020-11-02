#include "pch.h"
#include "Class1.h"
#include "Class1.g.cpp"

namespace winrt::StaticLibrary1::implementation
{
    int32_t Class1::MyProperty()
    {
        return 1;
    }

    void Class1::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
