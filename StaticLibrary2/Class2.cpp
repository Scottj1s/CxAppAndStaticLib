#include "pch.h"
#include "Class2.h"
#include "Class2.g.cpp"

namespace winrt::StaticLibrary2::implementation
{
    int32_t Class2::MyProperty()
    {
        return 2;
    }

    void Class2::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
