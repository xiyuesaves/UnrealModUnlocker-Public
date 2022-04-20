#include "FunctionSignatures.h"


FunctionSignatures::FunctionSignatures()
{
	
	//Initialize FunctionSignatures---------------------->

	// Create FindFileInPakFile Sig Object Vector

	//variables 4.22
	PakScanObj_1.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x20\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\xD9\x48\x81\xEC\xD0\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x4C\x8B\xE2\x49\x8B\xF0\x48\x8D\x91\xE8\x00\x00\x00\x4C\x8B\xE9\x49\x8B\xCC\x41\xB8\x01\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD4\x48\x8D\x4D\xA7\xE8\x00\x00\x00\x00\x41\x80\xBD\xA2\x01\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x5D\xAF\x45\x33\xF6\x44\x8D\x4B\xFF\x85\xDB\x75\x03\x45\x8B\xCE";
	PakScanObj_1.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxxx????xxxxxxxxxx????xxxxxxxxxxxxxxxxx";
	PakScanObj_1.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_1.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_1);

	//variables 4.18 DQXI S
	PakScanObj_2.p_pattern = (const unsigned char*)"\x48\x8B\xC4\x4C\x89\x40\x18\x55\x53\x48\x8D\x68\xA1\x48\x81\xEC\x00\x00\x00\x00\x44\x8B\x0D\x00\x00\x00\x00\x33\xDB\x48\x89\x70\x10\x8B\xF3\x48\x89\x78\xE8\x48\x8B\xF9\x4C\x89\x60\xE0\x4C\x89\x70\xD0\x4C\x8B\xF2\x65\x48\x8B\x04\x25\x00\x00\x00\x00\xB9\x00\x00\x00\x00\x48\x89\x5D\x0F\x89\x5D\x1B\x4E\x8B\x0C\xC8\x42\x8B\x04\x09\x39\x05\x00\x00\x00\x00\x0F\x8F\x00\x00\x00\x00";
	PakScanObj_2.p_mask = "xxxxxxxxxxxxxxxx????xxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????x????xxxxxxxxxxxxxxxxx????xx????";
	PakScanObj_2.p_Find_File_In_PakFile_Version = 2;
	PakScanObj_2.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_2);

	//variables 4.21
	PakScanObj_3.p_pattern = (const unsigned char*)"\x40\x55\x53\x56\x57\x41\x54\x41\x56\x41\x57\x48\x8D\x6C\x24\xD9\x48\x81\xEC\xD0\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x4C\x8B\xE2\x49\x8B\xD8\x48\x8D\x91\xD8\x00\x00\x00\x4C\x8B\xF1\x49\x8B\xCC\x41\xB8\x01\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD4\x48\x8D\x4D\x9F\xE8\x00\x00\x00\x00\x41\x80\xBE\x92\x01\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x75\xA7\x33\xFF\x8D\x4E\xFF\x85\xF6\x75\x02\x8B\xCF";
	PakScanObj_3.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxxx????xxxxxxxxxx????xxxxxxxxxxxxxx";
	PakScanObj_3.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_3.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_3);

	//variables 4.20
	PakScanObj_4.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x10\x48\x89\x6C\x24\x18\x56\x57\x41\x54\x41\x56\x41\x57\x48\x83\xEC\x60\x48\x8B\xDA\x49\x8B\xF8\x48\x8D\x91\xC8\x00\x00\x00\x48\x8B\xE9\x48\x8B\xCB\x41\xB8\x01\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8B\xD3\x48\x8D\x4C\x24\x30\xE8\x00\x00\x00\x00\x80\xBD\x7A\x01\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x44\x24\x38\x33\xF6\x8D\x50\xFF\x85\xC0\x75\x02\x8B\xD6";
	PakScanObj_4.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxxxx";
	PakScanObj_4.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_4.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_4);

	//variables 4.20.2.0 Tropico6
	PakScanObj_5.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x83\xEC\x50\x4C\x8B\xEA\x49\x8B\xF8\x48\x8D\x91\x00\x00\x00\x00\x48\x8B\xE9\x49\x8B\xCD\x41\xB8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD5\x48\x8D\x4C\x24\x00\xE8\x00\x00\x00\x00\x80\xBD\x00\x00\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x4C\x24\x38\x33\xF6\x44\x8D\x51\xFF\x85\xC9\x75\x03\x44\x8B\xD6";
	PakScanObj_5.p_mask = "xxxx?xxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxx????x????xxxx????xxxxxxx?x????xx?????xx????xxxxxxxxxxxxxxxxx";
	PakScanObj_5.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_5.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_5);

	//variables 4.17
	PakScanObj_6.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x20\x56\x57\x41\x57\x48\x83\xEC\x50\x48\x8B\xF2\x45\x33\xFF\x48\x8B\xF9\x48\x8D\x91\xC8\x00\x00\x00\x48\x8B\xCE\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x89\x6C\x24\x78\x48\x8D\x4C\x24\x20\x48\x8B\xD6\x4C\x89\xB4\x24\x80\x00\x00\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x28\x4C\x8D\x35\x00\x00\x00\x00\x49\x8B\xD6\x48\x8B\xCF\x48\x0F\x45\x54\x24\x20\xE8\x00\x00\x00\x00\x48\x8B\xE8\x48\x85\xC0\x0F\x84\x00\x00\x00\x00\x8B\x4C\x24\x28\x85\xC9\x74\x04\xFF\xC9\xEB\x03";
	PakScanObj_6.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxxxxxxxxxxxxxxxxx????xxxxxxx????xxxxxxxxxxxxx????xxxxxxxx????xxxxxxxxxxxx";
	PakScanObj_6.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_6.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_6);

	//variables 4.16
	PakScanObj_7.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x18\x48\x89\x6C\x24\x20\x56\x57\x41\x57\x48\x83\xEC\x00\x48\x8B\x00\x48\x8D\x00\xC8\x00\x00\x00\x45\x33\xFF\x48\x8B\xE9\x48\x8B\x00\x48\x8B\x00\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8B\x00\x4C\x89\x74\x24\x00\x48\x8D\x4C\x24\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x00\x4C\x8D\x35\x00\x00\x00\x00\x49\x8B\xD6\x48\x8B\xCD\x48\x0F\x45\x54\x24\x00\xE8\x00\x00\x00\x00\x48\x8B\xE8\x48\x85\xC0\x0F\x84\x00\x00\x00\x00\x8B\x00\x08\x85\x00\x74\x04\xFF\x00\xEB\x03";
	PakScanObj_7.p_mask = "xxxxxxxxxxxxxxxxx?xx?xx?x???xxxxxxxx?xx?xxxxxxxx????xxxx????xx?xxxx?xxxx?x????xxx?xxx????xxxxxxxxxxx?x????xxxxxxxx????x?xx?xxx?xx";
	PakScanObj_7.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_7.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_7);

	//variables 4.24.x
	PakScanObj_8.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x20\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\xB0\x48\x81\xEC\x50\x01\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x40\x66\x0F\x6F\x05\x00\x00\x00\x00\x4C\x8D\x4D\xF0\x33\xFF\x66\x0F\x7F\x45\xF0\x49\x8B\xD8\x48\x89\x4D\x80\x0F\x57\xC0\x48\x89\x7D\x00\x48\x8B\xF2\x48\x89\x7D\x20\x33\xC0\x48\x89\x7D\x28\x4C\x8D\x44\x24\x48\x48\x89\x7D\x30\x48\x8B\xD3\x66\x89\x7D\x38\x0F\x11\x45\x08\x4C\x8B\xE9\x89\x45\x18\x48\x89\x7C\x24\x48\xE8\x00\x00\x00\x00\x4C\x8D\x77\xFF\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x89\x7C\x24\x58";
	PakScanObj_8.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxx????xxxxx";
	PakScanObj_8.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_8.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_8);

	//variables 4.21 -> 4.24.3
	PakScanObj_9.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x4C\x8B\x00\x49\x8B\x00\x48\x8D\x91\x00\x00\x00\x00\x4C\x8B\x00\x49\x8B\x00\x41\xB8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\x00\x48\x8D\x4D\x00\xE8\x00\x00\x00\x00\x41\x80\x00\x00\x00\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x5D\x00\x00\x00\x00\x8D\x00\xFF\x85\xDB\x75\x03\x00\x8B\x00";
	PakScanObj_9.p_mask = "xxxx?xxxxxxxxxxxxxxx?xxx????xxx????xxxxxxxxx?xx?xxx????xx?xx?xx????x????xxxx????xx?xxx?x????xx??????xx????xx????x?xxxxx?x?";
	PakScanObj_9.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_9.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_9);

	//variables 4.25.3
	PakScanObj_10.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x4C\x8B\xE2\x49\x8B\xD8\x48\x8D\x91\x00\x00\x00\x00\x4C\x8B\xF1\x49\x8B\xCC\x41\xB8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD4\x48\x8D\x4D\xAF\xE8\x00\x00\x00\x00\x41\x80\xBE\x00\x00\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x75\xB7\x33\xFF\x44\x8D\x46\xFF\x85\xF6\x75\x03\x44\x8B\xC7";
	PakScanObj_10.p_mask = "xxxx?xxxxxxxxxxxxxxx?xxx????xxx????xxxxxxxxxxxxxxxx????xxxxxxxx????x????xxxx????xxxxxxxx????xxx?????xx????xxxxxxxxxxxxxxxx";
	PakScanObj_10.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_10.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_10);

	//variables 4.25.2
	PakScanObj_11.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x4C\x8B\xE2\x48\x89\x4D\xA7\x48\x8D\x91\x00\x00\x00\x00\x49\x8B\xF0\x48\x8B\xF9\xBB\x00\x00\x00\x00\x44\x8B\xC3\x49\x8B\xCC\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD4\x48\x8D\x4D\xAF\xE8\x00\x00\x00\x00\x80\xBF\x00\x00\x00\x00\x00\x0F\x84\x00\x00\x00\x00\x8B\x5D\xB7\x45\x33\xF6\x8D\x53\xFF\x85\xDB\x75\x03\x41\x8B\xD6";
	PakScanObj_11.p_mask = "xxxx?xxxxxxxxxxxxxxx?xxx????xxx????xxxxxxxxxxxxxxxxx????xxxxxxx????xxxxxxx????xxxx????xxxxxxxx????xx?????xx????xxxxxxxxxxxxxxxx";
	PakScanObj_11.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_11.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_11);

	//variables 4.26.0
	PakScanObj_12.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x80\xB9\x00\x00\x00\x00\x00\x48\x8B\xFA\x48\x8D\x91\x00\x00\x00\x00\x4D\x8B\xF8\x48\x8B\xD9\x0F\x84\x00\x00\x00\x00\x8B\xA9\x00\x00\x00\x00\x41\xB8\x00\x00\x00\x00\x4C\x8B\xB1\x00\x00\x00\x00\x48\x8B\xCF\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x83\x7F\x08\x00\x74\x05\x48\x8B\x17\xEB\x07";
	PakScanObj_12.p_mask = "xxxx?xxxx?xxxx?xxxxxxxxxxx?????xxxxxx????xxxxxxxx????xx????xx????xxx????xxxx????xxxx????xxxxxxxxxxx";
	PakScanObj_12.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_12.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_12);

	//variables 4.12
	PakScanObj_13.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x40\x48\x8B\xFA\x48\x8D\xB1\x00\x00\x00\x00\x45\x33\xFF\x48\x8B\xE9\x48\x8B\xD6\x48\x8B\xCF\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8B\xD7";
	PakScanObj_13.p_mask = "xxxx?xxxx?xxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx????xxxx????xxx";
	PakScanObj_13.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_13.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_13);

	//variables 4.12.5 NewRetroArcade
	PakScanObj_14.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x50\x48\x8B\xF2\x48\x8D\xB9\x00\x00\x00\x00\x45\x33\xFF\x48\x8B\xE9\x48\x8B\xD7\x48\x8B\xCE\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8B\xD6\x4C\x89\x74\x24\x00\x48\x8D\x4C\x24\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x28\x4C\x8D\x35\x00\x00\x00\x00\x49\x8B\xD6\x48\x8B\xCD\x48\x0F\x45\x54\x24\x00\xE8\x00\x00\x00\x00\x48\x8B\xE8\x48\x85\xC0\x0F\x84\x00\x00\x00\x00\x8B\x57\x08\x85\xD2\x74\x04\xFF\xCA\xEB\x03";
	PakScanObj_14.p_mask = "xxxx?xxxx?xxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxx?xxxx?x????xxxxxxx????xxxxxxxxxxx?x????xxxxxxxx????xxxxxxxxxxx";
	PakScanObj_14.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_14.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_14);

	//variables 4.27.1
	PakScanObj_15.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x41\x56\x41\x57\x48\x83\xEC\x30\x80\xB9\x00\x00\x00\x00\x00\x4D\x8B\xF8\x48\x8B\xFA\x48\x8B\xD9\x0F\x84\x00\x00\x00\x00\x8B\xA9\x00\x00\x00\x00\x48\x8D\x91\x00\x00\x00\x00\x4C\x8B\xB1\x00\x00\x00\x00\x41\xB8\x00\x00\x00\x00\x48\x8B\xCF\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x83\x7F\x08\x00\x74\x05\x48\x8B\x17\xEB\x07";
	PakScanObj_15.p_mask = "xxxx?xxxx?xxxx?xxxxxxxxxxx?????xxxxxxxxxxx????xx????xxx????xxx????xx????xxxx????xxxx????xxxxxxxxxxx";
	PakScanObj_15.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_15.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_15);

	//variables 4.25 Kena
	PakScanObj_16.p_pattern = (const unsigned char*)"\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\xC7\x45\x00\x00\x00\x00\x00\x48\x89\x9C\x24\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\x17\x49\x8B\xD8\x4C\x8B\xFA\x48\x8B\xF1\x45\x33\xED\x44\x89\x6C\x24\x00\x48\x8D\x91\x00\x00\x00\x00\x45\x8D\x45\x01\x49\x8B\xCF\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x49\x8B\xD7\x48\x8D\x4D\x9F\xE8";
	PakScanObj_16.p_mask = "xxxxxxxxxxxxxxxx?xxx????xxx?????xxxx????xxx????xxxxxxxxxxxxxxxxxxxxxxx?xxx????xxxxxxxx????xxxx????xxxxxxxx";
	PakScanObj_16.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_16.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_16);

	//variables 4.18 BioMutant Style
	PakScanObj_17.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x50\x48\x8B\xF2\x45\x33\xFF\x48\x8B\xF9\x48\x8D\x91\x00\x00\x00\x00\x48\x8B\xCE\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x89\x6C\x24\x00\x48\x8D\x4C\x24\x00\x48\x8B\xD6\x4C\x89\xB4\x24\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x28\x4C\x8D\x35\x00\x00\x00\x00\x49\x8B\xD6\x48\x8B\xCF\x48\x0F\x45\x54\x24\x00\xE8\x00\x00\x00\x00\x48\x8B\xE8\x48\x85\xC0\x0F\x84\x00\x00\x00\x00\x8B\x4C\x24\x28\x85\xC9\x74\x04\xFF\xC9\xEB\x03";
	PakScanObj_17.p_mask = "xxxx?xxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxx????xxxx????xxxx?xxxx?xxxxxxx????x????xxxxxxx????xxxxxxxxxxx?x????xxxxxxxx????xxxxxxxxxxxx";
	PakScanObj_17.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_17.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_17);

	//variables 4.16 LIS2 Style
	PakScanObj_18.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x50\x48\x89\xD6\x48\x8D\xB9\x00\x00\x00\x00\x45\x31\xFF\x48\x89\xCD\x48\x89\xFA\x48\x89\xF1\x44\x89\xFB\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x89\xF2\x4C\x89\x74\x24\x00\x48\x8D\x4C\x24\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x28\x4C\x8D\x35\x00\x00\x00\x00";
	PakScanObj_18.p_mask = "xxxx?xxxx?xxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxx?xxxx?x????xxxxxxx????";
	PakScanObj_18.p_Find_File_In_PakFile_Version = 2;
	PakScanObj_18.p_bNoIsNonPakFileNameAllowed = false;
	FindPakScanVector.push_back(PakScanObj_18);


	//Start Sigscans of OLD builds with no IsNoPakFileNameAllowed


	//variables 4.11 & 4.10
	PakScanObj_19.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x40\x48\x8B\xF2\x48\x8D\xB9\x00\x00\x00\x00\x45\x33\xFF\x48\x8B\xE9\x48\x8B\xD7\x48\x8B\xCE\x41\x8B\xDF\x45\x8D\x47\x01\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8B\xD6";
	PakScanObj_19.p_mask = "xxxx?xxxx?xxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx????xxxx????xxx";
	PakScanObj_19.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_19.p_bNoIsNonPakFileNameAllowed = true;
	FindPakScanVector.push_back(PakScanObj_19);

	//variables 4.0 - 4.9
	PakScanObj_20.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x57\x48\x83\xEC\x40\x48\x8D\xB9\x00\x00\x00\x00\x48\x8B\xF2\x45\x33\xFF\x48\x8B\xE9\x45\x8D\x47\x01\x48\x8B\xD7\x48\x8B\xCE\x41\x8B\xDF\xE8\x00\x00\x00\x00\x84\xC0\x0F\x84\x00\x00\x00\x00\x48\x8D\x4C\x24\x00\x48\x8B\xD6\x4C\x89\x74\x24\x00\xE8\x00\x00\x00\x00\x39\x5C\x24\x38\x4C\x8D\x35\x00\x00\x00\x00\x49\x8B\xD6\x48\x8B\xCD\x48\x0F\x45\x54\x24\x00\xE8\x00\x00\x00\x00\x48\x8B\xE8\x48\x85\xC0\x0F\x84\x00\x00\x00\x00\x8B\x4F\x08\x85\xC9\x74\x04\xFF\xC9\xEB\x03";
	PakScanObj_20.p_mask = "xxxx?xxxx?xxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxx????xxxx????xxxx?xxxxxxx?x????xxxxxxx????xxxxxxxxxxx?x????xxxxxxxx????xxxxxxxxxxx";
	PakScanObj_20.p_Find_File_In_PakFile_Version = 1;
	PakScanObj_20.p_bNoIsNonPakFileNameAllowed = true;
	FindPakScanVector.push_back(PakScanObj_20);


	// Create IsNonPakFileNameAllowed Sig Object Vector

	//variables 4.20, 4.21
	IsNonPakFileNameAllowedScanObj_1.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x10\x48\x89\x6C\x24\x18\x48\x89\x74\x24\x20\x57\x48\x83\xEC\x30\x48\x8B\xD9\x45\x33\xC0\x48\x8D\x4C\x24\x20\x48\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8D\x2D\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_1.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_1);

	//variables 4.16
	IsNonPakFileNameAllowedScanObj_2.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x18\x56\x57\x41\x56\x48\x83\xEC\x30\x48\x8B\xD9\x45\x33\xC0\x48\x8D\x4C\x24\x20\x4C\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8D\x35\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_2.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_2);

	//variables 4.15
	IsNonPakFileNameAllowedScanObj_3.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x10\x48\x89\x6C\x24\x18\x56\x57\x41\x56\x48\x83\xEC\x30\x48\x8B\xF9\x45\x33\xC0\x48\x8D\x4C\x24\x20\x4C\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8D\x2D\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_3.p_mask = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_3);

	//variables 4.14
	IsNonPakFileNameAllowedScanObj_4.p_pattern = (const unsigned char*)"\x48\x89\x74\x24\x10\x57\x48\x83\xEC\x20\x48\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8B\xF8\x83\x78\x30\x00\x0F\x84\x00\x00\x00\x00\x4C\x8B\x40\x20\x48\x89\x5C\x24\x30\x33\xDB\x4D\x85\xC0\x8B\xC3\x0F\x94\xC0\xF7\xD8\x48\x63\xC8\x48\x23\xCF\x49\x0B\xC8\x74\x4E\x48\x8B\x01\xFF\x50\x38\x84\xC0\x74\x44\x39\x5E\x08\x74\x05\x48\x8B\x16\xEB\x07";
	IsNonPakFileNameAllowedScanObj_4.p_mask = "xxxxxxxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_4);

	//variables 4.13
	IsNonPakFileNameAllowedScanObj_5.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x48\x89\x7C\x24\x00\x41\x56\x48\x83\xEC\x20\x48\x8B\xF2\x4C\x8B\xF1\xE8\x00\x00\x00\x00\x48\x8B\xF8\x83\x78\x30\x00\x0F\x84\x00\x00\x00\x00\x4C\x8B\x48\x20\x33\xDB\x4D\x85\xC9\x44\x8B\xC3\x41\x0F\x94\xC0\x41\xF7\xD8\x49\x63\xC8\x48\x23\xC8\x49\x0B\xC9\x0F\x84\x00\x00\x00\x00\x48\x8B\x01\xFF\x50\x38\x84\xC0\x74\x7C\x49\x8B\x06\x49\x8B\xCE";
	IsNonPakFileNameAllowedScanObj_5.p_mask = "xxxx?xxxx?xxxx?xxxxxxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_5);

	//variables 4.12
	IsNonPakFileNameAllowedScanObj_6.p_pattern = (const unsigned char*)"\x40\x53\x56\x48\x83\xEC\x58\x80\x79\x51\x00\x48\x8B\xF2\x48\x8B\xD9\x0F\x85\x00\x00\x00\x00\x80\x79\x50\x00\x0F\x84\x00\x00\x00\x00\x83\x7A\x08\x00";
	IsNonPakFileNameAllowedScanObj_6.p_mask = "xxxxxxxxxxxxxxxxxxx????xxxxxx????xxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_6);

	//variables 4.12 New Retro Arcade
	IsNonPakFileNameAllowedScanObj_7.p_pattern = (const unsigned char*)"\x40\x53\x56\x48\x83\xEC\x58\x80\x79\x51\x00\x48\x8B\xF2\x48\x8B\xD9\x0F\x85\x00\x00\x00\x00\x80\x79\x50\x00\x0F\x84\x00\x00\x00\x00\x83\x7A\x08\x00\x48\x89\x7C\x24\x00\x48\x8D\x3D\x00\x00\x00\x00\x4C\x89\x7C\x24\x00\x74\x05\x48\x8B\x12\xEB\x03\x48\x8B\xD7\x41\xB8\x00\x00\x00\x00\x48\x8D\x8C\x24\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x8B\x43\x60\x41\xBF\x00\x00\x00\x00\x3B\x83\x00\x00\x00\x00\x75\x71\x65\x48\x8B\x04\x25\x00\x00\x00\x00\x8B\x15\x00\x00\x00\x00\x4C\x89\x74\x24\x00\x41\x8B\xCF\x4C\x8B\x34\xD0\x4C\x03\xF1\x41\x8B\x06\x39\x05\x00\x00\x00\x00\x0F\x8F\x00\x00\x00\x00";
	IsNonPakFileNameAllowedScanObj_7.p_mask = "xxxxxxxxxxxxxxxxxxx????xxxxxx????xxxxxxxx?xxx????xxxx?xxxxxxxxxxxx????xxxx????x????xxxxx????xx????xxxxxxx????xx????xxxx?xxxxxxxxxxxxxxx????xx????";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_7);

	//variables 4.22 -> 4.27.2
	IsNonPakFileNameAllowedScanObj_8.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x56\x57\x41\x56\x48\x83\xEC\x30\x48\x8B\x00\x45\x33\xC0\x48\x8D\x4C\x24\x00\x00\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8D\x2D\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_8.p_mask = "xxxx?xxxx?xxxxxxxxxx?xxxxxxx??xxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_8);

	//variables 4.25 Kena
	IsNonPakFileNameAllowedScanObj_9.p_pattern = (const unsigned char*)"\x40\x56\x57\x41\x56\x48\x83\xEC\x40\x48\xC7\x44\x24\x00\x00\x00\x00\x00\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x4C\x8B\xF2\x48\x8B\xF1\x45\x33\xC0\x48\x8D\x4C\x24\x00\xE8\x00\x00\x00\x00\x90\x48\x8D\x2D\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_9.p_mask = "xxxxxxxxxxxxx?????xxxx?xxxx?xxxxxxxxxxxxx?x????xxxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_9);

	//variables 4.18.0 BioMutant type
	IsNonPakFileNameAllowedScanObj_10.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x41\x56\x48\x83\xEC\x30\x48\x8B\xD9\x45\x33\xC0\x48\x8D\x4C\x24\x00\x4C\x8B\xF2\xE8\x00\x00\x00\x00\x48\x8D\x35\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_10.p_mask = "xxxx?xxxx?xxxxxxxxxxxxxxxx?xxxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_10);

	//variables 4.16 LIS2
	IsNonPakFileNameAllowedScanObj_11.p_pattern = (const unsigned char*)"\x48\x89\x5C\x24\x00\x56\x57\x41\x56\x48\x83\xEC\x30\x48\x89\xCB\x45\x31\xC0\x48\x8D\x4C\x24\x00\x49\x89\xD6\xE8\x00\x00\x00\x00\x48\x8D\x35\x00\x00\x00\x00\x83\x78\x08\x00\x74\x05\x48\x8B\x10\xEB\x03";
	IsNonPakFileNameAllowedScanObj_11.p_mask = "xxxx?xxxxxxxxxxxxxxxxxx?xxxx????xxx????xxxxxxxxxxx";
	IsNonPakFileNameAllowedScanVector.push_back(IsNonPakFileNameAllowedScanObj_11);

}

