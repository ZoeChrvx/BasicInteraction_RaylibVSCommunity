#include "raylib.h"
#include <iostream>
#include <string>
#include "Ball.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 450;

Ball ball;

void Update();
void Draw();

int main(int argc, char* argv[])
{
    
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Pong");
    SetTargetFPS(60);

    ball = Ball(100, 100, 32, 5);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        Update();

        Draw();
    }

    CloseWindow();

    return 0;
}

void Update() 
{
    ball.Update();
}

void Draw() 
{
    BeginDrawing();

    ClearBackground(DARKPURPLE);
    ball.Draw();
    EndDrawing();
}