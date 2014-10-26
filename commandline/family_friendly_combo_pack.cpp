#include <iostream>

using namespace std;

int main(){

int num1;
int num2;
int result;
int pause;
string selection;

cout << "CHOICES: Addition, Subtraction, Multiplication, and Division.\n";
cin >> selection;

// Creating the choices

if(selection=="Addition"){

    cout << "Numbers, please:\n";
    cin >> num1;
    cin >> num2;
    result = num1 + num2;
    cout << "The sum is " << result << endl;
    cin >> pause;
}




}
