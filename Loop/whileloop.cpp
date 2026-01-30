#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int i = 1;  

    while(i <= n){
        if(i % 2 != 0){   // odd check
            cout << i << " ";
        }
        i++;   // increment inside loop
    }

    cout << endl;
    return 0;
}
