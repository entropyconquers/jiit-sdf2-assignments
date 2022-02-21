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
   find the largest integer from amongst n integers stored in an array.
   */
//take input from user ~Vishesh Raheja
   cout<<"Enter the number of elements in the array: ";
   int n;
   cin>>n;
   int a[n];
// read the elements from the user ~Vishesh Raheja
   cout<<"Enter the elements of the array: ";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
//find the largest integer ~Vishesh Raheja
   int max=a[0];
   for(int i=1;i<n;i++)
   {
       if(a[i]>max)
       {
           max=a[i];
       }
   }
//print the largest integer ~Vishesh Raheja
   cout<<"The largest integer is: "<<max;
   cout<<endl;
// Exit the program ~Vishesh Raheja
   return 0;
}
