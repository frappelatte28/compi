#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main(){
    int a = 10;
    int *p; //declaring pointer
    p = &a; //initializing 
    cout<<*p << endl; //derefrencing


    int A[3] = {1,2,3};
    int *P;
    P = A; // No need of & as A is already pointing to 0th index
    cout << P[0]<<endl; // No need of derefrencing


    //derefrencing
    int x = 10;
    int &r = x;
    cout<<x<<endl<<r<<endl;


    //Pointer to structures
    // Rectangle R = {10,20};
    // cout<<R.length<<endl<<R.breadth<<endl;
    Rectangle *R;
    R = new Rectangle;
    R->length = 20;
    R->breadth = 10;

    cout<<R->length<<endl<<R->breadth<<endl;  
}