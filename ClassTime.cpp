#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int age;
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age;
    }

};
int main()
{
    student s;
    s.name="Linh";
    s.age=18;
    s.display();
    return 0;
}