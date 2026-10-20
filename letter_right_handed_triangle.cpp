#include<iostream>
using namespace std;
int main(){
    char letter = 97;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<letter<<" ";
        }
        cout<<endl;
        letter++;
    }
}