#include <iostream>

#include "..\TDA\CVTString.h"


int main()
{
	std::string mStr = "����˭�أ�";
	std::wstring wStr;

	TDA::CVTString::StrToWStr(mStr, wStr, 936);
}