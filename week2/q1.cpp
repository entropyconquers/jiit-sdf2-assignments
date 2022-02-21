/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/


//Write a program in C++ to dynamically allocate memory for two variables of data type integer and float using new operator. Print the values of these variables and then deallocate the memory using delete operator. ~Vishesh Raheja
#include<iostream>
using namespace std;
 
 
int main()
{
// create two variables of type int and float by dynamically allocating memory using new operator ~Vishesh Raheja
   int *a = new int;
   float *b = new float;
//assign values ~Vishesh Raheja
   *a = 10;
   *b = 20.5;
   printf("%d %f", *a, *b);
//delete ~Vishesh Raheja
   delete a;
   delete b;
//Exit the program ~Vishesh Raheja
   return 0;
}
