#include "NativeMessage.h"

#include <iostream>

NativeMessage::NativeMessage()
{

}

NativeMessage::~NativeMessage()
{

}

string NativeMessage::PrintNativeMessage(const string & strMessage)
{
	cout << strMessage << "\n";

	string retMsg("Message To Managed! (From Native)");

	return retMsg;
}