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
   sort a given array in ascending order using pointers. Then reverse the sorted array
using pointers and print the original, sorted and reversed arrays. [Use static array with pre-defined
integer values]
   */
// create an array of integers ~Vishesh Raheja
   int a[5]={2,6,4,5,7};

   cout<<"Original array: ";
// display the array ~Vishesh Raheja
   for(int i=0;i<5;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
//Sorted array ~Vishesh Raheja
   int *p=a;
   int n = 5;
   while(n){
       int max = *p;
       int max_index = 0;
       for(int i=0;i<n;i++){
           if(*(p+i)>max){
               max = *(p+i);
               max_index = i;
           }
       }
       int temp = *(p+max_index);
       *(p+max_index) = *(p+n-1);
       *(p+n-1) = temp;
       n--;
   }
// print the sorted array ~Vishesh Raheja
   cout<<"Sorted array: ";
   for(int i=0;i<5;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
//Reversed array ~Vishesh Raheja
   int *q=a;
   int m = 5;

   while(m){
       int min = *q;
       int min_index = 0;
       for(int i=0;i<m;i++){
           if(*(q+i)<min){
               min = *(q+i);
               min_index = i;
           }
       }

       int temp = *(q+min_index);
       *(q+min_index) = *(q+m-1);
       *(q+m-1) = temp;
       m--;
   }
   cout<<"Reversed array: ";
// display the reversed array ~Vishesh Raheja
   for(int i=0;i<5;i++)
   {
       cout<<a[i]<<" ";
   }
   cout<<endl;
  
// Exit the program ~Vishesh Raheja
   return 0;
}
