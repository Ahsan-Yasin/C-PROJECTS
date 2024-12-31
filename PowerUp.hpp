#pragma once 
#ifndef POWERUP_HPP
#define POWERUP_HPP    
#include "GameObject.h"
namespace CheeseBurgerAndNumCat
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;   
	
	public ref class PowerUp:public  GameObject 
	{ 
		 
		 
	public: 
		PowerUp(int,int,int); 
		 
		void  move(System::String^ direction) override ; 
		void IncreaseSpeed() override ;
		int getTop() override;
		int getLeft() override;
		void ChangePosition(int) override;
	};
}
#endif // !POWERUP_HPP
