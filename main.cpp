/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Koby Montenegro
 */

#include "header.h"

int main()
{
    	string operation;
    	double num1 = 0;
    	double num2 = 0;

    	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two numbers \n";

    	while(cin >> operation >> num1 >> num2)
    	{
    		double res = 0;
    		if (operation=="plus" || operation=="+") //FOR ADDING
    		{
    		    res = num1+num2;
    		}                                        //END OF ADDING
    		else if (operation=="minus" || operation=="-") //FOR SUBTRACTING
    		{
    		    res = num1-num2;
    		}                                              //END OF SUBTRACTING
    		else if (operation=="mul" || operation=="*") //FOR MULTIPLYING
    		{
    		    res = num1*num2;
    		}                                            // END OF MULTIPLYING
    		else if (operation=="div" || operation=="/") //FOR DIVIDING
    		{
    			if (num2==0)
    			{
    			    cout<<("You can't divide by zero!");
    			}
    			else
    			{
    			    res = num1/num2;
    			}
    		}                                             //END OF DIVIDING
    		else
    		{
    		    cout<<("Sorry, I don't understand...");
    		}

    		cout << num1 << operation << num2 << " == " << res <<'\n';
    		cout << "Please input different numbers";
    	}

    return 0;
}