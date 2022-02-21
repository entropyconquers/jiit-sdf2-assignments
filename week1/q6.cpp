/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/

#include<iostream>
using namespace std;
int main()
{
//Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1. ~Vishesh Raheja

//get the size of the matrix ~Vishesh Raheja
   int n,m;
   cout<<"Enter n m: ";
   cin>>n>>m;
   int arr[n][m];
//read the elements from the user ~Vishesh Raheja
   cout<<"Enter elements of array: "<<endl;
   for(int i = 0; i < n ; i++){
       for(int j = 0; j< m; j++){
           cin>>arr[i][j];
       }
   }
// Solving the matrix  iteratively. ~Vishesh Raheja
   for(int i = 0; i < n ; i++){
       for(int j = 0; j< m; j++){
           if(arr[i][j] == 1){
               for(int o = 0;o < m; o++){
                   arr[i][o] = 2;
               }
               for(int o = 0;o < n; o++){
                   arr[o][j] = 2;
               }
           }
       }
   }
   for(int i = 0; i < n ; i++){
       for(int j = 0; j< m; j++){
           if(arr[i][j]){
               arr[i][j] = 1;
           }
       }
   }
   cout<<endl;
//print the matrix ~Vishesh Raheja
   for(int i = 0; i < n ; i++){
       for(int j = 0; j< m; j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
//Exit the program ~Vishesh Raheja
   return 0;
}
