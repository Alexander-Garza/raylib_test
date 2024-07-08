#include "raylib.h"

int main() 
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Raylib basic window");
    SetTargetFPS(120);
    while(!WindowShouldClose()) 
    {
        BeginDrawing();
        if(IsKeyDown(KEY_LEFT_ALT) && IsKeyPressed(KEY_ENTER))
        {
            //ToggleFullscreen();
            ToggleBorderlessWindowed();
        }
        ClearBackground(RED);
        DrawText("It works!", 20, 20, 20, BLACK);
        DrawText("not a trojan", 20, 200, 15, YELLOW);
        DrawFPS(0, 0);
        EndDrawing();
    }
    
    // Cleanup
    CloseWindow();
    return 0;
}