// COPYRIGHTS.© ABANOB AYOUB
// Description: passing the side size of a cube, the system will draw it.

#include <iostream>
#include "Cube.h"
using namespace std;

int main()
{
	//Declrations
	Cube myCube;
	int userInput;
	char repeat;
	bool tryAgain = true;

	while (tryAgain == true) 
	{
		cout << "Enter the side size of your cube: "; //Get User Input
		cin >> userInput;

		myCube.setSide(userInput);   //Assign the userInput to the Side Value 
    		myCube.displayCube(myCube.getSide()); // Display the Cube
		cout << "\n";

		cout << "Do you want to try again (Y/N)?  ";
				cin >> repeat;
				if (repeat == 'Y' || repeat == 'y')
					tryAgain = true;
				else
					tryAgain = false;
	}
	cout << "Alright, have a good day. Bye!\n";

	return 0;
}//END

// COPYRIGHTS.© ABANOB AYOUB
// COPYRIGHTS.© ABANOB AYOUB
