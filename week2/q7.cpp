/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/
#include<iostream>
using namespace std;
 
 
int main()
{
   /*
   find out whether a given integer is present in a given array of integers or not.A suitable
message should be displayed on screen for both the cases. If the integer is present, then print all the
indexes at which it is present in the array. Ask user to input the integer to be searched.[Use static
array with pre-defined integer values]
   */
// create an array of integers ~Vishesh Raheja
   int a[10]={1,2,3,4,5,6,7,8,4,10};
   int n=10;
   int x;
// take input from user ~Vishesh Raheja
   cout<<"enter the number to be searched ";
   cin>>x;
   int flag=0;
//search the number in the array ~Vishesh Raheja

   for(int i=0;i<n;i++)
   {
       if(a[i]==x)
       {
           flag=1;
           cout<<"the number is present at index "<<i<<endl;
       }
   }

   if(flag==0)
   {
       cout<<"the number is not present in the array ";
   }
 
// Exit the program ~Vishesh Raheja
   return 0;
}
