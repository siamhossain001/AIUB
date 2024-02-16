/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/
#include<iostream>
using namespace std;

int main(){
    int attendance ,class_held;
    double percentage;

    cout<<"Enter the number of classes held : ";
    cin>>class_held;
    cout<<"Enter the number of classes attended : ";
    cin>>attendance;

    percentage = ((double)attendance/class_held)*100.00;

    if(percentage>=80.00){
        cout<<"He is allowed to sit in the exam and his percentage is "<<percentage<<"%"<<endl;
    }    
    else {
         cout<<"Sorry! He/she is not allowed to sit in the exam and his percentage is "<<percentage<<"%"<<endl;
    }
    return 0;
}