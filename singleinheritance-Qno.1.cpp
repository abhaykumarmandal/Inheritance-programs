#include <iostream>
using namespace std;
class Student{
    protected:
        char name[20];
        int roll_number, age;
    public:
        Student(){}
        void getDetails(){
            cout<<"Input roll number: ";
            cin>>roll_number;
            cout<<"Input name: ";
            cin.get();
            cin.getline(name, 20);
            cout<<"Input age: ";
            cin>>age;
        }
        void putDetails(){
            cout<<"Roll Number: "<<roll_number<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class Test: public Student{
    protected:
        int a[5];
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            for(int i=0;i<5;i++)
            {
                cout<<"subject mark "<<i+1<<" : ";
                cin>>a[i];

                }
                }
            void putmarks()
            {
               for(int i=0;i<5;i++)
               {
                cout<<"Mark "<<i+1<<" : "<<a[i]<<endl;
               }
               
            }
};
class Result:public Test, public Student{
    int total;
    public:
        Result(): Test(){
            Test::getDetails();
            getmarks();
           
                    }
        void display(){
            cout<<endl;
            Test::putDetails();
            cout<<"Marks of students: \n"; Test::putmarks();
        }
};
int main()
{
    Result r;
    r.display();
    return 0;
}
