/* Section 7 Challenge
 *
 * Write a C++ program as follows:
 *
 * Declare 2 empty vectors of integers named
 * vector1 and vector2 respectively.
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method.
 *
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method.
 *
 * Declare an empty 2D vector called vector2d
 * Remember that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector2d dynamically using push_back
 * Add vector2 to vector2d dynamically using push_back
 *
 * Display the elements in vector2d using the at() method
 *
 * change vector1.at(0) to 1000
 *
 * Display the elements in vector2d again using the at() method
 *
 * Display the elements in vector1
 *
 * What did you expect? Did you get what you expected? What do you think happenend?
 *
 *
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    // Declare 2 empty vectors of integers named
    // vector1 and vector2 respectively.
    vector<int> vector1;
    vector<int> vector2;
    
    // Add 10 and 20 to vector1 dynamically using push_back
    // Display the elements in vector1 using the at() method as well as its size using the size() method.
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1 first element: " << vector1.at(0) << endl;
    cout << "vector1 last element: " << vector1.at(1) << endl;
    cout << "The size of vector1 is: " << vector1.size() << endl;

    cout << "================================================" << endl;

    // Add 100 and 200 to vector2 dynamically using push_back
    // Display the elements in vector2 using the at() method as well as its size using the size() method.
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector2 first element: " << vector2.at(0) << endl;
    cout << "vector2 last element: " << vector2.at(1) << endl;
    cout << "The size of vector1 is: " << vector2.size() << endl;
    
    cout << "================================================" << endl;
    
    // Declare an empty 2D vector called vector2d
    vector <vector<int>> vector2d;
    
    // Add vector1 to vector2d dynamically using push_back
    // Add vector2 to vector2d dynamically using push_back
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    // Display the elements in vector2d using the at() method
    cout << "Here are the elements of vector2d:" << endl;
    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;
    
    cout << "================================================" << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Here are the elements of vector2d again:" << endl;
    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;
    
    cout << "vector1 first element: " << vector1.at(0) << endl;
    cout << "vector1 last element: " << vector1.at(1) << endl;
    
    return 0;
}