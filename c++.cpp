#include <iostream>

using namespace std;

int main()
{
	int a, b, result;
	string operation = "";
	bool ok = true;
	do{
		cout << "give me a number:\n>";
		cin >> a;
		cout << "give me another number:\n>";
		cin >> b;
		cout << "select an operation('+', '-', '*' or '/'):\n>";
		cin >> operation;
		if(operation == "+" || operation == "-" || operation == "*" || operation == "/" )
			ok = true;

	bool error = false;

	if(operation == "+")
		result = a + b;
	else if(operation == "-")
		result = a - b;
	else if(operation == "*")
		result = a * b;
	else if(operation == "/")
		if(b == 0)
			error = true;
		else
			result = a / b;

	if(error)
		cout << "Incorrect value of second number." << endl;
	else
		cout << result << endl << endl;


	}while(ok);
	return 0;
}
