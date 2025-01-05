#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp> 
#include <iostream>  
#include <ctime > 
#include <cstdlib> 
#include <Windows.h>
using namespace std;
using namespace sf; 
class Game 
{    
	RenderWindow* window;  
	Event ev;  
	VideoMode WindowSize;  
	View view;  
	RectangleShape rec;   
	Sprite ball;  
	Texture ballTexture;  
	int ballPositionY;  
	int bottom; 
	Sprite ground; 
	Texture GroundTexture; 
	Sprite food; 
	Texture foodTexture;  
	Text ScoreBox;  
	Text HealthBox; 
	Font font; 
	Sprite background;  
	Texture  BackroundTexture ;  
	Sprite obstical; 
	Texture obsticalTexture; 

	int screenHeight;   
	int screenWidth;  
	int speed; 
	float height; 
	float width;  
	int score;  
	int health; 
	int x, y;  
	float     backgroundPositionX; 
	int obsX; 
	void iniVaribales();  

public: 
	Game();  
	~Game(); 
	void update(); 
	void render();   
	void start(); 
	void ballMovement(); 
	void ballChange(); 
	void setFood(); 
	void checkFood();  
	void eatenFood(); 
	void changes();   
	void hit(); 
};

