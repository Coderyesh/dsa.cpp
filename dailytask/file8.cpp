// g++ -std=c++17 -o dailytask/program dailytask/file8.cpp && ./dailytask/program
//print pyramid using for loop

#include <iostream>
using namespace std;


//Function to demonstrate  the printing pattern 
//outer loop to handel number of rows - n in this case 
//inner loop to handel number of columns - vlaue changes acc to outer loop 
//print the stars 
//ending line after each row 



// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void pypart(int n)
{
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++) {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {

            // Printing stars
            cout << "* ";
        }

        // Ending line after each row
        cout << endl;
    }
}

// Driver Function
int main()
{
    int n = 5;
    pypart(n);
    return 0;
}