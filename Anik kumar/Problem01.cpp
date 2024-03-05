#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*
        1.Take a character as input through the keyboard. Write a program to find out whether the gender is Male or Female.
        Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female.
        For any other input, the result will show “Undefined”.
    */
    char input;
    cin>>input;

    if(input=='m' || input=='M'){
        cout<<"Male"<<endl;
    }
    else if(input=='F' || input=='f'){
        cout<<"Female"<<endl;
    }
    else {
        cout<<"Undefined"<<endl;
    }
    return 0;
}
