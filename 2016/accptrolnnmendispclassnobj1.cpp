#include<iostream>
using namespace std;
#include<stdio.h>
class student
{
private:
    int roll;
    char name[30];
public:
    void input()
   {
    cout<<"Enter roll number:";
    cin>>roll;
    fflush(stdin);
    cout<<"Enter name:";
    gets(name);
   }
   void output()
   {
    cout<<"Roll Number is:"<<roll<<endl;
    cout<<"Name is :"<<name<<endl;
   }
};
int main()
{
    student s;
    s.input();
    s.output();
}
