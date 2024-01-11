#include<iostream>
using namespace std;

int stairs(int n){
    if(n < 0){
        return 0;
    }
    if(n ==0){
        return 1;
    }
    else{
        return stairs(n-1) + stairs(n-2);
    }
}

int main(){

    int value = 5;
    int result = stairs(5);
    cout<<result;
}
