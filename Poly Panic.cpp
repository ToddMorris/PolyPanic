// Poly Panic.cpp : Defines the entry point for the console application.
//
#include "raylib.h"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [shapes] example - basic shapes drawing");

	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("some basic shapes available on raylib", 20, 20, 20, DARKGRAY);

		DrawLine(18, 42, screenWidth - 18, 42, BLACK);

		DrawCircle(screenWidth / 4, 120, 35, DARKBLUE);
		DrawCircleGradient(screenWidth / 4, 220, 60, GREEN, SKYBLUE);
		DrawCircleLines(screenWidth / 4, 340, 80, DARKBLUE);

		DrawRectangle(screenWidth / 4 * 2 - 60, 100, 120, 60, RED);
		DrawRectangleGradientH(screenWidth / 4 * 2 - 90, 170, 180, 130, MAROON, GOLD);
		DrawRectangleLines(screenWidth / 4 * 2 - 40, 320, 80, 60, ORANGE);


		DrawTriangle(Vector2 { (float)screenWidth / 4 * 3, 80 },
			Vector2 {
			(float)screenWidth / 4 * 3 - 60, 150
		},
			Vector2 {
			(float)screenWidth / 4 * 3 + 60, 150
		}, VIOLET);

		DrawTriangleLines(Vector2 { (float)screenWidth / 4 * 3, 160 },
			Vector2 {
			(float)screenWidth / 4 * 3 - 20, 230
		},
			Vector2 {
			(float)screenWidth / 4 * 3 + 20, 230
		}, DARKBLUE);

		DrawPoly(Vector2 { (float)screenWidth / 4 * 3, 320 }, 6, 80, 0, BROWN);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}

