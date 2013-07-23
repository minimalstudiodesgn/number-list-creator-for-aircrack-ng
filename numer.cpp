#include <iostream>
#include <fstream>
#include <string>
#include "write.h" //the write function, split into another
//file for simplicity and ease of reading.


using namespace std;


//function prototypes
void displayMessage();
void enterChoices();
long int writeFunction(long int); // in write.h




//main function
int main()
{

// display message once
    int once = 1;
	while(once == 1)
	{
          displayMessage();
          once++;
    }
// enter choices function call
// calls the write function stored in the
// write.h file
	 enterChoices();

//the message for the end, because enterChoices calls
//the writeFunction itself
	 cout << "\nThe word list is done.\n"
	      << "Press enter to continue...\n";
     cin.ignore();
     cin.get();
     cout << "\n";
return 0;
}
//
// end of main function
//

//begining of void function
// displays the welcome and explaination message.
void displayMessage()
{
    cout << "This is a simple program to write numbers in sequence\n"
            "to a .txt file in the directory containing\n"
            "this program.\n"
            "The purpose is for the files to be used with aircrack-ng\n"
            "as number libraries.\n"
            "Maximum number is currently 2,147,483,647\n\n\n\n\n"
            "Press enter to continue...";
    cin.get();

// to try and clear the screen before the next message.
    cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n"
            "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n"
            "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";
}


//enter the choices function
void enterChoices()
{
     //varibles
long int lastNumber;
int displayOnce = 1;

//do while loop to display only once, autoincrements at end
do
{
// enter the last number of your series
    cout <<"(MAX: 2,147,483,647)\n";
	cout << "Enter the final number in the sequence:\n";
	cin >> lastNumber;


// error check
	if(lastNumber == 0)
	{
         cout << "Must be over 0";
    }

//if last number is too great exit
    else if (lastNumber > 2147483647)
    {
    cout << "The number you have selected is too large\n"
            "for this program\n"
            "Press enter to exit...";
    cin.ignore();
    cin.get();

    }
// end of error checks


// and if we've passed one final error check
// we will call writeFunction
	else if (lastNumber >= 1 && lastNumber <=2147483647)
    {
         writeFunction(lastNumber);
    }

// increments displayOnce, to display once...
displayOnce++;


} while(displayOnce == 1);
//end of do while loop


}
// end of enter choices function








