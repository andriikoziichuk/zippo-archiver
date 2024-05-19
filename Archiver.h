#pragma once
#include "StringUtils.h"

using namespace std;
using namespace System;
using namespace System::IO;
using namespace Ionic::Zip;

ref class Archiver
{
	public: 
		Void archive(String^ folderPath, const string& path, bool usePath)
		{
			if (usePath) 
			{
				folderPath = ExtractDirectoryPath(path);
			}

			auto zipName = Path::GetFileNameWithoutExtension(Path::GetTempFileName());

			if (Directory::Exists(folderPath))
			{
				auto zipFilePath = folderPath->Remove(folderPath->Length - 1) + "_" + zipName + ".zip";

				try
				{
					this->archiveFolder(folderPath, zipFilePath);
				}
				catch (Exception^ ex)
				{
					Console::WriteLine("Error creating archive: " + ex->Message);
				}
			}
			else
			{
				Console::WriteLine("Folder does not exist: " + folderPath);
			}
		}

		Void extractFiles(String^ path) {
			string convertedPath = StringUtils::ConvertSystemStringToStdString(path);
			ZipFile^ zip = ZipFile::Read(path);
			String^ tempFileName = Path::GetFileNameWithoutExtension(Path::GetTempFileName());
			zip->ExtractAll(Path::Combine(ExtractDirectoryPath(convertedPath), ExtractZipName(convertedPath) + "_" + tempFileName));
		}

	private: 
		Void archiveFolder(String^ folderPath, String^ zipName) {
			ZipFile^ zip = gcnew ZipFile();
			zip->AddDirectory(folderPath);
			zip->Save(zipName);

			Console::WriteLine("Archive created successfully at: " + zipName);
		}

		String^ ExtractDirectoryPath(const std::string& fullPath)
		{
			size_t lastBackslashPos = fullPath.find_last_of(L'\\');
			if (lastBackslashPos == std::wstring::npos)
				return L"";

			return StringUtils::ConvertStdStringToSystemString(fullPath.substr(0, lastBackslashPos + 1));
		}

		String^ ExtractZipName(std::string& path) {
			String^ fullPath = StringUtils::ConvertStdStringToSystemString(path);
			return Path::GetFileNameWithoutExtension(fullPath);
		}
};

