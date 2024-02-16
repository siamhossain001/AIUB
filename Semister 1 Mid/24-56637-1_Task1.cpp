/*
    Name: Siam Hossain
    ID  : 24-56637-1
*/
#include<iostream>

using namespace std;

bool isvowel(char alphabet){
    alphabet = toupper(alphabet);   // it will help for both small and capital
    switch(alphabet){
        case 'A':
        return true;
        break;
        
        case 'E':
        return true;
        break;

        case 'I':
        return true;
        break;

        case 'O':
        return true;
        break;

        case 'U':
        return true;
        break;

        default:
        return false;
    }
}
int main(){
    
    char alphabet;
    
    cin>>alphabet;
    // check if the alphabet or not
    if((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z')){
       if(isvowel(alphabet)){
             cout<<"vowel"<<endl;
        }    
        else {
            cout<<"consonant"<<endl;
        }
    }

    else {
        cout<<"Not a characte"<<endl;
    }

    return 0;
}