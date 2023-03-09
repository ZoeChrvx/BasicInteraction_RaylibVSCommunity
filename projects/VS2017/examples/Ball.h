#pragma once
class Ball
{
private:
	int ballX;
	int ballY;
	int ballSize;
	int speedX;
	int speedY;

public:
	Ball();
	Ball(int x, int y, int size, int speed);
	~Ball();

	void Update();
	void Draw();
	
};

