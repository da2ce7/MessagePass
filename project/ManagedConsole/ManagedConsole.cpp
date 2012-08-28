// ManagedConsole.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace native_cli_wrap;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
	Console::ReadLine();

	NativeCliWrap a;

	String ^ strRet(a.PrintTest(L"Message To Native! (From Managed!)"));

	Console::WriteLine(strRet);

	Console::ReadLine();
    return 0;


}
