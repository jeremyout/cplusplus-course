#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
//    cin >> vowels[5]; //out of bounds, don't do this
    
    
    double hiTemps[] = {90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hiTemps[0] << endl;
    hiTemps[0] = 100.7;
    cout << "The first high temperature is now: " << hiTemps[0] << endl;
    
    int testScores[5] {100,90,80,70,60};
    cout << "\nFirst score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;
    
    cout << "Enter 5 test scores: ";
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];
    
    cout << "The updated array: " << testScores[0] << endl;
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    cout << "Fourth score at index 3: " << testScores[3] << endl;
    cout << "Fifth score at index 4: " << testScores[4] << endl;
    
    cout << "\nNotice what the value of the array name is:  " << testScores << endl;

    return 0;
}