#include "Burger.hpp"
namespace CheeseBurgerAndNumCat
{
	Burger::Burger(int x,int height,int widht ,int tp )
	{
		this-> left  = x; 
		this->speed = 10; 
		this->height = height; 
		this->width = width; 
		this->top = tp; 
	}  
	void Burger::move(System::String^direction) 
	{
		if (direction == "left") //this is to avoid goind out of boundry of left 
		{
			if(left>=0)
			left  -= speed;
		} 
		if (direction == "right")
		{ 
			if(left<=900)//this is the  max left limit of my screen  
			left += speed;
		}
	}
	void Burger::IncreaseSpeed()  
	{  
		speed += 5;
	}  
	int Burger::getLeft()
	{  
		return left;
	} 
	int Burger::getTop()
	{
		return top; 
	}
	void Burger::ChangePosition(int x){}
}