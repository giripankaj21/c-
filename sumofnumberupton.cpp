#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number upto which sum to be finded"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum upto n is: "<<sum<<endl;
}