#ifndef  PUZZLE_H 
#define PUZZLE_H
#include <iostream> 
#include <string >
#include "student.h"
#include "object.h"
namespace GameofCards
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public  ref  class puzzle :public GameMain
	{


	public:
		puzzle();

		void set() override;


	};
}
#endif // ! QUIZ_H 
