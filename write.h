#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// write function prototype
long int writeFunction(long int);



//beggining of write function
long int writeFunction(long int lastNumber)
{


//counter variable for txt file writing
int counter = 1;
int outputWriteMessageOnce = 1;
//opens the file, names it numberlist_1.txt
	ofstream outputFile1, outputFile2, outputFile3,
	         outputFile4, outputFile5, outputFile6,
             	 outputFile7, outputFile8, outputFile9,
            	 outputFile10, outputFile11, outputFile12;
             
             
	while(outputWriteMessageOnce == 1 && lastNumber >= 1)   
		{
		cout << "\nWriting first file...";
		outputFile1.open("numberlist_1.txt");
		outputWriteMessageOnce++;
		}
	



	//outputs the first set of zeros
	outputFile1 <<"0\n"
				  "00\n"
				  "000\n"
				  "0000\n"
				  "00000\n"
				  "000000\n"
				  "0000000\n"
				  "00000000\n"
				  "000000000\n"
				  "0000000000\n"
				  "00000000000\n"
				  "000000000000\n"
				  "0000000000000\n"
				  "00000000000000\n"
				  "000000000000000\n"
				  "0000000000000000\n"
				  "00000000000000000\n"
				  "000000000000000000\n"
				  "0000000000000000000\n"
				  "00000000000000000000\n";
//this part does the writing 


while(counter <= lastNumber)
{
      
//first part that states output as long as the number
// is less then 2Mil.
       while(counter > 0 && counter <= 200000000 && counter <= lastNumber)
       {
		  outputFile1 << counter << "\n";
		  counter++;
       }
       
       // at this point it exits when 200000001 is reached
       //and closes the file
       
       outputFile1.close();
       
//second file section      
         
// the writing message for second file
	while(outputWriteMessageOnce == 2 && lastNumber > 200000000)   
		{
		cout << "\nWriting second file...";
		outputFile2.open("numberlist_2.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 200000001 && counter <= 393000000 && counter <= lastNumber)
	   {
		  outputFile2 << counter << "\n";
		  counter++;
       }
       
// the close for output2
	   outputFile2.close();
		
		
		
//and the third for file three		
		
// the writing message for third file
	while(outputWriteMessageOnce == 3 && lastNumber > 393000000)
		{
		cout << "\nWriting third file...";
		outputFile3.open("numberlist_3.txt");
		outputWriteMessageOnce++;
		}
// writing of the third file
	   while(counter >= 393000001 && counter <= 586000000 && counter <= lastNumber)
	   {
			outputFile3 << counter << "\n";
			counter++;
	   }
	 
//close file 3
		outputFile3.close();

		
		
		
 //fourth file section      
         
// the writing message for fourth file
	while(outputWriteMessageOnce == 4 && lastNumber > 586000000)       
		{
		cout << "\nWriting fourth file...";
		outputFile4.open("numberlist_4.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 586000001 && counter <= 779000000 && counter <= lastNumber)
	   {
		  outputFile4 << counter << "\n";
		  counter++;
       }
       
// the close for output4
	   outputFile4.close();
		
		
		
		
		
//and the fifth for file five		
		
// the writing message for fifth file
	while(outputWriteMessageOnce == 5 && lastNumber > 779000000)
		{
		cout << "\nWriting fifth file...";
		outputFile5.open("numberlist_5.txt");
		outputWriteMessageOnce++;
		}
		
		
		
		
// writing of the fifth file
	while(counter >= 779000001 && counter <= 972000000 && counter <=lastNumber)
		{
			outputFile5 << counter << "\n";
			counter++;
		}
	   
//close file 5
		outputFile5.close(); 


//and the sixth for file six		
		
// the writing message for sixth file
	while(outputWriteMessageOnce == 6 && lastNumber > 972000000)
		{
		cout << "\nWriting sixth file...";
		outputFile6.open("numberlist_6.txt");
		outputWriteMessageOnce++;
		}
// writing of the sixth file
	   while(counter >= 972000001 && counter <= 1149000000 && counter <=lastNumber)
	   {
			outputFile6 << counter << "\n";
			counter++;
	   }
	   
//close file 6
		outputFile6.close(); 



//and the seventh for file seven		
		
// the writing message for seventh file
	while(outputWriteMessageOnce == 7 && lastNumber > 1149000000)
		{
		cout << "\nWriting seventh file...";
		outputFile7.open("numberlist_7.txt");
		outputWriteMessageOnce++;
		}
// writing of the 7th file
	   while(counter >= 1149000001 && counter <= 1326000000 && counter <=lastNumber)
	   {
			outputFile7 << counter << "\n";
			counter++;
	   }
	   
	   
//close file 7
		outputFile7.close(); 



//8th file section      
         
// the writing message for 8th file
	while(outputWriteMessageOnce == 8 && lastNumber > 1342000000)   
		{
		cout << "\nWriting eighth file...";
		outputFile8.open("numberlist_8.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 1376000001 && counter <= 1503000000 && counter <= lastNumber)
	   {
		  outputFile8 << counter << "\n";
		  counter++;
       }
       
// the close for output8
	   outputFile8.close();



//9th file section      
         
// the writing message for ninth file
	while(outputWriteMessageOnce == 9 && lastNumber > 1503000000)   
		{
		cout << "\nWriting ninth file...";
		outputFile9.open("numberlist_9.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 1503000001 && counter <= 1680000000 && counter <= lastNumber)
	   {
		  outputFile9 << counter << "\n";
		  counter++;
       }
       
// the close for output9
	   outputFile9.close();


//10th file section      
         
// the writing message for 10th file
	while(outputWriteMessageOnce == 10 && counter > 1680000000)   
		{
		cout << "\nWriting tenth file...";
		outputFile10.open("numberlist_10.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 1680000001 && counter <= 1857000000 && counter <= lastNumber)
	   {
		  outputFile10 << counter << "\n";
		  counter++;
       }
       
// the close for output10
	   outputFile10.close();

//11th file section      
         
// the writing message for 11th file
	while(outputWriteMessageOnce == 11 && counter > 1857000001)    
		{
		cout << "\nWriting eleventh file...";
		outputFile11.open("numberlist_11.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 1857000001 && counter <= 2034000000 && counter <= lastNumber)
	   {
		  outputFile11 << counter << "\n";
		  counter++;
       }
       
// the close for output11
	   outputFile11.close();


//12th file section      
         
// the writing message for 12th file
	while(outputWriteMessageOnce == 12 && lastNumber > 2034000000)   
		{
		cout << "\nWriting twelfth file...";
		outputFile12.open("numberlist_12.txt");
		outputWriteMessageOnce++;
		}

       
    while(counter >= 2034000001 && counter <=2147483647 && counter <= lastNumber)
	   {
		  outputFile12 << counter << "\n";
		  counter++;
       }
       
// the close for output12
	   outputFile12.close();



return 0;
}
//end of main while loop

//end of write function
}
