#ifndef  STUDENT_H 
#define STUDENT_H 
namespace GameofCards
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class student
	{

		String^ name;
		String^ rollno;
		String^ section;
		int score;
		int GamesWon;
		int GamesPlayed;

	public:
		void setSection(String^);
		void setName(String^);
		void setRollno(String^);
		void setScore(int);

		void store(String^);
		String^ getName();
		String^ ShowProgress();
		String^ getHistory();
	};
}
#endif // ! STUDENT_H 
