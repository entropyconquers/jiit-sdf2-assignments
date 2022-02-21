/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
int main()
{
//read two numbers from the user and display the larger value on the output screen. ~Vishesh Raheja
   int a,b;
   cout<<"Enter two numbers: ";
   cin>>a>>b;
//if a is greater than b, then a is the larger number. ~Vishesh Raheja
   if(a>b)
   {
       cout<<a;
   }
//if b is greater than a, then b is the larger number. ~Vishesh Raheja
   else
   {
       cout<<b;
   }
   return 0;
}
