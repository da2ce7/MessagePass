// This is the main DLL file.

#include "stdafx.h"

#include <NativeCliWrap.h>

#define IMPORT
#include <NativeMessage.h>

#include <iostream>
#include <sstream>

using namespace native_cli_wrap;
using namespace std;

static NativeMessage * pNative;

NativeCliWrap::NativeCliWrap() {
	if (NULL != pNative);
	else {
		pNative = new NativeMessage;
	}
};

NativeCliWrap::~NativeCliWrap() {
	if (NULL != pNative) delete pNative;
	pNative = NULL;
};

static string Native (const String ^% s) {

	using namespace Runtime::InteropServices;

	IntPtr p_sz(Marshal::StringToHGlobalAnsi(const_cast<String ^>(s)).ToPointer());
	Int32 n_p_sz = safe_cast<Int32>(p_sz);
	long l_p_sz = safe_cast<long>(n_p_sz);

	const char * chars(reinterpret_cast<const char *>(l_p_sz));

	string str(chars);

	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return str;
};

static String ^ Managed (const string& os) { return gcnew String(os.c_str()); };


String ^ NativeCliWrap::PrintTest(const String ^% strMessage)
{
	return Managed(pNative -> PrintNativeMessage(Native(strMessage)));
}