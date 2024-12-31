#include "Game.h"
namespace GameofCards {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	Game::Game(String^ str)
	{
		allocatedMemory(); 
		Problems=gcnew array<String^, 2>(10, 2);
		if (str == "PF")
			setPF();
		else if (str == "MATH")
			setMath();
		else
			MessageBox::Show("Error at constructor");  

		Mix(); 
		 Starttime =  DateTime::Now.Second + DateTime::Now.Minute ;//to get current time in seconds
	}  
	int  Game::CalculateScore()
	{
		int EndTime = DateTime::Now.Second + DateTime::Now.Minute;//the time when game ends  
		int TotalTime = EndTime - Starttime; 
		if (TotalTime <= 10)
			return 10;
		else if (TotalTime <= 20)
			return 5;
		else
			return 2; 
	}
	void Game::allocatedMemory()
	{
		CardsArray = gcnew array<card^>(20);
		for (int i = 0; i < 20; i++)
			CardsArray[i] = gcnew card();
	}
	void Game::setMath()
	{
		Problems[0, 0] = "10+5";
		Problems[0, 1] = "15";
		Problems[1, 0] = "12-4";
		Problems[1, 1] = "8";
		Problems[2, 0] = "9*3";
		Problems[2, 1] = "27";
		Problems[3, 0] = "20/4";
		Problems[3, 1] = "5";
		Problems[4, 0] = "15+7";
		Problems[4, 1] = "22";
		Problems[5, 0] = "18-9";
		Problems[5, 1] = "9";
		Problems[6, 0] = "5*5";
		Problems[6, 1] = "25";
		Problems[7, 0] = "36/6";
		Problems[7, 1] = "6";
		Problems[8, 0] = "14+8";
		Problems[8, 1] = "22";
		Problems[9, 0] = "20-5";
		Problems[9, 1] = "15";

		setCards(); 

	} 
	void Game::setPF()
	{
		Problems[0, 0] = "Class";
		Problems[0, 1] = "Blue\r\nprint";
		Problems[1, 0] = "Object";
		Problems[1, 1] = "Instance";
		Problems[2, 0] = "Constructor";
		Problems[2, 1] = "Initalize";
		Problems[3, 0] = "Public";
		Problems[3, 1] = "Access\r\n specifier";
		Problems[4, 0] = "Encapsulate";
		Problems[4, 1] = "Data\r\n hiding";
		Problems[5, 0] = "Inheritance";
		Problems[5, 1] = "Reuse";
		Problems[6, 0] = "Polymorphism";
		Problems[6, 1] = "Multiple\r\n forms";
		Problems[7, 0] = "Method";
		Problems[7, 1] = "Function \r\nIn\r\n Class";
		Problems[8, 0] = "Abstraction";
		Problems[8, 1] = "Essential \r\nFeatures";
		Problems[9, 0] = "Static";
		Problems[9, 1] = "Class\r\nLevel"; 
		setCards(); 

	}
	void Game::setCards()
	{
		for (int i = 0; i < 10; i++)
		{
			CardsArray[i]->set(i + 1, Problems[i, 0], false, i, i);
			CardsArray[i + 10]->set(i + 11, Problems[i, 1], false, i, i + 10);
		}
	} 
	void Game::Mix()
	{ 
		card^ ext;
		int index = 0;
		for (int i = 0; i < 20; i++)
		{
			index = rand() % 20;
			ext  = CardsArray[index];
			CardsArray[index] =CardsArray[i];
			CardsArray [i] = ext ;

		}
	}
} 