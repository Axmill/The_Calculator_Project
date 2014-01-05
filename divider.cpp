#include <iostream>

using namespace std;

int main(){

int dividend;
int divisor;
int quotient;
int remainder;
int pause;
cout << "Note: this program will only divide integers. \n";

cout << "Enter your larger number: \n";
cin >> dividend;

cout << "Enter your smaller number: \n";
cin >> divisor;

quotient = dividend / divisor;
remainder = dividend % divisor;

/* Finding the quotient */

cout << "The quotient is " << quotient << endl;
cout << "The remainder is " << remainder << endl;

cin >> pause;

}
