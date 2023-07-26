﻿#include "PutConsole.h"
#include "../../RxString.h"

#include <string>
#include <stdio.h>
#include <Windows.h>


namespace Rut
{
	namespace RxStream
	{
		static constexpr size_t sg_uiBufferCount = 1024;


		bool PutConsole(const char* cpStr)
		{
			return PutConsole(cpStr, strlen(cpStr));
		}

		bool PutConsole(const char* cpStr, size_t nChar)
		{
			return WriteConsoleA(GetStdHandle(STD_OUTPUT_HANDLE), cpStr, nChar, NULL, NULL);
		}

		bool PutConsole(std::string_view msStr)
		{
			return PutConsole(msStr.data(), msStr.size());
		}

		bool PutConsole(const wchar_t* wpStr)
		{
			return PutConsole(wpStr, wcslen(wpStr));
		}

		bool PutConsole(const wchar_t* wpStr, size_t nChar)
		{
			return WriteConsoleW(GetStdHandle(STD_OUTPUT_HANDLE), wpStr, nChar, NULL, NULL);
		}

		bool PutConsole(std::wstring_view wsStr)
		{
			return PutConsole(wsStr.data(), wsStr.size());
		}

		bool PutConsoleMBCS(const char* cpStr, size_t uiCodePage)
		{
			std::wstring out_str;
			size_t cch = RxString::ToWCS(cpStr, out_str, uiCodePage);
			return PutConsole(out_str.c_str(), cch);
		}

		bool PutConsoleMBCS(std::string_view msStr, size_t uiCodePage)
		{
			return PutConsoleMBCS(msStr.data(), uiCodePage);
		}

		bool PutConsoleFormat(const char* cpFormat, ...)
		{
			char buffer[sg_uiBufferCount];

			va_list args = nullptr;
			va_start(args, cpFormat);
			int cch = vsprintf_s(buffer, sg_uiBufferCount, cpFormat, args);
			va_end(args);

			return PutConsole(buffer, cch);
		}

		bool PutConsoleFormat(const wchar_t* cpFormat, ...)
		{
			wchar_t buffer[sg_uiBufferCount];

			va_list args = nullptr;
			va_start(args, cpFormat);
			int cch = vswprintf_s(buffer, sg_uiBufferCount, cpFormat, args);
			va_end(args);

			return PutConsole(buffer, cch);
		}
	}
}