// Guptalinkedlisttype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "unorderedLinkedList.h"
#include "linkedList.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	unorderedLinkedList<int> list1, list2;          //Line 6
    int number1;                          
	int numchoice;
	int number;

    cout << "Line 8: Enter integers ending " 
         << "with -999" << endl;                    
    cin >> number1;                                     

    while (number1 != -999)                             
    {                                               
        list1.insertLast(number1);                      
        cin >> number1;                                
    }                                               

    cout << endl;                                   

  
    list1.print();                                  
    cout << endl;                                   
    cout << "Line 19: Length of list1: " 
         << list1.length() << endl;                

	cout << " do you want to delete the smallestnode" << endl;
	cout << " if yes press 1" << endl;
	cout << " if not press any other number" << endl;
	cin >> numchoice;
	if ( numchoice == 1)
		list1.deleteNode(number1);
    cout << endl; 

	cout << " enter the number you want to delete " << endl;
	cin >> number;

	list1.destroyList();


	return 0;
}

