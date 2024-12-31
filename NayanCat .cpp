#include "NayanCat.h"
namespace CheeseBurgerAndNumCat
{
	
	NayanCat::NayanCat(int x,int height,int width  )
	{
		top = x; //giving starting value of nayan cat 
		speed = 8; 
		this->height = height; 
		this->width = width; 
	 }
	void NayanCat::move(String ^direction) 
	{ 
		if (direction == "fall") 
			top += speed;
		else if (direction == "start") 
			top = 0; //this will make it start from 0 again 

		 
	}
	int NayanCat::getTop()
	{
		return top; 
	}
	void NayanCat::IncreaseSpeed()
	{
		GameObject::speed += 5 ;   
	 }
	void NayanCat::ChangePosition(int width )
	{
		top = 0; 
	   left =rand() %( width+1) ;

	}
	int NayanCat::getLeft()
	{
		return left; 
	}

} 