#include<iostream>
using namespace std ;
int main (){
    int a , b;
    cout<<"Enter num for A : ";
    cin >> a ;
    cout<<"Enter num for B : ";
    cin>> b;
    if (a > b) {
        cout<<"A is greater than B ";
    } else if (a < b) 
    {
        cout<<"B is greater than A";
    }
    else {
        cout<<"Both are equal" ;
    }
    return 0;
}