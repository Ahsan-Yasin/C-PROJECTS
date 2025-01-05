#include "Game.h"

void Game::iniVaribales()
{ 
    srand(int(time(0))); 
    speed = 100;
    height = 1000;
    width = 800;
    WindowSize.height = 1000;
    WindowSize.width = 800;
    screenHeight = window->getSize().y;
    screenWidth = window->getSize().x; 
    view.reset(FloatRect(0.f, 0.f, 800.f, 600.f));
    rec.setSize(Vector2f(100.f, 100.f)); 
    rec.setFillColor(Color::Red);  
    rec.setOutlineColor(Color::Black);
    rec.setOutlineThickness(2.f);  
    rec.setPosition(100, 100); 
    ///setting up my ball 
    ballTexture.loadFromFile("ball.png");
    ball.setTexture(ballTexture); 
    ball.scale(0.3f, 0.3f);
    ballPositionY = screenHeight - ball.getGlobalBounds().height;
    ballPositionY += 55; 
    bottom = ballPositionY;
    ball.setOrigin(ball.getLocalBounds().width / 2.f, ball.getLocalBounds().height / 2.f);
    ball.setPosition(100.f, ballPositionY); 
    ///setting up ground 
    GroundTexture.loadFromFile("ground.png");
    ground.setTexture(GroundTexture);
    ground.setPosition(0.f, screenHeight - 40);
    float groundWidth = static_cast<float>(screenWidth) / ground.getGlobalBounds().width;
    ground.scale(groundWidth, 1.f);
    window->setFramerateLimit(40);   
    //setting up  food   
    foodTexture.loadFromFile("food.png"); 
    food.setTexture(foodTexture);       
    x = 300; 
    y = 200;  
    food.scale(.13f, .13f); 
    food.setPosition(x, y);  
    //now setting up the text box for score  
    score = 0; 
    font.loadFromFile("font.ttf");
    ScoreBox.setFont(font);   
    ScoreBox.setString("SCORE : "+to_string(score));  
    ScoreBox.setFillColor(Color::Black); 
    ScoreBox.setPosition(10.f, 10.f); 
    ScoreBox.setCharacterSize(45.f);  
    //health box:  
    health = 3;  
    HealthBox.setFont(font);
    HealthBox.setString("HEARTS : " + to_string(health ));
    HealthBox .setFillColor(Color::Black); 
    HealthBox.setPosition(10.f, 60.f);
    HealthBox.setCharacterSize(45.f);
    //settung up my background   
    BackroundTexture.loadFromFile("background.png");  
 //   background.setOrigin(BackroundTexture.getSize().x / 2.f, BackroundTexture.getSize().y / 2.f);
    background.setTexture(BackroundTexture);  
    background.setScale(
        2*(window->getSize().x / background.getGlobalBounds().width),
        window->getSize().y / background.getGlobalBounds().height
    ); 
    backgroundPositionX = 0.f ;
    //setting up obstacals    
    obsX = screenWidth - 70; 
    obsticalTexture.loadFromFile("spike.png"); 
    obstical.setTexture(obsticalTexture); 
    obstical.setPosition(obsX , screenHeight - 140); 
    obstical.setScale(.6f, .6f); 


}  
 
Game::Game()
{
    this->window = new RenderWindow(WindowSize.getDesktopMode(), "GAME", Style::Titlebar | Style::Resize | Style::Close);
    window->display();
    iniVaribales();
    start();
}

Game::~Game()
{
    delete window;
    window = NULL;
}
  
void Game::changes()
{
    ScoreBox.setString("SCORE : " + to_string(score));
    HealthBox.setString("HEART : " + to_string(health));  
     
    ballChange();
    hit(); 
    obstical.setPosition(obsX, screenHeight - 140); 
    obsX -= 10 ; 
    if (obsX < 0)
    {
        obsX = screenWidth - 70; 
    }
     

    backgroundPositionX -= 5.f;
    if (backgroundPositionX < 0)
        backgroundPositionX = screenWidth;

    background.setPosition(backgroundPositionX - screenWidth, 0.f);
   
}
 
void Game::hit()
{ 
    if (ball.getGlobalBounds().intersects(obstical.getGlobalBounds()))
    {
        health--; 
        obsX = screenWidth - 70; 
        obstical.setPosition(obsX, screenHeight - 140  );
        
    }

}

void Game::update()
{
    if (window)
    { 
        changes(); 
    
        window->clear(Color::Cyan);  
        
        window->draw(background); 
        window->draw(HealthBox); 
        window->draw(ScoreBox);
        window->draw(ball);
        window->draw(ground);
        window->draw(food ); 
        window->draw(obstical);
        window->display();
    }
}

void Game::start()   
{
    while (window->isOpen())
    { 
        update();  
        eatenFood(); 
        checkFood();  
        
        ball.rotate(6.f);
        while (window->pollEvent(ev))
        {
            if (ev.key.code == Keyboard::Escape)
                window->close();
            ballMovement();
        }  
        if (!health)
        {
            MessageBoxW(NULL, L"The Game has Ended!", L"Game Over", MB_OK | MB_ICONINFORMATION); 
            
            window->close(); 
            return; 
        }
    }
}

void Game::ballMovement()
{
    if (ev.key.code == Keyboard::Space)
    {
        if (ballPositionY > 0)
            ballPositionY -= speed;
        else
            ballPositionY = 0;
    }
    else if (ev.key.code == Keyboard::O)
    {
        if (speed)
            speed -= 10; 
    }
    else if (ev.key.code == Keyboard::I)
    {
        if (speed < 250)
            speed += 10;
    }
} 

void Game::ballChange()
{
    if (ballPositionY < bottom)
        ballPositionY += 10;

    ball.setPosition(100.f, ballPositionY);
}

void Game::setFood()
{  
    x =  screenWidth-80;   
    y = rand() % screenHeight;  
    food.setPosition(x, y); 

} 

void Game::checkFood()
{  
    if (food.getPosition().x <= 0)
    {
        setFood();   
    }
    else
    {
        x -= 10; 
        food.setPosition(x, y);
    }
}

void Game::eatenFood()
{ 
    if (ball.getGlobalBounds().intersects(food.getGlobalBounds()))
    {
        setFood();
        score+=5 ; 
     }
    
     
}

