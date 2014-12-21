//Calculate the slope of a line based on two points
#include <iostream>

int main()
{
    int y1;
    int y2;
    int x1;
    int x2;
    int slope;
    std::cout << "Please enter your first ordered pair (seperate with return key): ";
    std::cin >> x1;
    std::cin >> y1;
    std::cout << "\nNow your second pair: ";
    std::cin >> x2;
    std::cin >> y2;
    slope = (y2 - y1) / (x2 - x1);
    std::cout << "\nThe slope is " << slope;
    return 0;
}
