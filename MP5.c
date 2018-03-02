/* ========================================================
Leah Perry								  CIS 160 Fall 2014
MP5						 				Submitted: 11/17/14
Palindrome Checker						Revised on: -------


Data Dictionary
Variable				Used to
--------				-------
num						user inputted number
OriginalNum				holds original num
ReverseNum				to hold the reversed number
MainLoopInput			determines whether or not the user wants to repeat the program

Functions Called		What They Do
----------------		------------
ReverseNumber			Reverses the inputted number
MainLoop				To allow the user to repeat the code

C:\User\Owner\My Documents\Visual Studio 2013\Projects\MP5
==========================================================*/

//precompiler directives
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

//function prototypes go here
long long int ReverseNumber(long long int num, long long int ReverseNum);
int MainLoop();

//main function
int main (void) 
{
	/* ========================================================
	Leah Perry								  CIS 160 Fall 2014
	MP5							 			Submitted: 11/17/14
	Checks User Input for Palindrome		Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	num						user inputted number
	OriginalNum				holds original num
	ReverseNum				to hold the reversed number
	MainLoopInput			determines whether or not the user wants to repeat the program

	Functions Called		What They Do
	----------------		------------
	ReverseNumber			Reverses the inputted number
	MainLoop				To allow the user to repeat the code

	==========================================================*/
	//insert code here

	long long int num; //user inputted number
	long long int OriginalNum; //holds original num
	long long int ReverseNum; //to hold the reversed number
	int MainLoopInput = 1; //set as 1 so the program runs once

	while (MainLoopInput == 1) {
		ReverseNum = 0;
		printf("Insert a number to check if it is a palindrome. ");//num prompt
		scanf_s("%llu", &num, 100); //scan num
		OriginalNum = num; //holds origiinal num
		printf("%llu\n", OriginalNum); //to make sure num is scanning right
		ReverseNum = ReverseNumber(num, ReverseNum); //reverses num
		printf("%llu\n", ReverseNum);
		if (ReverseNum == OriginalNum) {
			printf("%llu is a palindrome.\n", OriginalNum);
		} //end palindrome then
		else {
			printf("%llu is not a palindrome.\n", OriginalNum);
		} //end notpalindrome else
		MainLoopInput = MainLoop(); //checks if user wants to rerun program
	}
		scanf_s("%llu", &num, 5000); //holds window open
	
return 0;
} //end main function

//insert function definitions here

long long int ReverseNumber(long long int num, long long int ReverseNum)
{
	/* ========================================================
	Leah Perry								  CIS 160 Fall 2014
	MP5							 			Submitted: 11/17/14
	Reverses num							Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	num						User inputted number
	ReverseNum				Stores the reversed number as it is built

	Functions Called		What They Do
	----------------		------------
	ReverseNumber			reverses a number 

	==========================================================*/
	//code
	if (num > 0)
	{
		ReverseNum = (ReverseNum * 10) + (fmod(num,10)); //gets end number from num
		num = num / 10; //removes end number from num
		ReverseNum = ReverseNumber(num, ReverseNum); //recurses function again to get the next number
	}
	return ReverseNum; //returns the reverse of num
}//end PalindromeChecker

int MainLoop()
{
	/* ========================================================
	Leah Perry								  CIS 160 Fall 2014
	MP5							 			Submitted: 11/17/14
	Does the User Want to Rerun Code?		Revised on: -------


	Data Dictionary
	Variable				Used to
	--------				-------
	int MainLoopInput		holds value to determine answer

	Functions Called		What They Do
	----------------		------------

	==========================================================*/
	int MainLoopInput;
	printf("Do you want to run the program again? \nEnter 1 to continue the program, anything else will exit."); //exit prompt
	scanf_s("%d", &MainLoopInput, 1); //scan user response
	return MainLoopInput; //returns answer
}//End MainLoop
