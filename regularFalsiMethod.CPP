//Program to find roots of an equation using regular falsi method
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
int main()
{
clrscr();
cout<<"Regular Falsi Method of Finding Roots of Equation\n";
cout<<"(x^3)-2x-5=0\n";
double x0,x1,x2,fx0,fx1,fx2,temp=0.0;
int p,check=0;
cout<<"Enter accuracy (decimal places): ";
cin>>p;
cout<<"Enter x0: ";
cin>>x0;
cout<<"Enter x1: ";
cin>>x1;
cout<<"\nx0\t\t\tx1\t\t\tx2\n";
do
{
fx0=((pow(x0,3.0))-(2.0*x0)-5);
fx1=((pow(x1,3.0))-(2.0*x1)-5);
x2=( (x0) -( ( (x1-x0)/(fx1-fx0) )*(fx0)));
fx2=((pow(x2,3.0))-(2.0*x2)-5);
printf("%lf\t\t%lf\t\t%lf\n",x0,x1,x2);
if(fx2<0)
x0=x2;
else if(fx2>0)
x1=x2;
if((int)(x2*(pow(10,p)))==(int)(temp*(pow(10,p))))
check++;
else
temp=x2;
}
while(check==0);
cout<<"\nRoot = "<<x2<<" (correct till "<<p<<" decimal places)";;
getch();
return 0;
}
