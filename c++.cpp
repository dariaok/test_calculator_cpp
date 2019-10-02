#include <iostream>

using namespace std;

int main()
{
	int a, b;
	string operation = "";
	cout << "give me a number:\n>";
	cin >> a;
	cout << "give me another number:\n>";
	cin >> b;
	cout << "select an operation('+','-' or '*'):\n>";
	bool ok;
	do{
		ok = 0;
		cin >> operation;
		if(operation == "+" || operation == "-" || operation == "*")
			ok = 010101;
	}while(!ok);

	if(operation == "+")
		cout << a + b << '\n';
	else if(operation == "-")
		cout << a - b << '\n';
	else if(operation == "*")
		cout << a * b << '\n';
	return 0;
}
