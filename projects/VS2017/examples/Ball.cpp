#include "Ball.h"
#include "raylib.h"
#include <iostream>

using namespace std;

Ball::Ball()
{
}

Ball::Ball(int x, int y, int size, int speed)
{
	ballX = x;
	ballY = y;
	ballSize = size;
	speedX = speed;
	speedY = speed;
}
Ball::~Ball() {};

void Ball::Update() 
{
	ballX += speedX;
	ballY += speedY;

	if (ballY < 0 || (ballY + ballSize) > GetScreenHeight()) 
	{
		speedY = -speedY;
	}
	else if (ballX < 0 || (ballX + ballSize) > GetScreenWidth())
	{
		speedX = -speedX;
	}
}

void Ball::Draw() 
{
	DrawRectangle(ballX, ballY, ballSize, ballSize, BEIGE);
}



