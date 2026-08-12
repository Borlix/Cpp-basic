// Q1 find the character is uppercase or lowercase

#include<iostream>
#include<string>
using namespace std;

int main(){
    char latter;
    cout<<"Enter a latter : ";
    cin>> latter;

    if  (latter >='A' && latter <='Z'){
        cout<<"Latter is Uppercase";
    }else if (latter >='a' && latter <='z'){
        cout<<"Latter is lowercase";
    }else{
        cout<<"Latter is not alphabet!";
    }
    
    return 0;
}