/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
 
/*
Create ‘phone’ structure with Price, Battery Power (In mAH)and Rating (between
0-5) as member variables.
*/
struct phone{
   int price;
   int battery;
   double rating;
};
 
int main()
{
   /*
   Create two structure variables (Two phone). and take input from user
   */
// create two structure variables ~Vishesh Raheja
   phone p1,p2;
// Get the input from the user ~Vishesh Raheja
   cout<<"Enter the price of the first phone: ";
   cin>>p1.price;
   cout<<"Enter the battery power of the first phone: ";
   cin>>p1.battery;
   cout<<"Enter the rating of the first phone: ";
   cin>>p1.rating;
   cout<<"Enter the price of the second phone: ";
   cin>>p2.price;
   cout<<"Enter the battery power of the second phone: ";
   cin>>p2.battery;
   cout<<"Enter the rating of the second phone: ";
   cin>>p2.rating;
// Display the details of the two phones ~Vishesh Raheja
// if p1 is cheaper than p2, then display p1 ~Vishesh Raheja
   if(p1.price<p2.price){
       cout<<"Phone better w.r.t Price is Phone1"<<endl;
   }

   else if(p1.price>p2.price){
       cout<<"Phone better w.r.t Price is Phone2"<<endl;
   }

   else{
       cout<<"Phone1 and Phone2 are equal in Price"<<endl;
   }
// if p1 battery power is greater than p2, then display p1 ~Vishesh Raheja
   if(p1.battery<p2.battery){
       cout<<"Phone better w.r.t Battery Power is Phone2"<<endl;
   }
   else if(p1.battery>p2.battery){
       cout<<"Phone better w.r.t Battery Power is Phone1"<<endl;
   }
   else{
       cout<<"Phone1 and Phone2 are equal in Battery Power"<<endl;
   }
// if p1 rating is greater than p2, then display p1 ~Vishesh Raheja
   if(p1.rating<p2.rating){
       cout<<"Phone better w.r.t Rating is Phone2"<<endl;
   }
   else if(p1.rating>p2.rating){
       cout<<"Phone better w.r.t Rating is Phone1"<<endl;
   }
   else{
       cout<<"Phone1 and Phone2 are equal in Rating"<<endl;
   }
// Exit the program ~Vishesh Raheja
   return 0;
}
