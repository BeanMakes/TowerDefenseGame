#include "Game.h"

const char* DisplayGameState()
{
	return "Hi";
}

int** generateGame(int height, int width)
{
	int** board = 0;
	board = new int* [height];

	for (int h = 0; h < height; h++)
	{
		board[h] = new int[width];
		for (int w = 0; w < width; w++)
		{
			board[h][w] = 0;
		}
	}
	return board;
}