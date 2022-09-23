#include<iostream.h>
#include<conio.h>
class addition
{
    public:
    int sum(int a,int b);
    {
       return a+b;
    }
    int sum(int a,int b,int c)
    {
       return a+b+c;
    }
};
void main()
    {
       addition x;
       cout<<"Addition is:"<<x.sum(5,6)<<endl;
       cout<<"Addition is:"<<x.sum(537,567,546)<<endl;
       getch();
    }