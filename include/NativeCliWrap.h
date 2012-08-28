// NativeCliWrap.h

#pragma once

using namespace System;

namespace native_cli_wrap {

	public ref class NativeCliWrap
	{
	public:
		NativeCliWrap();
		~NativeCliWrap();

		String ^ __clrcall PrintTest(const String ^% strMessage);
	};
}
