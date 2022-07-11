#include <iostream>
using namespace std;

int main()
{
	char op;
	double num1, num2, result;

	cout << "=========== calculator ===========\n\n";
	cout << "1. Addition(+)\n2. Subtraction(-)\n3. Subtraction(*)\n4. Multiplication(/)\n\n";
	cout << "-------------------------------\n\n";
	cout << "Input operator => ";
	cin >> op;
	cout << "Input divisor => ";
	cin >> num1;
	cout << "Input Num2 => ";
	cin >> num2;

	switch (op)
	{
		case '1':
			result = num1 + num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;
		case '+':
			result = num1 + num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;
		
		case '2':
			result = num1 - num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;

		case '3':
			result = num1 * num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;

		case '4':
			result = num1 / num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;
		case '/':
			result = num1 / num2;
			cout << "result = " << result << endl;
			cout << "result ceil = " << ceil(result) << endl;
			break;

		default:
			cout << "Please input a operator\n";
			break;
	}

	cout << "\n==================================\n";
}