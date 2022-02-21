/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/
#include<iostream>
using namespace std;
 
 
int main()
{
   int A[3] = {10,100,200};
// p pointer to the first element of the array ~Vishesh Raheja
   int *p = A;
   cout<<*p<<endl;
   p++;
   cout<<*p<<endl;
   p++;
   cout<<*p<<endl;
//decrementing pointer ~Vishesh Raheja
   p--;
   cout<<*p<<endl;
   p--;
   cout<<*p<<endl;
  
//Exit the program ~Vishesh Raheja
   return 0;
}
