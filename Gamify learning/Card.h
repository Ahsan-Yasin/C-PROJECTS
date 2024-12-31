#ifndef  CARD_H
#define CARD_H
#include <ctime>
#include <cstdlib>
//these will be used in another class 
namespace GameofCards {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	public  ref class card
	{
		public:
			int Number;
			String^ Text;
			bool isMatch;
			int Id;
			int cardNumber;
			void set(int number, String^ str, bool bl, int id, int numCard)
			{
				cardNumber = numCard;
				Number   = number;
				Text  = str;   
				isMatch = bl; 
				Id = id;  
			}
		
	};
}
#endif // ! CARD_H