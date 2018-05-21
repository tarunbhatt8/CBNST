//Program to find roots of an equation using Newton Rapson Method
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
double function(double);
double fdash(double);
double a,b,x0,fx0,fdx0,x1;
int flag=0,p,q,precision;
double function(double x)
{
return pow(x,3)-(5*x)+1;
}
double fdash(double x)
{
return (3*pow(x,2))-5;
}
int main()
{
clrscr();
cout<<"NEWTON RAPHSON METHOD TO FIND ROOT OF EQUATION:\n";
cout<<"(x^3)-(5x)+1=0\n";
cout<<"Enter two values:\n";
scanf("%lf%lf",&a,&b);
cout<<"Enter precision: ";
cin>>precision;
x0=(a+b)/2.0;
cout<<"x\t\tf(x)\t\tf'(x)\t\tx1\n";
do
{
fx0=function(x0);
fdx0=fdash(x0);
x1=x0-(fx0/fdx0);
p=x0*(pow(10,precision));
q=x1*(pow(10,precision));
printf("%lf\t%lf\t%lf\t%lf\n",x0,fx0,fdx0,x1);
if(p==q)
flag++;
else
x0=x1;
}
while(flag==0);
cout<<"Root= "<<x1<<" (Correct upto "<<precision<<" decimal places)";
getch();
return 0;
}