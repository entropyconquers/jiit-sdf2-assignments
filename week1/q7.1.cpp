/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
 
struct Employee {
   string name;
   int age;
//Total salary = sum(basic+HRA+BOOK Allowance+Furniture Allowance+Special allowance) ~Vishesh Raheja
   int basic;
   int HRA;
   int BOOK;
   int Furniture;
   int Special;
   int Total;
};
 
int main()
{
   struct Employee emp_details;
//get emp details ~Vishesh Raheja

//get name of employee ~Vishesh Raheja
   cout<<"Enter name: ";
   getline(cin, emp_details.name);
//get age of employee ~Vishesh Raheja
   cout<<"Enter age: ";
   cin>>emp_details.age;
//get basic salary of employee ~Vishesh Raheja
   cout<<"Enter basic salary: ";
   cin>>emp_details.basic;
//get HRA of employee ~Vishesh Raheja
   cout<<"Enter HRA: ";
   cin>>emp_details.HRA;
//get BOOK allowance of employee ~Vishesh Raheja
   cout<<"Enter BOOK: ";
   cin>>emp_details.BOOK;
//get Furniture allowance of employee ~Vishesh Raheja
   cout<<"Enter Furniture: ";
   cin>>emp_details.Furniture;
//get Special allowance of employee ~Vishesh Raheja
   cout<<"Enter Special: ";
   cin>>emp_details.Special;
//calculate total salary ~Vishesh Raheja
   cout<<endl;
   emp_details.Total = emp_details.basic + emp_details.HRA + emp_details.BOOK + emp_details.Furniture + emp_details.Special;
//display emp details ~Vishesh Raheja
   cout<<"\nEmployee Details:\n";
// display name of employee ~Vishesh Raheja
   cout<<"Name: "<<emp_details.name<<endl;
// display age of employee ~Vishesh Raheja
   cout<<"Age: "<<emp_details.age<<endl;
// display basic salary of employee ~Vishesh Raheja
   cout<<"Total salary: "<<emp_details.Total<<endl;
//Exit the program ~Vishesh Raheja
   return 0;
}
