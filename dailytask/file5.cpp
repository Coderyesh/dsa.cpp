// g++ -std=c++17 -o dailytask/program dailytask/file5.cpp && ./dailytask/program
//Write C++ Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it.

#include <iostream>
using namespace std;

int main() {

//accept the role number
int rollNumber;
cout <<"Enter the Roll number" << "\n";
cin >> rollNumber;
//accept the marks of three subjects
int mark1, mark2, mark3;
cout <<"Enter the marks of three subjects :" << "\n";
cin >> mark1 >> mark2 >> mark3;
//calculate the total and average
int total = mark1 + mark2 + mark3;
float average =(float)total/3;
//print the result
cout <<"Roll Number : "<< rollNumber << "\n";
cout <<"Total : "<< total << "\n";
cout <<"Average : "<< average << "\n";
return 0;


};