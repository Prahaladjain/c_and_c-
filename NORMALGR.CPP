#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm;
int graph(-gd,-gm,"C:\\TC\\BGI");
rectangle(100,100,200,200);
getch();
closegraph();
return 0;
}