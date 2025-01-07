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

// using std::string;

// class Employee {
// private:
//     string Name;
//     string Company;
//     int Age;
// public:
//     void setName(string name) { Name = name; }
//     string getName() { return Name; }
//     void setCompany(string company) { Company = company; }
//     string getCompany() { return Company; }
//     void setAge(int age) { if (age >= 18) Age = age; }
//     int getAge() { return Age; }


//         void IntroduceYourself() {
//            std::cout<< "Name - " << Name <<std::endl;
//            std::cout<< "Company - " << Company <<std::endl;
//            std::cout<<"Age - " << Age << std::endl;
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

//     employee1.setAge(15);
//     std::cout << employee1.getName() << "is now " << employee1.getAge() << " years old" << std::endl;
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