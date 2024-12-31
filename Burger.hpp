#pragma once
#ifndef BURGER_HPP
#define BURGER_HPP
#include <iostream> 
#include "GameObject.h"
namespace CheeseBurgerAndNumCat
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	  
	public ref class  Burger:  public GameObject
	{
		  
	public:
		Burger(int,int,int,int ); 
		void move(String^ direction) override;// over riding the move function 
		 
		void IncreaseSpeed() override; 
		int getLeft() override  ;  
		int getTop() override;  

		void ChangePosition(int) override;//this is just a dummy function it has no use but can be used in future
	}; 
}
#endif BURGER_HPP