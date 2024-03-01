/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/
#include<iostream>
using namespace std;

int main(){
    int number1,number2,number3;
    cout<<"Please enter three numbers: "<<endl;
    cin>>number1>>number2>>number3;
    
    // if number 1 is big
    if((number1>=number2 && number1>=number3)){
        if(number1%2==0){
                cout<<number1<<" Is the largest and it is even number"<<endl;    
        }
        else {
                cout<<number1<<" Is the largest and it is odd number"<<endl;
        }
    }
    //if number 2 is big
    else if(number2>=number1 && number2>=number3){
        if(number2%2==0){
             cout<<number2<<" Is the largest and it is even number"<<endl;    
        }
        else {
            cout<<number2<<" Is the largest and it is odd number"<<endl;
        }
    }
    
    //number 3 is big
    else{
            if(number3%2==0){
                 cout<<number3<<" Is the largest and it is even number"<<endl;    
            }
            else {
               cout<<number3<<" Is the largest and it is odd number"<<endl;
            }
    }

    return 0;
}