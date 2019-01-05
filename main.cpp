/*****************************************************
*	Fibonacci.cpp
*
*	Dustin Meckley
*	ciss350
*
*	6/24/2015
*
*	Test Driver file for the Fibonacci class. 
*****************************************************/
#include <iostream>
using namespace std;

#include "Fibonacci.h"

// main() Method:
// --------------
int main()
{
	// Try creating a Fibonacci Object Instance:
	try
	{
		// Fibonacci Class Instance:
		Fibonacci f;
	}
	// If invalid function choice exception is thrown:
	catch(Fibonacci::InvalidChoiceException e)
	{
		e.message();
	}
	// If invalid input value exception is thrown:
	catch(Fibonacci::InvalidInputException e)
	{
		e.message();
	}

	return 0;
}







