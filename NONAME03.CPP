#include<iostream.h>
#include<conio.h>
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
employee e1=employee(101,"R",80000.345);
employee e2=employee(102,"A",50000.234);
e1.display();
e2.display();
}