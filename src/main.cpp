#include <iostream>
#include <functional>
#include <map>
#include <string>

using namespace std;

int main(){

	map<char, function<double(double, double)>> operations;

	operations['-'] = [](double x, double y) { return x - y; };
	operations['+'] = [](double x, double y) { return x + y; };
	operations['*'] = [](double x, double y) { return x * y; };
	operations['/'] = [](double x, double y) { return y != 0 ? x / y : 0;};

	
	double a = 0.0;
	double b = 0.0;
	char op;

	cout << "Input desired calculation. eg. '5 + 3'" << endl;
	cin >> a >> op >> b;

	if (operations.find(op) != operations.end())
	{
		cout << "Result: ";
		cout << operations[op](a, b) << endl;
	}
	else
	{
		cout << "Error: Unknown Input" << endl;
	}

	return 0;

}
