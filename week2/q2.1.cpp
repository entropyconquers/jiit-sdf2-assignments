/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/
#include<iostream>
using namespace std;
 
//Assume there are three integer elements in the array A= {10,100,200} and are stored at addresses 0xbfa088b0, 0xbfa088b4, 0xbfa088b8 ~Vishesh Raheja
//Write a program to print the values of the array elements in the following order: ~Vishesh Raheja
//1. Print the value of the first element ~Vishesh Raheja
//2. Print the value of the second element ~Vishesh Raheja
//3. Print the value of the third element ~Vishesh Raheja

/*
Note: The address can vary from system to system.
WAP in C++ to perform following operations using pointer arithmetic.
1. Increment a Pointer (++)
Sample output after incrementing pointer:
Address of var[0] = 0xbfa088b0
Value of var[0] = 10
Address of var[1] = 0xbfa088b4
Value of var[1] = 100
Address of var[2] = 0xbfa088b8
Value of var[2] = 200
2. Decrement a Pointer (--)
Sample output after decrementing pointer:
Address of var[3] = 0xbfdb70f8
Value of var[3] = 200
Address of var[2] = 0xbfdb70f4
Value of var[2] = 100
Address of var[1] = 0xbfdb70f0
Value of var[1] = 10
*/
int main()
{
   int A[3] = {10,100,200};

   int *p = A;
   cout<<*p<<endl;
//Increment a Pointer (++) ~Vishesh Raheja
   p++;
   cout<<*p<<endl;
   p++;
   cout<<*p<<endl;
  
//Exit the program ~Vishesh Raheja
   return 0;
}
