#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*
       1. Take any 5 integer numbers are input through the keyboard.
       Write a program to find out the 3rd largest number among 5 numbers. 
    */

   int arr[5];
   cout<<"Enter 5 numbers: ";
   for(int i=0;i<5;i++){
       cin>>arr[i];
   }
   for(int i=0;i<5;i++){
       for(int j=i+1;j<5;j++){
           if(arr[i]<arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   cout<<"3rd largest number is: "<<arr[2]<<endl;
    return 0;
}
