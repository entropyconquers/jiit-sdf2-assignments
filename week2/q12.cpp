/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/
#include<iostream>
using namespace std;
 
 
int main()
{
// read the size of the matrix ~Vishesh Raheja
   int n,m;
   cout<<"Enter the number of rows and columns: ";
   cin>>n>>m;
// dynamically allocate memory to a 2D array ~Vishesh Raheja
   int *a[n];
   for(int i=0;i<n;i++)
   {
       a[i]=new int[m];
   }
//input values from user ~Vishesh Raheja
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout<<"Enter the value for a["<<i<<"]["<<j<<"]: ";
           cin>>a[i][j];
       }
   }
//print values ~Vishesh Raheja
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
//deallocate memory ~Vishesh Raheja
   for(int i=0;i<n;i++)
   {
       delete [] a[i];
   }
   return 0;
}
