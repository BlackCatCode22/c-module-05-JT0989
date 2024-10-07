



#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    string name;
    string company;
    string age;




    void introduceYourself()
    {

        cout << "\n Name - : " << name << endl;
        cout << " \n Company - : " << company << endl;
        cout << " \n Age - : " << age << endl;

    }




    //Class Constructors!
    Employee (string name, string company, string age)
    {
        cout << "\n An employee was created!";
        cout << "\n Name - : " << name << endl;
        this->name = name;
        this->company = company;
        this->age = age;

    }


    Employee ()
    {
        cout << "\n An employee was created without any initial data";
        cout << "\n Name - : " << name << endl;
    }

    Employee (string name)
    {
        cout << "\n An employee was created!";
        this->name = name;
        cout << "\n Name - : " << name << endl;
    }
};




int main() {
    cout << " THis is OOP Practice" << endl;



    //Create an employee wiht a constuctor
    Employee employee3("Jayden");


    //Avoid using taw pointer; use stack allocation
    Employee anEmployee4("Name Needed");
    anEmployee4.introduceYourself();

    //Create an employee with this field
    Employee aThreeFieldEmployee("Three",  "Field",  "98");
    aThreeFieldEmployee.introduceYourself();

    //Create a vector to store Employee objects
    vector<Employee> employees;


    //Create a vector (list of objects) to store Employee object
    vector<Employee> employeesLoop;

    //Create a pointer for my employees
    Employee* pEmplist;
    for (int i = 0; i < 10; i++)
    {
        cout << "\n in the for loop and i is: " << i << endl;
        pEmplist = new Employee("New Employee in my list",  "N/A",  "N/A");
        pEmplist->introduceYourself();
        //Add this object to our vector list
        employeesLoop.push_back(*pEmplist);
    }

    //Use a for : each loop to output the list
    for (const auto& item : employeesLoop) {
        item.introduceYourself();
    }


    //Create an employee using a pointer
    Employee* pEmployee = new Employee("new employee",  "Field",  "98");
    pEmployee->introduceYourself();
    cout << "\n The new employee's name is: " << pEmployee->name << endl;
    cout << "\n The new employee's company is: " << pEmployee->company << endl;
    cout << "\n The new employee's age is: " << pEmployee->age << endl;



    //Add employee to the vector using constructor
    employees.push_back(Employee("John","youtuber","25"));
    employees.push_back(Employee("Saldinia","Amazon","23"));
    employees.push_back(Employee("Jayden","Fresno City College","19"));
    employees.push_back(Employee("Another","Classified","Classified"));









    return 0;
}
