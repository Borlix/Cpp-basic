// find sum of n numbers
#include<iostream>
using namespace std;
int main (){
    int n=1,num,sum=0;
    cout<<"enter number : ";
    cin>>num;
    for(num;n<=num;n++){
        sum +=n;
    }
    cout<<"Sum is : "<< sum <<endl;
    return 0;
}