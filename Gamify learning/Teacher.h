#ifndef  TEACHER_H
#define TEACHER_H 
#include "student.h"
namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class teacher
	{
		array<student^>^ students;
		int TotalStudents;
		int count;
	public:
		teacher(int);
		void addStudent(student^);
		String^ Display();
		student^ searchStudent(String^);

	};
}
#endif // ! TEACHER_H
