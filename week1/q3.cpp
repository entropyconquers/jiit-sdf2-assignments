/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
int main()
{
//read the values of variables: a, b c and d from user and display the value of x on output screen, where ~Vishesh Raheja
//x = a / (b -c) + d ~Vishesh Raheja
   int a, b, c, d;
   cout << "Enter the value of a: ";
   cin >> a;
   retry:
   cout << "Enter the value of b: ";
   cin >> b;
   cout << "Enter the value of c: ";
   cin >> c;
   cout << "Enter the value of d: ";
   cin >> d;
//Check for divide by zero error. ~Vishesh Raheja
   while(!(b-c)) {
       cout << "x= Cannot divide by zero Error. Retry with different input";
       goto retry;
   }
// calculate the value of x. ~Vishesh Raheja
   int x = a / (b - c) + d;
// display the value of x. ~Vishesh Raheja
   cout << "The value of x is: " << x << endl;
   return 0;
}
