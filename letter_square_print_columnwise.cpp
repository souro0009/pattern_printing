#include<iostream>
using namespace std;
int main(){
    int letter = 96;
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<static_cast<char>(letter+j)<<" ";
        }
        cout<<endl;
    }
}