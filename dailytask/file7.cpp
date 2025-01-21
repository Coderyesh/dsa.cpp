// g++ -std=c++17 -o dailytask/program dailytask/file7.cpp && ./dailytask/program
//Write C++ Program to print numeric pyramid

#include <iostream>
using namespace std;

int main() {

int i,j;
for (i=1; i<=5; i++)
{
    for (j=1;j<=i;j++)
    {
        cout<<j<<" ";
        cout <<"\n";
        }
    }

};