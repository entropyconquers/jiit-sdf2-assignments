/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
 
using namespace std;
#define ll long long int
// this store all prime number ~Vishesh Raheja
// upto 10^5 ~Vishesh Raheja
// this function find all prime ~Vishesh Raheja
vector<ll> findPrime(int MAX)
{
   bool pm[MAX + 1];
   memset(pm, true, sizeof(pm));
// use sieve to find prime ~Vishesh Raheja
   pm[0] = pm[1] = false;
   for (int i = 2; i <= MAX; i++)
       if (pm[i])
           for (int j = 2 * i; j <= MAX; j += i)
               pm[j] = false;
// if number is prime then ~Vishesh Raheja
// store it in prime vector ~Vishesh Raheja
   vector<ll> prime;
   for (int i = 0; i <= MAX; i++)
       if (pm[i])
           prime.push_back(i);
   return prime;
}
// Function to find the smallest prime missing ~Vishesh Raheja
int findSmallest(int arr[], int n)
{
   int MAX = *max_element(arr, arr + n);
// first of all find all prime ~Vishesh Raheja
   vector<ll> prime = findPrime(MAX);
// now store all number as index of freq arr ~Vishesh Raheja
// so that we can improve searching ~Vishesh Raheja
   unordered_set<int> s;
   for (int i = 0; i < n; i++)
       s.insert(arr[i]);
// now check for each prime ~Vishesh Raheja
   int ans = -1;
   for (int i = 0; i < prime.size(); i++)
       if (s.find(prime[i]) == s.end()) {
           ans = prime[i];
           break;
       }
   return ans;
}
// Driver code ~Vishesh Raheja
int main()
{
   int arr[] = { 3, 0, 1, 2, 7 };
   int n = sizeof(arr) / sizeof(arr[0]);
// find smallest prime ~Vishesh Raheja
// which is not present ~Vishesh Raheja
   if (findSmallest(arr, n) == -1)
       cout << "No prime number missing";
   else
       cout << findSmallest(arr, n);
   return 0;
}
