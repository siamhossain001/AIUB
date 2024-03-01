/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/ 
#include<iostream>
using namespace std;

int main(){
    int first,secound,third,N;
    first = 0;
    secound = 1;
   
    int sum = 0;
    cout<<"Enter the number of ith fibonacci number : "<<endl;
    cin>>N;
    
    while(N--){
        third = first + secound;
        first = secound;
        secound = third;
        
        sum+=first;
    }

    cout<<"The value of ith Fibonacci number sum is : "<<sum<<endl;


    return 0;
}