#include "PowerUp.hpp"
namespace CheeseBurgerAndNumCat
{
	PowerUp::PowerUp(int x,int heght,int wid)
	{
		this->height = heght; 
		this->width = wid; 
		this-> speed = x;  
		this->top = 0; 
		this->left = rand() % 600;
	 }
	
	int PowerUp::getLeft()
	{ 
		return left; 
	}
	int PowerUp::getTop()
	{
		return top;  
	}
	void PowerUp::move(String^ direction)
	{
		if (direction == "fall")
			top += speed;
		else if (direction == "start")
			top = 0; //this will make it start from 0 again 
		 
	}
	void PowerUp::IncreaseSpeed()
	{
		speed += 4; 
	}
	void PowerUp::ChangePosition(int width) 
	{
		top = 0;
		left = rand() % (width + 1);

	} 

}