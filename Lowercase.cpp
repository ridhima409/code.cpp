#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter char";
    cin>>ch;
    if(ch>='a'&& ch<='Z'){
        cout<<"Lowercase\n";
    }else{
        cout<<"Uppercase\n";
    }
    return 0;
}