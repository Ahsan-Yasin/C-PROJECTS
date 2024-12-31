#include "Student.h"
#include <fstream>
#include <string >
#include <msclr/marshal_cppstd.h>  
#include <iostream>
namespace GameofCards
{

	using namespace System;
	using namespace System::Runtime::InteropServices;
	using namespace System::ComponentModel; 
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	void student::setName(String^ n)
	{
		name = n;
	}
	void student::setRollno(String^ n)
	{
		rollno = n;
	}
	void student::setScore(int s)
	{
		score = s;
	}
	
	void student::setSection(String^s)
	{
		section = s;  

	}
	String^ student::ShowProgress()
	{
		String^ progress;

		progress = "NAME : " + name + "\r\nROLLNO : " + rollno + "\r\nSECTION" + section + "\r\nSCORE : " + score  + "\tGAMES PLAYES: " + GamesPlayed + "\r\n";
		return progress;
	}
	String^ student::getName()
	{
		return name;
	}
	void student::store(String^ gametype)
	{
		GamesPlayed++;
		String^ str = name;
		std::string str1 = msclr::interop::marshal_as<std::string>(str);
		str = rollno;
		std::string str2 = msclr::interop::marshal_as<std::string>(str);
		std::string str3 = msclr::interop::marshal_as<std::string>(gametype);
		std::fstream handler;
		handler.open("data.txt", std::ios::app);
		if (handler.is_open())
		{

			handler << "\nNAME : " << str1 << "\t ROLLNO : " << str2 << "\t SCORE : " << score << "\T GAME PLAYED : " << str3 << "\n";

		}
		handler.close();


	}
	String^ student::getHistory()
	{
		 
		std::string str;
		std::string MainString;
		std::fstream handler;
		handler.open("data.txt", std::ios::in); 
		if (handler.is_open())
		{
			while (getline(handler, str))
			{
				MainString += str;
				MainString += "\r\n";
			}

		}

		String^ managedString = msclr::interop::marshal_as<String^>(MainString);//converting string to String^
		return managedString;
	}
}