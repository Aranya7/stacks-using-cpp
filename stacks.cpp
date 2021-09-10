#include <iostream>
using namespace std;
class Stack
{
public:
	Stack()
	{
		cout << "Stack Constructed\n";
	}
	~Stack()
	{
		cout << "Stack Destroyed\n";
	}
};
class VariableStack: public Stack
{
public:
	VariableStack()
	{
		cout << "VariableStack Constructed\n";
	}
	~VariableStack()
	{
		cout << "VariableStack Destroyed\n";
	}	
};
class SystemVariableStack: public VariableStack
{
public:
	SystemVariableStack()
	{
		cout << "SystemVariableStack Constructed";
	}
	~SystemVariableStack()
	{
		cout << "SystemVariableStack Destroyed";
	}
	
};

class UserVariableStack: public VariableStack
{
public:
	UserVariableStack()
	{
		cout << "UserVariableStack Constructed";
	}
	~UserVariableStack()
	{
		cout << "UserVariableStack Destroyed";
	}
	
};

int main(int argc, char const *argv[])
{
	UserVariableStack A;
	return 0;
}
