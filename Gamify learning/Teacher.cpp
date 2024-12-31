#include "Teacher.h"
namespace GameofCards
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	teacher::teacher(int size)
	{
		count = 0;
		TotalStudents = size;
		students = gcnew array<student^>(size);
	}
	void  teacher::addStudent(student^ obj)
	{
		if (count < TotalStudents)
		{
			students[count] = obj;
			count++;
		}
		else
			MessageBox::Show("STUDNETS ARE ALREADY FULL!!! ");
	}
	String^ teacher::Display()
	{
		String^ progress;
		for (int i = 0; i < count; i++)
		{
			progress += students[i]->ShowProgress();

		}
		return progress;
	}
	student^ teacher::searchStudent(String^ studentName)
	{
		for (int i = 0; i < count; i++)
		{
			if (studentName == students[i]->getName());
			return students[i];
		}
		student^ temp;
		temp->setName("Guest ");
		return temp;
	}
}