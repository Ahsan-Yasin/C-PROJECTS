#include "Quiz.h"
namespace GameofCards
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Quiz::Quiz()
	{
		Questions = gcnew array<String^>(10);
		Answers = gcnew array<String^>(10);
		set(); 
	}
	void Quiz::set()
	{
		// Assigning questions about OOP in C++
		Questions[0] = "What is the basic building block of OOP?";
		Questions[1] = "Which principle hides implementation details?";
		Questions[2] = "What principle allows objects to share a common interface?";
		Questions[3] = "What type of inheritance uses the base class as a prototype?";
		Questions[4] = "What is the term for creating multiple methods with the same name but different signatures?";
		Questions[5] = "Which OOP principle allows objects to behave differently based on their type?";
		Questions[6] = "What keyword is used to define a class in C++?";
		Questions[7] = "What type of function is not associated with any object instance?";
		Questions[8] = "Which type of inheritance involves one class inheriting from multiple classes?";
		Questions[9] = "What access specifier is used to allow access only within the class?";

		// Assigning answers (1 word)
		Answers[0] = "Object";
		Answers[1] = "Encapsulation";
		Answers[2] = "Polymorphism"; 
		Answers[3] = "Prototype";
		Answers[4] = "Overloading";
		Answers[5] = "Polymorphism";
		Answers[6] = "class";
		Answers[7] = "Static";
		Answers[8] = "Multiple";
		Answers[9] = "Private";
	}
}