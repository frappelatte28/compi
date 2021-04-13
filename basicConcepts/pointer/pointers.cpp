#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p; //declaring pointer

    p = &a; //initializing 

    cout<<*p << endl; //derefrencing

    int A[3] = {1,2,3};
    int *P;
    P = A; // No need of & as A is already pointing to 0th index

    cout << P[0]; // No need of derefrencing

    int *d;
    float *b;
    double *c;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    //size of pointers are same irrespective of the data type
}