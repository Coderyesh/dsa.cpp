// g++ -std=c++17 -o dailytask/program dailytask/file6.cpp && ./dailytask/program
// Write C++ Program to Read Three Numbers And Print The Biggest Of Given Three Numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the first number: " << "\n";
    cin >> a; 
    cout << "Enter the second number: " << "\n";
    cin >> b;
    cout << "Enter the third number: " << "\n";
    cin >> c;

    // if conditions to check the largest number
    if (a > b && a > c) {
        cout << "The largest number is " << a << "\n";
    } else if (b > a && b > c) {
        cout << "The largest number is " << b << "\n"; 
    } else if (c > a && c > b) {   
        cout << "The largest number is " << c << "\n";
    }
    return 0; // end of main function
};