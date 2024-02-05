#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(isupper(ch)){
        cout<<"Is upper case";
    }else if(islower(ch)){
        cout<<"is lower case";
    }else if(isdigit(ch)){
        cout<<"is number";
    }
}