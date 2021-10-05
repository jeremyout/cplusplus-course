#include <iostream>

int main()
{
    const double smallRoomCost = 25;
    const double largeRoomCost = 35;
    const double taxRate = 0.06;
    const int estimateExpiration = 30;
    int numSmallRooms = 0;
    int numLargeRooms = 0;
    double cost = 0;
    double tax = 0;
    double totalCost = 0;

    std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl << std::endl;
    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> numSmallRooms;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> numLargeRooms;

    cost = (numSmallRooms * smallRoomCost) + (numLargeRooms * largeRoomCost);
    tax = cost * taxRate;
    totalCost = cost + tax;

    std::cout << "=============================================" << std::endl;
    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << numSmallRooms << std::endl;
    std::cout << "Number of large rooms: " << numLargeRooms << std::endl;
    std::cout << "Price per small room: $" << smallRoomCost << std::endl;
    std::cout << "Price per large room: $" << largeRoomCost << std::endl;
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "=============================================";
    std::cout << "\nTotal Cost: $" << totalCost << std::endl;
    std::cout << "This estimate is valid for " << estimateExpiration << " days" << std::endl;

    return 0;
}