/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include <iostream>
using namespace std;
 
int main()
{
//read a 2-D matrix from the user and display it in spiral form. ~Vishesh Raheja

// read the size of the matrix ~Vishesh Raheja
   int n,m;
   cin>>m>>n;
   int arr[n][m];
//read the elements from the user ~Vishesh Raheja
   for(int i = 0;i<n;i++){
       for(int j = 0;j<m;j++){
           cin>>arr[i][j];
       }
   }  
//row ~Vishesh Raheja
   int a = 0,b = n-1; bool forward = true;
//col ~Vishesh Raheja
   int c = 0, d = m-1; bool downward = true;
 
bool state = true; // 1 for row 0 for col ~Vishesh Raheja
   int p = 0;
// iterative approach ~Vishesh Raheja
   while(p<n*m){
       if(state){
           if(forward){
               for(int i = a; i <= b; i++){
                   cout<<arr[c][i]<<" ";
                   p++;
               }
               c++;
           }
           if(!forward){
               for(int i = b; i>=a;i--){
                   cout<<arr[d][i]<<" ";
                   p++;
               }
               d--;
           }
           forward = !forward;
       }
       if(!state){
           if(downward){
               for(int i = c; i <= d; i++){
                   cout<<arr[i][b]<<" ";
                   p++;
               }
               b--;
           }
           if(!downward){
               for(int i = d; i>=c;i--){
                   cout<<arr[i][a]<<" ";
                   p++;
               }
               a++;
           }
           downward = !downward;
       }
       state = !state;
   }
//Exit the program ~Vishesh Raheja
   return 0;
}
