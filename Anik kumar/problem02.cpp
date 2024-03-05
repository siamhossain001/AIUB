#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
    /*
       1. A store owner wants to calculate the total cost of the items in a customer's shopping cart. 
       Write a program that asks the user to input the prices and quantities of different items in the cart, and then calculate the total cost.
    */
    int cost,items;

    cout<<"Enter the cost of each item: ";
    cin>>cost;
    cout<<"Enter the number of items: ";
    cin>>items;

    cout<<"Total cost: "<<cost*items<<endl;
    return 0;
}
