// COPYRIGHTS.© ABANOB AYOUB
// Description: Class implementation file

#include <iostream>
#include "Cube.h"
using namespace std;

Cube::Cube()
{
	side = 0;
	SingleSpace = " ";
	SingleStar = "*";
}

int Cube::getSide()
{
	return side;
}

void Cube::setSide(int sidePar)
{
	side = sidePar;
}

void Cube::displayCube(int userInputPar)
{
	drawFirstLine(userInputPar);
	drawUpperHalf(userInputPar);
	drawMidLine(userInputPar);
	drawButtomHalf(userInputPar);
	drawLastLine(userInputPar);
}

void Cube::drawFirstLine(int userInputPar)
{
	for (int i = 0; i < userInputPar-1 ; i++)
	{
		cout << SingleSpace;
	}
	for (int i = 0; i < userInputPar; i++)
	{
		cout << SingleStar;
	}
	cout << "\n"; // Drawing the first line is done, go to the next line
}

void Cube::drawUpperHalf(int userInputPar)
{
	for (int i = 0; i < userInputPar-2; i++) //Line number
	{
		spacesOnRight = i;
		spacesBefore = i;
		spacesBetween = 0;

		while (spacesBefore < userInputPar - 2) //Draw Spaces Before
		{
			cout << SingleSpace;
			spacesBefore+=1;
		}
		cout << SingleStar; //Draw a star

		while (spacesBetween < userInputPar - 2)//Draw Spaces Between
		{
			cout << SingleSpace;
			spacesBetween += 1;
		}
		cout << SingleStar; //Draw a star

		while(spacesOnRight>0) //Draw spaces on the right side
		{
			cout << SingleSpace;
			spacesOnRight = spacesOnRight - 1;
		}
		cout << SingleStar; //draw a star 
		cout<<"\n"; //go to the next line
	}
}

void Cube::drawMidLine(int userInputPar)
{
	for (int i = 0; i < userInputPar; i++)
	{
		cout << SingleStar;
	}
	for (int i = 0; i < userInputPar - 2; i++)
	{
		cout << SingleSpace;
	}
	cout << SingleStar;
	cout << "\n"; // Drawing the Mid line is done, go to the next line
}

void Cube::drawButtomHalf(int userInputPar)
{

	for (int i = 0; i < userInputPar - 2; i++) //Line number
	{
		spacesOnRight = i;
		spacesBetween = 0;

		cout << SingleStar; //Draw a star

		while (spacesBetween < userInputPar - 2)//Draw Spaces Between
		{
			cout << SingleSpace;
			spacesBetween += 1;
		}
		cout << SingleStar; //Draw a star

		while (spacesOnRight < userInputPar-3) //Draw spaces on the right side
		{
			cout << SingleSpace;
			spacesOnRight = spacesOnRight + 1;
		}
		cout << SingleStar; //draw a star 
		cout << "\n"; //go to the next line
	}
}

void Cube::drawLastLine(int userInputPar)
{
	for (int i = 0; i < userInputPar; i++)
	{
		cout << SingleStar;
	}
	cout << "\n\n"; // Drawing the last line is done
}

// COPYRIGHTS.© ABANOB AYOUB
// COPYRIGHTS.© ABANOB AYOUB
