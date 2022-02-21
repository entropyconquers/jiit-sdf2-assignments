/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
int main()
{
//Take the input from the user ~Vishesh Raheja
   int n;
   cout<<"Enter number of elements: ";
   cin>>n;
   int arr[n];
//read the elements from the user ~Vishesh Raheja
   cout<<"Enter elements: ";
   for(int i = 0; i < n; i++){
       cin>>arr[i];
   }
   int end = n-1;
//put all the negative elements to the right ~Vishesh Raheja
   for(int i = 0; i <= end; i++){
       if(arr[i]<0){
           int temp = arr[i];
           arr[i] = arr[end];
           arr[end] = temp;
           end--;
       }
   }
//Solving by iterative approach ~Vishesh Raheja
// Time complexity: O(n) ~Vishesh Raheja
   int m = arr[0];
   for(int i = 0; i <=end; i++){
       m = max(m, arr[i]);
       if(abs(arr[i]) - 1 < n && arr[abs(arr[i]) - 1]>0){
           arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
       }
   }

   bool found = false;
   for(int i = 0; i < n; i++){
       if(arr[i]>0){
           cout<<i+1;
           found = true;
           break;
       }
   }
   
   if(!found){
       cout<<m+1;
   }
 
   return 0;
}
