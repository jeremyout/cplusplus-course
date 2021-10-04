#include <iostream>

// This program will calculate the area of a room in sqaure feet

int main()
{

    int roomWidth { 0 };
    int roomLength { 0 };

    std::cout << "Enter the width of the room: ";
    std::cin >> roomWidth;
    std::cout << "Enter the length of the room: ";
    std::cin >> roomLength;
    
    std::cout << "The area of the room is: " << roomWidth*roomLength << " square feet" << std::endl;

    return 0;
}