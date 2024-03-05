#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*4. Write a program that calculates the sum of the first n terms of the series 1 + 1/4 + 1/9 + ... + 1/n^2.
     The program should ask the user to enter the value of n, and then use a loop to calculate the sum.
    */

   int N;
   cout<<"Enter the value of N: ";
   cin>>N;;

   float sum=0.0;
   for(int i=0;i<N;i++){
       sum+=1.0/(pow(i+1,2));
   }
   
   cout<<sum<<endl;
    
    
    return 0;
}
