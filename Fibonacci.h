/*****************************************************
*	Fibonacci.h
*
*	Dustin Meckley
*	ciss350
*
*	6/24/2015
*
*	Source file for the Fibonacci class. 
*****************************************************/
#ifndef FIBONACCI_H_
#define FIBONACCI_H_

#include <iostream>
#include <cstdlib>
using namespace std;

class Fibonacci
{
public:
	// Exception Handler Inner Classes:
	// --------------------------------
	class InvalidChoiceException
	{
	public:
		void message()
		{
			cerr << "Invalid function choice by the user!" << endl;
			exit(0);
		}
	};
	class InvalidInputException
	{
	public:
		void message()
		{
			cerr << "Invalid input value by the user!" << endl;
			exit(0);
		}
	};

	// Constructors and Destructors:
	// -----------------------------
	Fibonacci();
	~Fibonacci();

	// Public Methods:
	// ---------------
	static int rfib(int);
	static int ifib(int);

	void setChoice(char);
	void setInput(int);
	
	char getChoice() const;
	int getInput() const;

private:
	// Private Members:
	// ----------------
	int input;
	char choice;
};

#endif