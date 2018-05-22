// Program to interpolate a value using Newton Forward Interpolation method
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
clrscr();
double ar[10][10];
int i=0,p,q,valx,dely;
char ch;

for(p=0;p<10;p++)
{
for(q=0;q<10;q++)
{
ar[p][q]=NULL;
}
}

do
{
cout<<"Enter x"<<i+1<<": ";
cin>>ar[i][0];
cout<<"Enter y"<<i+1<<": ";
cin>>ar[i][1];
cout<<"Do you want to make more entries to the table?!?(y/n)??";
cin>>ch;
i++;
}
while(ch=='y'||ch=='Y');
for(dely=2;dely<=i;dely++)
{
for(valx=0;valx<=i-dely;valx++)
{
ar[valx][dely]=ar[valx+1][dely-1]-ar[valx][dely-1];
}
}
cout<<"x\ty\tdely\tdel2y\tdel3y\tdel4y\n";
for(p=0;p<i;p++)
{
for(q=0;q<=i-p;q++)
{
cout<<ar[p][q]<<"\t";
}
cout<<"\n";
}

double calc;
cout<<"\nEnter the value of x to be calculated: ";
cin>>calc;
double h=ar[1][0]-ar[0][0];
double u=(calc-ar[0][0])/h;

double ans;
ans=(ar[0][1])+(u*ar[0][2])+(((u*(u-1))/2)*ar[0][3])+(((u*(u-1)*(u-2))/6)*ar[0][4])+(((u*(u-1)*(u-2)*(u-3))/24)*ar[0][5]);

cout<<"\nf("<<calc<<")="<<ans;
getch();
return 0;
}



