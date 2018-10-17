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

#include <cstdio>
#include <fstream>

using std::rename;
using std::ifstream;

void incrementFilename(char * existingFilename)
{
	if (existingFilename[2] == '9')
	{
		if (existingFilename[1] == '9')
		{
			++existingFilename[0];
			existingFilename[1] == '0';
		}
		else
			++existingFilename[1];
		existingFilename[2] = '0';
	}
	else
	{
		++existingFilename[2];
	}
}

void decrementFilename(char * existingFilename)
{
	if (existingFilename[2] == '0')
	{
		if (existingFilename[1] == '0')
		{
			--existingFilename[0];
			existingFilename[1] == '9';
		}
		else
			--existingFilename[1];
		existingFilename[2] = '9';
	}
	else
	{
		--existingFilename[2];
	}
}

// this function takes a string listing the directory of files to rename and renames every file in the directory 
bool batchRename(char * name)
{
	// TODO: get directory file count (Boost?)
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
			file.open(existingFilename);
			file.close();
			++fileCount;
			// alter filename, note that filenames use 3 digits then .wav
			incrementFilename(existingFilename);
		}
		catch (std::ifstream::failure e)
		{
			scanning = false;
		}
	}
	// batch rename
	char newFilename[8];
	newFilename[3] = '.';
	newFilename[4] = 'w';
	newFilename[5] = 'a';
	newFilename[6] = 'v';
	for (int i = 0; i < fileCount; ++i)
	{
		
	}
}