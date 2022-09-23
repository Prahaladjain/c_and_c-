#include<iostream.h>
#include<conio.h>
class copycon
{
int a,b;
public:
copycon(int x,int y)
{
a=x;
b=y;
cout<<"\n Here is the initialization of constructor:";
}
void display()
{
cout<<"\n Value :\t "<<a<<"\t"<<b;
}
};
void main()
{
clrscr();
copycon object(30,40);
copycon object2=object;
object.display();
object.display();
getch();
}