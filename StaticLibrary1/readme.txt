This C++ WinRT static lib project demonstrates
1) How to enable the Xaml Compiler generated code to bind to a C++ WinRT implemented class
   by providing a specialization of the ActivateType function.
2) How to enable activation of a C++ WinRT implemented class in an App Project and
   use it as the base class for a CX implemented object.

For #1 see the comment in CxApp\pch.h that describes how this works.
For #2 see the comment in CxApp\MainPage.xaml.cpp
