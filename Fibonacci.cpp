/*****************************************************
*	Fibonacci.cpp
*
*	Dustin Meckley
*	ciss350
*
*	6/24/2015
*
*	Implementation file for the Fibonacci class. 
*****************************************************/
#ifndef FIBONACCI_CPP_
#define FIBONACCI_CPP_

#include "Fibonacci.h"

// Default Constructor:
// --------------------
Fibonacci::Fibonacci()
{
	setChoice(choice);
	setInput(input);
	if(getChoice() == 'R' || getChoice() == 'r') 
	{
		cout << rfib(getInput()) << endl << endl;
	}
	if(getChoice() == 'I' || getChoice() == 'i') 
	{
		cout << ifib(getInput()) << endl << endl;
	}
}

// Destructor:
//------------
Fibonacci::~Fibonacci()
{

}

// rfib() Method:
//---------------
int Fibonacci::rfib(int input)
{
	if(input == 0 || input == 1)
		return 1;
	else
	{
		input = rfib(input - 1) + rfib(input - 2);
		return input;
	}
}

// ifib() Method:
//---------------
int Fibonacci::ifib(int input)
{
	if(input == 0 || input == 1)
		return 1;
	else if(input == 2)
		return input;
	else
	{
		int back1 = 1;
		int back2 = 1;
		int retVal = 0;

		for(int i = 2; i <= input; i++)
		{
			retVal = back1 + back2;
			back2 = back1;
			back1 = retVal;
		}

		return retVal;	
	}
}

// setChoice() Method:
//--------------------
void Fibonacci::setChoice(char choice)
{
	cout << "Users Choice (R for recursion or I for iterative):" << endl;
	for (int i = 0; i < 50; i++)
		cout << '-';
	cout << endl;
	cout << "Please enter the users choice: ";
	cin >> choice;
	if(choice == 'R' || choice == 'r') 
	{
		this->choice = choice;
	}
	else if(choice == 'I' || choice == 'i') 
	{
		this->choice = choice;
	}
	else
	{
		throw InvalidChoiceException();
	}
	cout << endl;
}

// setInput() Method:
//-------------------
void Fibonacci::setInput(int input)
{
	cout << "Users Input (Valid Range: 0 - 9):" << endl;
	for (int i = 0; i < 50; i++)
		cout << '-';
	cout << endl;
	cout << "Please enter the users input value: ";
	cin >> input;
	if(input >= 0 && input < 10)
	{
		this->input = input;
	}
	else
	{
		throw InvalidInputException();
	}
}

// getChoice() Method:
//--------------------
char Fibonacci::getChoice() const
{
	return this->choice;
}

// getInput() Method:
//-------------------
int Fibonacci::getInput() const
{
	return this->input;
}

#endif