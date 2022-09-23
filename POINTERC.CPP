#include<iostream.h>
#include<conio.h>
using namespace std;
class employee
{
public:
int id;
char  name;
float salary;
employee(int id,char mame,float salary)
{
this -> id=id;
this -> name=name;
this -> salary=salary;
}
void display()
{
cout<<id<<" "<<name<<" "<<salary<<endl;
}
};
void main()
{
employee e1=employee(101,"RAM",80000);
employee e2=employee(102,"RAJA",50000);
e1.display();
e2.display();
getch();
}