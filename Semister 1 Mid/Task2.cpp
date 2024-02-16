/*
    Name: Siam Hossain
*/
#include<iostream>
using namespace std;

void is_even_or_odd(int number){
    if(number%2==0){
        cout<<number<<" Is the largest and it is even number"<<endl;    
    }
    else {
        cout<<number<<" Is the largest and it is odd number"<<endl;
    }
}
int main(){
    int number1,number2,number3;
    cout<<"Please enter three numbers: "<<endl;
    cin>>number1>>number2>>number3;

    if((number1>=number2 && number1>=number3)){
        is_even_or_odd(number1);
    }

    else if(number2>=number1 && number2>=number3){
        is_even_or_odd(number2);
    }

    else{
        is_even_or_odd(number3);
    }

    return 0;
}