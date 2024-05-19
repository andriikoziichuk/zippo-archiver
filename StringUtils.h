#pragma once

using namespace std;
using namespace System;

class StringUtils
{
public:
	static String^ ConvertStdStringToSystemString(const string& nativeString)
	{
		return gcnew String(nativeString.c_str());
	}

	static string ConvertSystemStringToStdString(String^ managedString)
	{
		const wchar_t* nativeWChar = (const wchar_t*)(Runtime::InteropServices::Marshal::StringToHGlobalUni(managedString)).ToPointer();
		wstring nativeWString(nativeWChar);
		Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)nativeWChar));
		string nativeString(nativeWString.begin(), nativeWString.end());

		return nativeString;
	}
};

