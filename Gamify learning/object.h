#ifndef  GAMESOBJ_H
#define GAMESOBJ_H
#include <iostream> 
#include <string >
#include "student.h"
namespace GameofCards
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public  ref  class GameMain
	{
	public:
		array<String^>^ Questions;
		array<String^>^ Answers;

	public:

		virtual void set() = 0;

	};
}
#endif // ! QUIZ_H 