void FunctionSignatures::init()
{
	//Might move the init to here later.
}

int FunctionSignatures::Get_addr_Pakfile__Find()
{
	for (const FindPakScanObj findPakScanObj : FindPakScanVector)
	{
		pakFileFindAddr = Util::StartSigScanner(GetModuleHandleW(nullptr), findPakScanObj.p_pattern, findPakScanObj.p_mask);

		//Check next version
		if (pakFileFindAddr != -1)
		{
			Find_File_In_PakFile_Version = findPakScanObj.p_Find_File_In_PakFile_Version;
			bNoIsNonPakFileNameAllowed = findPakScanObj.p_bNoIsNonPakFileNameAllowed;
			break;
		}
	}

	//Exit early if we didn't find a signature
	if (pakFileFindAddr == -1)
	{
		return -1;
	}

	return pakFileFindAddr - (uintptr_t)GetModuleHandleW(nullptr);
}

int FunctionSignatures::Get_IsNonPakFileNameAllowedAddr()
{

	for (const IsNonPakFileNameAllowedScanObj isNonPakFileNameAllowedScanObj : IsNonPakFileNameAllowedScanVector)
	{
		IsNonPakFileNameAllowedAddr = Util::StartSigScanner(GetModuleHandleW(nullptr), isNonPakFileNameAllowedScanObj.p_pattern, isNonPakFileNameAllowedScanObj.p_mask);

		//Check next version
		if (IsNonPakFileNameAllowedAddr != -1)
		{
			break;
		}
	}

	//Exit early if we didn't find a signature
	if (IsNonPakFileNameAllowedAddr == -1)
	{
		return -1;
	}


	return IsNonPakFileNameAllowedAddr - (uintptr_t)GetModuleHandleW(nullptr);
}

FunctionSignatures::~FunctionSignatures()
{

}
