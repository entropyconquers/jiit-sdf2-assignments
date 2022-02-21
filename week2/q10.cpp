/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments ~Vishesh Raheja
Copyright 2022 Vishesh Raheja
*/


//p = 0x16bcbf470, ptr = 0x16bcbf470 ~Vishesh Raheja
//*p = 3, *ptr = 0x16bcbf470 ~Vishesh Raheja
//sizeof(p) = 8, sizeof(*p) = 4 ~Vishesh Raheja
//sizeof(ptr) = 8, sizeof(*ptr) = 20 ~Vishesh Raheja

//Explaination: ~Vishesh Raheja
//Since p and ptr refer to the same address i.e. arr, their output is same ~Vishesh Raheja
//Since p is a pointer and ptr is a pointer of a pointer dereferencing p returns arr[0] whereas deref ptr returns address of arr[0]. ~Vishesh Raheja
//Size of p (pointer of int) = 8 bytes. ~Vishesh Raheja
//After deref p, it’s the size of int i.e 4 bytes. ~Vishesh Raheja
//Size of ptr (pointer of pointer of int) = 8 bytes. ~Vishesh Raheja
//After deref ptr, it’s the size of array of 5 int i.e 4*5 = 20 bytes. ~Vishesh Raheja
