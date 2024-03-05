#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*
        2. A weather station wants to calculate the average temperature and humidity over a certain period (5 days).
         Write a program that asks the user to input the temperature and humidity readings for five days and calculate rates for the average temperature and humidity.
    */
    int temp=0,humidity=0;
    int input;

    cout<<"Input temperature and humidity for 5 days: ";
    for(int i=0;i<5;i++){
        cin>>input;
        temp+=input;
    }

    cout<<"Input temperature and humidity for 5 days: ";
    for(int i=0;i<5;i++){
        cin>>input;
        humidity+=input;
    }

    cout<<"Average temperature: "<<(float)temp/5<<endl;
    cout<<"Average humidity: "<<(float)humidity/5<<endl;
    return 0;
}
