#include<iostream>
using namespace std;
int main(){
    int f,c,i;
    cout<<"enter the temperature up to which you want to find celcius:";
    cin>>f;
    i=0;
    cout<<"farenheit   celcius"<<endl;
    while(i<=f){
        c=(5*(i-32))/9;
        cout<<i<<"          "<<c<<endl;
        i++;
    }
}