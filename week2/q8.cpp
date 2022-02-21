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
   store CGPA of n number of students using dynamic memory allocation. Where
n is the number of students entered by the user. Display the details of the students.
   */

//Take the number of students from the user ~Vishesh Raheja
   int n;
   cout<<"Enter the number of students: ";
   cin>>n;
// Take the CGPA of the students ~Vishesh Raheja
   float *cgpa=new float[n];
   cout<<"Enter the CGPA of the students: ";
   for(int i=0;i<n;i++)
   {
       cin>>cgpa[i];
   }
// Display the details of the students ~Vishesh Raheja
   cout<<"The CGPA of the students are: ";
   for(int i=0;i<n;i++)
   {
       cout<<cgpa[i]<<" ";
   }
   cout<<endl;
// Free the memory allocated to cgpa ~Vishesh Raheja
   delete []cgpa;
  
// Exit the program ~Vishesh Raheja
   return 0;
}
