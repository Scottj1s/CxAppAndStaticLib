# C++/CX and C++/WinRT Migration Techniques
This project demonstrates various techniques to enable incremental migration of C++/CX
codebases to C++/WinRT. The simplest technique is to separate language use at the module 
boundary. But it can be cumbersome to create new DLL projects and manage the additional
concerns around signing, deployment, testing, etc. A better strategy is to enable finer
grained incremental migration within existing DLL projects.

## StaticLibrary1: C++/WinRT static library in C++/CX app project

The StaticLibrary1 project contains a C++/WinRT implemented runtimeclass that is consumed
from the C++/CX App Project. This demonstrates

1) How to enable the Xaml Compiler generated code to bind to a C++/WinRT implemented runtimeclass
   by providing a specialization of the ActivateType function.
2) How to enable activation of a C++/WinRT implemented runtimeclass in an App Project and
   use it as the base class for a C++/CX implemented object.

For #1 see the comment in `CxApp\pch.h` that describes how this works.
For #2 see the comment in `CxApp\MainPage.xaml.cpp`

## RuntimeComponent1: C++/WinRT dynamic library from C++/CX app project

This is a C++/WinRT DLL project that implements an activateable class RuntimeComponent1::Class.

Its registration information is provided in `CxApp\Package.appxmanifest`, when deployed in
the same directory as the app this class can be activated and bound to in Xaml markup.

## StaticLibrary2: C++/WinRT static library in C++/CX dll project

The StaticLibrary2 project contains a C++/WinRT implemented runtimeclass that is consumed
from the CxComponent C++/CX DLL Project. See StaticLibrary1 notes above.

## CxComponent: C++/CX dynamic library from C++/CX app project

This is a C++/CX DLL project that implements an activateable class CxComponent::Class1
and control CxComponent::Control1.

CxComponent also contains the static C++/WinRT library StaticLibrary2.

CxComponent makes use of the Microsoft.Windows.MidlRT package for MdMerge functionality.
I could not find a way to do this with Microsoft.Windows.CppWinRT without cycles in target
dependencies breaking the build: CreateWinMD -> Link -> Compile -> Projection -> CreateWinMD.

CxComponent also demonstrates hooking WinRT activation logic to support both internal and
external callers.

