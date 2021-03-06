# Use of C++ WinRT runtimeclasses in C++ CX app projects

The StaticLibrary1 project contains a C++ WinRT implemented runtimeclass that is consumed
from the C++ CX App Project. This demonstrates

1) How to enable the Xaml Compiler generated code to bind to a C++ WinRT implemented runtimeclass
   by providing a specialization of the ActivateType function.
2) How to enable activation of a C++ WinRT implemented runtimeclass in an App Project and
   use it as the base class for a CX implemented object.

For #1 see the comment in `CxApp\pch.h` that describes how this works.
For #2 see the comment in `CxApp\MainPage.xaml.cpp`

## RuntimeComponent1 project

This is a C++ WinRT DLL project that implements an activateable class RuntimeComponent1::Class.

Its registration information is provided in `CxApp\Package.appxmanifest`, when deployed in
the same directory as the app this class can be activated and bound to in Xaml markup.
