#include <iostream>

#include "game.h"

void drawProgramInfo()
{
	// Set color to magenta
	Colorizer::getInstance().setTextColor(FONT_MAGENTA);

	printf("+================================================+\n");
	printf("\t    Connect N AI Project\n\n");
	printf("\t\t    Date\n");
	printf("\t\t  3/11/2019\n\n");
	printf("+================================================+\n");
	printf("\t\t Information\n");
	printf("+================================================+\n\n");
	printf("Description:\n");
	printf("\tThis project aims to simulate an AI-driven air-defense system of a randomly generated country. [TODO: Add more to this as time progresses]\n\n");
	printf("Tips:\n");
	printf("\t-At any point you can press 'esc' to quit!\n\n");
	printf("+================================================+\n");
	printf("\t\tBeginning Simulation\n");
	printf("+================================================+\n");
	printf(" \n");

	// Set color back to default
	Colorizer::getInstance().setTextColor();
}

int main()
{
	drawProgramInfo();

	Game game;

	game.begin();

	return 1;
}