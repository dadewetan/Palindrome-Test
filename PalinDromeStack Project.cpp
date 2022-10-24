//Written By: Daniel Adewetan
//Completed: 10/23/2022
//Description: This code will decide whether the string entered by the user is palindrome.
#include<iostream> //Header file
#include<string>
#include<stack>
using namespace std;

int main(int argc, const char* argv[])
{
	string str; //String object named "str"
	stack<char>StackMyStack; //Stack object named "StackMyStack"
	string temp; //String object named "temp"
	char pi; //Character object named "pi"

	cout << "Please enter a sentence: " << endl; //Asking user to enter a sentence
	getline(cin, str);

	cout << "This is the sentence you have entered: " << endl; //Displaying the sentence
	cout << str << endl;

	for (string::iterator th = str.begin(); th!= str.end(); ++th) 
	{  //assigning the stack with content from string str
		pi = *th;
		StackMyStack.push(pi);
		cout << *th << " ";
	}

	for (string::iterator th = str.begin(); th != str.end(); ++th)
	{ 
		pi = *th; //comparing content in str and stack
		temp.push_back(StackMyStack.top()); 
		StackMyStack.pop();
	}

	if (str == temp) //Display if it's a palindrome
	{
		cout << "\nThis is a palindrome." << endl;
	}
	else //Display if it's not a palindrome
		cout << "\nThis is not a palindrome." << endl;

	cout << endl << endl;
	return 0;

}