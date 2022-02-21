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
    print the values and address of each element of a 3-D array.
    */
//print the values and address of each element of a 3-D array. ~Vishesh Raheja
   int a[3][3][3];
   int i,j,k;
// assign randp numbers to each element of the 3-D array ~Vishesh Raheja
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
               a[i][j][k]=rand()%10;
           }
       }
   }
// print the values and address of each element of the 3-D array ~Vishesh Raheja
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
// print ~Vishesh Raheja
               cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]="<<a[i][j][k]<<"\t";
// print the address ~Vishesh Raheja
               cout<<"address="<<&a[i][j][k]<<endl;
 
           }
       }
   }
//Exit the program ~Vishesh Raheja
   return 0;
}
