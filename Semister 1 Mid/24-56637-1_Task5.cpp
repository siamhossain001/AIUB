/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    long long int sum=0;

    for(int i = 3; i<=number; i+=3){
        sum+=i;
    }
    cout<<"Sum of all the numbers divisible by 3 is "<<sum<<endl;

    return 0;
}