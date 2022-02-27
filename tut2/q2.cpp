#include<iostream>
using namespace std;

class students{
    private:
    int *arr; 
    int currSize;
    int maxSize;
    public:
    students(int size){
        arr = new int[size];
        maxSize = size;
        currSize = 0;
    }
    void insert(int a){
        if(currSize < maxSize){
            arr[currSize] = a;
            currSize++;
        }
        else{
            // create a new array with double the size
            int *temp = new int[maxSize*2];
            // copy the old array to the new array
            for(int i=0;i<maxSize;i++){
                temp[i] = arr[i];
            }
            // delete the old array
            delete [] arr;
            // assign the new array to the old array
            arr = temp;
            // insert the new element
            arr[currSize] = a;
            // increment the size
            currSize++;
            // update the max size
            maxSize = maxSize*2;
        }
    }
    void display(){
        for(int i=0;i<currSize;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void remove(int index){
        if(index <= currSize){
            for(int i=index;i<currSize-1;i++){
                arr[i] = arr[i+1];
            }
            currSize--;
        }
    }
};

int main(){
    students s(5);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.display();
    s.remove(2);
    s.display();
    return 0;
}