// Operators - use to perform opperations
// Arithmetic Operatots = + , - , * , / , %
#include<iostream>
using namespace std;
int main() {
    int a = 8 , b = 4;
    int sum = a + b;
    int sub = a - b;
    int multipel = a * b;
    int Division = a / b;
    int reminder = a % b; // % its called modulus
    
    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<multipel<<endl;
    cout<<Division<<endl;
    cout<<reminder<<endl;

// Relational Operators = < , > , <= , >= ,== , != ,Returns True/False

    int x = 5 , y = 6;
    cout<< (x < y) << endl ;
    cout<< (x > y) << endl ;
    cout<< (x <= y) << endl ;
    cout<< (x >= y) << endl ;
    cout<< (x == y) << endl ;
    cout<< (x != y) << endl ;

    return 0;
}

// Logical Operators = AND , OR , NOT - we will study it in conditional statements properly! I know the basic logic
// Bitwise Operators = I don't know for now we will study it in future 
// Unary Operators = ++ increments , -- decrements 