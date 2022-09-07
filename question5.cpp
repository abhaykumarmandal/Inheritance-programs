#include <iostream>
using namespace std;
class Employee{
    protected:
        char name[40];
        int id, age;
    public:
        Employee(){}
        void getDetails(){
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 40);
            cout<<"Input id number of employee: ";
            cin>>id;
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"ID Number: "<<id<<endl;
        }
};
class Regular: public Employee{
    protected:
        double DA,HRA,Basicsalaray;
        double Grosssalary;
    public:
    Regular(): Employee() {}
    void getsalary(){
         cout<<" Enter DA of an employee: "<<endl;
         cin>>DA;
         cout<<" Enter HRA of an employee: "<<endl;
         cin>>HRA;
         cout<<" Enter basic salary of an employee: "<<endl;
         cin>>Basicsalaray;
            }
        void putsalary(){
            cout<<"Basic salary of employee: Rs. "<<Basicsalaray<<endl;
            HRA=Basicsalaray*(10/100.00);
            DA=Basicsalaray*(14/100.00);
            Grosssalary=DA+HRA+Basicsalaray;
            cout<<"Gross salary of employee: Rs. "<<Grosssalary<<endl;
            }
};
class Parttime: public Employee{
    protected:
    int salary,hours,incomeperhr;
    public:
    void gettime(){
         cout<<"Enter salary for partimer: "<<endl;
         cin>>salary;
        cout<<"Enter number of hours: "<<endl;
        cin>>hours;
    }
    void displaytime(){
        cout<<"Number of hrs= "<<hours<<endl;
        incomeperhr=hours*salary;
        cout<<"income per hour= "<<incomeperhr<<endl;
    }
};
class Result:public Regular,public Parttime{
    public:
    Result():Regular(),Parttime(){
    Regular::getDetails();
        getsalary();
        gettime();
    }
    void finalresult(){
        cout<<endl;
        Regular::putDetails();
        putsalary();
        displaytime();
    }
};
int main(){
    Result r;
    r.finalresult();
    return 0;
}
