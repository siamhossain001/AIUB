#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*
       2. Take any 4 integer numbers are input through the keyboard. 
       Write a program to find out the 2nd smallest number among 5 numbers.     
    */
    
   int arr[4];
   cout<<"Enter 4 numbers: ";
   for(int i=0;i<4;i++){
       cin>>arr[i];
   }
   for(int i=0;i<4;i++){
       for(int j=i+1;j<4;j++){
           if(arr[i]<arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   cout<<"2nd largest number is: "<<arr[1]<<endl;
    return 0;
}
