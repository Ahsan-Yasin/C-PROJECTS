#pragma once 

#include "GameObject.h"
namespace CheeseBurgerAndNumCat
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class NayanCat :public GameObject
	{
	
	public: 
		NayanCat(int,int ,int ); 
		//---------------Below are funtions of core process and positoning of cat ---------------//   
		void move(String ^direction )override;   //funtion to make cat fall 
		void IncreaseSpeed() override ;//funton to increase the speed of falling cat 
		void ChangePosition(int ) override;  //this funtion will cahnge the  position of nayan cat when it hits the bottom 
		 
		//----------Below are getters setters -------------//
		int getTop() override; //funtion to get value of top   
		int getLeft() override ;//funcion  to get value of left means the verrtical postion of cat
	};
}

