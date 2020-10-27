#include "pch.h"
#include "Class.h"
//#include "Class.g.cpp"

namespace winrt::StaticLibrary1::implementation
{
    int32_t Class::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Class::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

winrt::Windows::Foundation::IInspectable get_ClassFactory()
{
    return winrt::make<winrt::StaticLibrary1::factory_implementation::Class>();
}
