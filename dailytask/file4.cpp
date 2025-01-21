// g++ -std=c++17 -o dailytask/program dailytask/file4.cpp && ./dailytask/program
//Write C++ program to swap two numbers using macros

#include <iostream>
using namespace std;

//macro to swap two numbers
#define SWAP(a, b)  { int temp = a; a = b; b = temp; }

int main() {

int x =5, y = 10;

//display original values 
cout << "Before swapping : x = " << x << "\n" << "y =" << y << endl;
//swap using macros 
SWAP (x, y);

//Display swapped values
cout <<"After swapping : X = " << x <<"\n" << "y =" << y << endl;

return 0;


};