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
        int a[5],total=0;
        double perc;
    public:
        Test(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            for(int i=0;i<5;i++)
            {
                cout<<"subject mark "<<i+1<<" : ";
                cin>>a[i];
                 total = total+a[i];
                 perc=total/5;
            }
            }
        void putmarks(){
               for(int i=0;i<5;i++){
                cout<<"Mark "<<i+1<<" : "<<a[i]<<endl;
                
               }
               cout<<"Total marks="<<total<<endl;
                cout<<"Marks in percent:"<<perc<<"%"<<endl;
            }
};
class Sports: public Student{
    protected:
        int indoor, outdoor;
    public:
        Sports(): Student(){}
        void getscore(){
            cout<<"Input sports scores: \n";
            cout<<"Indoor: ";
            cin>>indoor;
            cout<<"Outdoor: ";
            cin>>outdoor;
        }
        void putscore(){
            cout<<"Indoor: "<<indoor<<endl;
            cout<<"Outdoor: "<<outdoor<<endl;
        }
};
class Result: public Sports, public Test{
    int total1;
    public:
        Result(): Sports(), Test(){
            Test::getDetails();
            getmarks();
            getscore();
            total1 = indoor + outdoor +total;
        }
        void display(){
            cout<<endl;
            Test::putDetails();
            cout<<"Test Marks: \n"; Test::putmarks();
            cout<<"Sports Scores: \n"; Sports::putscore();
            cout<<"Total marks after Sports scores: "<<total<<endl;
            cout<<"Percentage after sports scores: "<<total1 / 7 <<" % "<<endl;
        }
};
int main(){
    Result r;
    r.display();
    return 0;
}
