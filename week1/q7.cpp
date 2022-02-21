/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;

// create a Employee structure ~Vishesh Raheja
struct Employee {
   string name;
   int age;
   double salary;
};
 
int main()
{
   struct Employee emp_details;
//get emp details ~Vishesh Raheja
   cout<<"Enter name: ";
   getline(cin, emp_details.name);
   cout<<"Enter age: ";
   cin>>emp_details.age;
   cout<<"Enter salary: ";
   cin>>emp_details.salary;
 
//display emp details ~Vishesh Raheja
   cout<<"Name: "<<emp_details.name<<endl;
   cout<<"Age: "<<emp_details.age<<endl;
   cout<<"Salary: "<<emp_details.salary<<endl;
//Exit the program ~Vishesh Raheja
   return 0;
}
