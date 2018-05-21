//Program for bisection method to find roots of an algebric equation
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
cout<<"Bisection method for algebric equation: \n";
cout<<"(x^3)-4X-9=0\n";
cout<<"Finding roots of equation till n decimal places:\n";
double x1,x2,interval,func;
cout<<"Enter starting values of x1 and x2\n";
cin>>x1>>x2;
cout<<"Enter precission: ";
int n;
cin>>n;
printf("x1\t\tx2\t\tinterval\tf(x)\n");
int check=1;
while(check==1)
{
interval=(x1+x2)/2;
func=(pow(interval,3.0)-(4*interval)-9);
printf("%.9f\t%.9f\t%.9f\t%.9f\n",x1,x2,interval,func);
if(func<0)
x1=interval;
else if(func>0)
x2=interval;
int a,b;
a=x1*(pow(10,n));
b=x2*(pow(10,n));
if(a==b)
check=0;

}
double root=x1;
root*=pow(10,n);
root/=pow(10,n);
cout<<"Root correct till "<<n<<" decimal places:\n";
cout<<root;
getch();
return 0;
}



