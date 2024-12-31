#pragma once 
#include  <cstdlib>
#include <ctime>
 
namespace CheeseBurgerAndNumCat
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class  GameObject abstract    //this is the main abstract class ; 
	{
		 
	public:
		int speed; 
		int  top;   
		int left;   
		int width; 
		int height; 
		//------- Below are all pure virtual funtions --------// 
		virtual void  move(System::String ^direction) = 0; //virtual function of move 
		virtual void IncreaseSpeed() = 0; 
		virtual int getTop()=0;  
		virtual int getLeft()=0 ; 
		
		 

		//-----------These are functions for a specific class or set of classes ------------// 
		virtual 	void ChangePosition(int) = 0;   //this function is use int  NAYANCATS class to reset starting postion   
		//---------------Below are non virtual functions ----------// 
		bool collide(GameObject^ obj)
		{ 
			int objWidth = obj->width;
			int objHeight = obj->height; 
			  
			int currentWidth = this->width;  // Width of the current object (cat)
			int currentHeight = this->height;  // Height of the current object (cat)

			// Check if the objects are overlapping based on their position and size 
			//We used Abs function  for subtraction bcz  we wanted a postive number even if result of subtraction is -ve 
		if (Math::Abs(this->top - obj->top) < (currentHeight/2 + objHeight/2) &&
				Math::Abs(this->left - obj->left) < (currentWidth/2 + objWidth/2) )
		
			{ 
				//in the  code snippet currentHeight + objHeight   we check the total hight of the objext 
				//so if both height are greater  the there distance then we can say they have colided 
				//ex  distance is 7pxiels < 16 pixesls total height  
				 return true;  // Objects are colliding
			} 

			return false;
		} 
		

	};


	
 
} 

