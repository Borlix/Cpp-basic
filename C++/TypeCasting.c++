// Type Casting - Conversion of Data type .

#include<iostream>
using namespace std ;
int main () {
    double price = 99.99;
    int Price = (int)price;
    
    cout<< Price << endl ;
    cout<<(5/2)<< endl;    // this returns 2 which is wrong answer cause the data type is int so we can!
    cout<<(5/(float)2)<< endl; // this returns correct answer cause we used typecasting and divide a int data with float 
                               // and float is superior data type so answer return in float  
    return 0 ;
}
