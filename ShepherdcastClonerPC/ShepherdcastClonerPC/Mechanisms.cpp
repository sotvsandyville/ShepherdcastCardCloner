/*
	Shepherd of the Valley Evangelical Lutheran Church
	One Shepherd, One Faith, One Flock United in Ministry
	Please visit us online at www.sotvchurch.com.
	=====================================================
	Shepherdcast Cloning Software
	The purpose of this program is to clone our podcast,
	the Shepherdcast, to loaned flash drives.
	=====================================================
	Mechanisms.cpp
	The functions in this file are designed to clone
	the Shepherdcast onto any device and should be called
	from a main program designed for a specific OS.  This
	file exists purely so we can program GUI apps
	natively on multiple platforms in the C++ language.

	Note to self: All code in this file MUST be portable!
*/

#include "pch.h"

#include <cstdio>
#include <fstream>
#include <string>
#include <cstring>

using std::rename;
using std::ifstream;
using std::string;

void incrementFilename(char * existingFilename, string directory)
{
	if (existingFilename[directory.length() + 2] == '9')
	{
		if (existingFilename[directory.length() + 1] == '9')
		{
			++existingFilename[directory.length() + 0];
			existingFilename[directory.length() + 1] = '0';
		}
		else
			++existingFilename[directory.length() + 1];
		existingFilename[directory.length() + 2] = '0';
	}
	else
	{
		++existingFilename[2];
	}
}

void decrementFilename(char * existingFilename, string directory)
{
	if (existingFilename[directory.length() + 2] == '0')
	{
		if (existingFilename[directory.length() + 1] == '0')
		{
			--existingFilename[directory.length() + 0];
			existingFilename[directory.length() + 1] = '9';
		}
		else
			--existingFilename[directory.length() + 1];
		existingFilename[directory.length() + 2] = '9';
	}
	else
	{
		--existingFilename[directory.length() + 2];
	}
}

// this function takes a string listing the directory of files to rename and renames every file in the directory 
bool batchRename(string directory)
{
	char * existingPath = new char [directory.length()+8];  // +8 to accommodate null terminator and filename
	strcpy(existingPath, directory.c_str());
	int fileCount = 0;
	char existingFilename[8] = "000.wav";
	bool scanning = true;
	while (scanning)
	{
		std::ifstream file;
		file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		try
		{
			// make sure it opens
			file.open(existingPath);
			file.close();
			++fileCount;
			// alter filename, note that filenames use 3 digits then .wav
			incrementFilename(existingPath, directory);
		}
		catch (std::ifstream::failure e)
		{
			scanning = false;
		}
	}
	// batch rename
	char newFilePath[8];
	strcpy(newFilePath, existingPath);
	incrementFilename(newFilePath, directory);  // new filename is one higher
	for (int i = 0; i < fileCount; ++i)
	{
		rename(existingPath, newFilePath);  // renaming procedure
		decrementFilename(newFilePath, directory);  // bring each down down by one
		decrementFilename(existingPath, directory);
	}
	return true;
}