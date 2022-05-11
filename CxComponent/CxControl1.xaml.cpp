#include "pch.h"
#include "CxControl1.xaml.h"

using namespace CxComponent;

// ::CxComponent::StaticLibrary2::Class2 is implemented in C++/WinRT.
// See main.cpp for activation logic.
ref class Derived2 : public ::CxComponent::StaticLibrary2::Class2
{};

CxControl1::CxControl1()
{
}

int CxControl1::GetMyProperty()
{
	InitializeComponent();
    auto d = ref new Derived2();
    auto p = d->MyProperty;
    return p;
}
