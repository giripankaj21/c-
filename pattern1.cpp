#include<iostream>
using namespace std;
int main(){
    int a;
    
    int row=1;
    cin>>a;
    while(row<=a){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}