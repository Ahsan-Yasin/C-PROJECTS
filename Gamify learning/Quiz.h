#ifndef  QUIZ_H 
#define QUIZ_H
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
	public  ref  class Quiz :public GameMain
	{


	public:
		Quiz();

		void set() override;


	};
}
#endif // ! QUIZ_H 
