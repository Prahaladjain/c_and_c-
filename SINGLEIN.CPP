#include<iostream.h>
#include<conio.h>
class acct
{
public:
float salary;
};
class program:public acct
{
float bonus;
};
void main()
{
program p1;
cout<<"salary"<<p1.salary<<endl;
cout<<"bonus"<<p1.bonus<<endl;
getch();
}

