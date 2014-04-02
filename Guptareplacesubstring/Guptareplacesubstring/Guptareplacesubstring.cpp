// Guptareplacesubstring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string enter1;
	int x = 0;
	int j = 0;
	string find;
	string change;

	cout << " enter a sentence " << endl;
	getline(cin,enter1);

	cout << " you entered:  ";
	cout << enter1 << endl;

	cout << " Enter the word you are looking for " << endl;
	cin >> find;

	x = enter1.find(find);

	if ( enter1.find(find) != -1)
	{
		
			
		cout << " you want to change to " << endl;
		cin >> change;
		
	}

	while(x != -1 )
	{
		
		if(x != -1)
		{
			enter1.replace(x,find.length(), change);
		}
		
		x = enter1.find(find);
	
	}
	cout << enter1 << endl;
	return 0;
}

