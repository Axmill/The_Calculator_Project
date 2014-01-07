#include <iostream>

using namespace std;

int main(){

string selection;
int num1;
int num2;
int result;
int pause;

cout << "Please enter what you would like to do (case-sensitive): Addition, Subtraction, Multiplication, or Division. \n";
cin >> selection;

if(selection = "Addition"){

    result = num1 + num2;

    cout << "Enter your first number: \n";
    cin >> num1;

    cout << "Enter your second number: \n";
    cin >> num2;

    cout << "The result is " << result << endl;
    cin >> pause;

}
}
