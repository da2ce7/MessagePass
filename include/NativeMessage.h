

#pragma once

#include <string>

#include <ExportWrapper.h>

using namespace std;


class NativeMessage {

public:

EXPORT NativeMessage();
EXPORT ~NativeMessage();

EXPORT	static string PrintNativeMessage(const string & strMessage = string("test message"));

};