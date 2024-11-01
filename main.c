#include <stdio.h>
#define RAYGUI_IMPLEMENTATION

#include "src/raygui.h"
#include "src/raylib.h"



int main(){



    // Raylib Initialization
    //const int screenWidth = 1024;
    //const int screenHeight = 768;


    
    InitWindow(800, 600, "PMLinker");
    SetTargetFPS(60);


    while (!WindowShouldClose()) {

        //BeginDrawing();
        //ClearBackground(RAYWHITE);


        //float deltaTime = GetFrameTime();
        //updatePlayer(&player, deltaTime);
        //drawPlayer(&player);

        //int countFPS = GetFPS();
        //DrawText(TextFormat("FPS: %i", countFPS), screenWidth - 100, 15, 20, BLUE);
        //DrawText(TextFormat("ver. 021024"), screenWidth - 150, screenHeight - 100, 20, BLUE);

        //EndDrawing();


        BeginDrawing();

        
        ClearBackground(RED); 
            

        EndDrawing();

    
    }

    CloseWindow(); // Close window and OpenGL context

    return 0;
}