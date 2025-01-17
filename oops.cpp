/*Constructures*/
// #include <iostream>

// using std::string;

// class Employee {
//     public:
//         string Name;
//         string Company;
//         int Age;

//     void IntroduceYourself() {
//         std::cout<< "Name - " << Name <<std::endl;
//         std::cout<< "Company - " << Company <<std::endl;
//         std::cout<<"Age - " << Age << std::endl;
//     }
//     Employee(string name, string company, int age) {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };


// int main(){
//     Employee employee1 = Employee( "Yeshwanth", "Komatsu", 24);
//     employee1.IntroduceYourself();

//     Employee employee2 = Employee("Satani", "Komatsu", 25);
//     employee2.IntroduceYourself();
//     return 0;
// }


////////////////////////////////////////////////////////////////////////////////////////////////////

/*Encapsulation

bundling data and group the data , no one can directlty modify and change the data 

*/


// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     string Name;
//     string Company;
//     int Age;

// public:
//     // Setter methods
//     void setName(string name) { Name = name; }
//     void setCompany(string company) { Company = company; }
//     void setAge(int age) { 
//         if (age >= 18) { // Validation for age
//             Age = age;
//         } else {
//             cout << "Invalid age! Age must be 18 or older." << endl;
//         }
//     }

//     // Getter methods
//     string getName() { return Name; }
//     string getCompany() { return Company; }
//     int getAge() { return Age; }

//     // Method to introduce the employee
//     void IntroduceYourself() {
//         cout << "Name: " << Name << endl;
//         cout << "Company: " << Company << endl;
//         cout << "Age: " << Age << endl;
//     }

//     // Constructor
//     Employee(string name, string company, int age) {
//         Name = name;
//         Company = company;
//         setAge(age); // Use setter to ensure validation
//     }
// };

// int main() {
//     // Create employee objects
//     Employee employee1("Yeshwanth", "Komatsu", 24);
//     Employee employee2("Satani", "Komatsu", 25);

//     // Introduce employees
//     employee1.IntroduceYourself();
//     employee2.IntroduceYourself();

//     // Test encapsulation by modifying age
//     employee1.setAge(15); // This will fail validation
//     cout << employee1.getName() << " is now " << employee1.getAge() << " years old." << endl;

//     employee1.setAge(30); // This will pass validation
//     cout << employee1.getName() << " is now " << employee1.getAge() << " years old." << endl;

//     return 0;
// }



////////////////////////////////////////////////////////////////////////////////////////////////////

/*Abstraction in C++ is a concept that allows you to show only the necessary information to the outside world while keeping the complex info hidden 


*/


#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void  AskForPromotion()=0;

};

class Employee: public AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) { Name = name; }
    string getName() { return Name; }
    void setCompany(string company) { Company = company; }
    string getCompany() { return Company; }
    void setAge(int age) { if (age >= 18) Age = age; }
    int getAge() { return Age; }

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    virtual void  AskForPromotion() {
        if (Age >=30 ) { 
            std::cout << Name << " has been promoted." << std::endl;
        } else {
            std::cout << Name << " is not eligible for promotion." << std::endl;
        }
    }
};

int main(){
    Employee employee1 = Employee( "Yeshwanth", "Komatsu", 24);
    Employee employee2 = Employee("Satani", "Komatsu", 30);
   
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}


