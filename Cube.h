// COPYRIGHTS.© ABANOB AYOUB
// Description: Class header file

#pragma once
#include<string>
using namespace std;
class Cube
{
private:
	int side;
	string SingleSpace;
	string SingleStar;
	int spacesBefore;
	int spacesOnRight;
	int spacesBetween;

public:
	Cube(); //constructor to set intial values
	int getSide(); //getter
	void setSide(int sidePar); //setter
	void drawFirstLine(int userInputPar);
	void drawUpperHalf(int userInputPar);
	void drawMidLine(int userInputPar);
	void drawButtomHalf(int userInputPar);
	void drawLastLine(int userInputPar);
	void displayCube(int userInputPar);
};

// COPYRIGHTS.© ABANOB AYOUB
// COPYRIGHTS.© ABANOB AYOUB
