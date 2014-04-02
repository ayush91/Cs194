// GuptaPassword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int up = 0;
	int dig = 0;
	int low = 0;
	char string1[25];
	cout << " Enter the password" << endl;
	cin >> string1;
	
	if ( string1[6] >= NULL)
	{
		cout << " the program is more than 6 letters or num " << endl;
		for (i = 0; i < strlen(string1);i++)
		{
			if (isdigit(string1[i]))
			{
				dig = 1;
				
			}
			
		}
			for (i = 0; i < strlen(string1);i++)
		{
			if (isupper(string1[i]))
			{
				up = 1;
				
			}
			
		
		}
			for (i = 0; i < strlen(string1);i++)
		{
			if (islower(string1[i]))
			{				
				low = 1;
				break;			
				
			}
			
		}
		
	}
	else if ( string1[6] < NULL)
	{
		cout << " it dont works " << endl;
		cout << " Your password is wrong" << endl;
		cout << " please enter a password bigger than six digits " << endl;
		cout << " must have an uppercase letter, lowercase and a digit " << endl;
	
	}
	else 
	{
	}

	if ( up == 0)
	{
		cout << " The is not an uppercase letter " << endl;
	}
	if ( low == 0)
	{
		cout << " there isn't a lowecase letter " << endl;
	}
	if ( dig == 0)
	{
		cout << " there isn't a digit in password " << endl;
	}
	
	return 0;
}
