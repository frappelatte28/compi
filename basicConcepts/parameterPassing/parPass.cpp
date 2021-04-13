#include <bits/stdc++.h>
using namespace std;

//parameter passing through address
// void swap(int *x, int *y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int a;
//     int b;
//     a = 0;
//     b = 10;
//     swap(&a, &b);
//     cout<<a <<endl<<b<<endl;
// }


//passing by reference
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a;
    int b;
    a = 0;
    b = 10;
    swap(a, b);
    cout<<a <<endl<<b<<endl;
}