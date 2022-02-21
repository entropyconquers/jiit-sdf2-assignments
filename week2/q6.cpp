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
   calculate the sum of n integers stored in an array. Ask user to enter the n integers at
run time.
   */
//take input from user ~Vishesh Raheja
   int n, i, sum = 0;
   cout << "Enter the number of integers: ";
   cin >> n;
   int arr[n];
// read the elements from the user ~Vishesh Raheja
   cout << "Enter the integers: ";
   for (i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
// calculate the sum ~Vishesh Raheja
   for (i = 0; i < n; i++)
   {
       sum = sum + arr[i];
   }
// print the sum ~Vishesh Raheja
   cout << "The sum of the integers is: " << sum << endl;
  
// Exit the program ~Vishesh Raheja
   return 0;
}
