#include<iostream.h>
#include<conio.h>
class cube
{
public:
int side;
cube(int x)
{
side =x;
}
};
void main()
{
clrscr();
cube c1(10);
cube c2(20);
cube c3(30);
cout<<c1.side;
cout<<c2.side;
cout<<c3.side;
getch();
}