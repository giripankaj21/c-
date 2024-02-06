#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int temp=row;
        while(col<=row){
            cout<<temp<<" ";
            temp++;
            col++;
        }
        row++;
        cout<<endl;
    }
}