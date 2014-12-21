#include <iostream>

using namespace std;

int main()
{
	int num1;
	int num2;
	int remainder;

	cout << "Enter your numbers, please:" << endl;
	cin >> num1;
	cin >> num2;
	remainder = num1 % num2;
	cout << remainder;
	return 0;
}
