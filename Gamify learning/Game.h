#ifndef  GAME_H
#define GAME_H

#include "Card.h"
namespace GameofCards {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	public ref  class Game
	{
		array<String^, 2>^ Problems; 
		int Starttime;  //This is for calcualting time 
	public: 
		
		array<card^>^ CardsArray; 
		void allocatedMemory();
		Game(String^);
		void setMath(); 
		void setPF();  
		void setCards();
		void Mix();  
		int CalculateScore();
	};
}
#endif GAME_H 