/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/
#include<iostream>
using namespace std;
int main(){
    int istrue = 0;
    char alphabet;

    cout<<"Enter a Character"<<endl;
    cin>>alphabet;
switch(alphabet){

        // this is for vowels capital letters        
        case 'A':case 'E':case 'I':
        case 'O':case 'U':
        cout<<alphabet<<" Is a Vowel"<<endl;
        break;
        
        //this is for vowels small letters
        case 'a':case 'e':case 'i':
        case 'o':case 'u':
        cout<<alphabet<<" Is a Vowel"<<endl;
        break;

        //this is for consonant
        case  'b':case  'c':case  'd':case  'f':case  'g':case  'h':case  'j':
        case  'k':case  'l':case  'm':case  'n':case  'p':case  'q':case  'r':
        case  's':case  't':case  'v':case  'w':case  'x':case  'y':case  'z':
        cout<<alphabet<<" Is a Consonant"<<endl;
        break;

        // this is for capital consonant
        case 'B':case 'C':case 'D':case 'F':case 'G':case 'H':case 'J':
        case 'K':case 'L':case 'M':case 'N':case 'P':case 'Q':case 'R':
        case 'S':case 'T':case 'V':case 'W':case 'X':case 'Y':case 'Z':
        cout<<alphabet<<" Is a Consonant"<<endl;
        break;
 
        //this for all non alphabet characters 
        default:
        cout<<"Not a character"<<endl; 
}
    
    return 0;
}