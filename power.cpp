#include<iostream>
using namespace std;

int power(int value){
    if(value == 0){
        return 1;
    }
    else{
        return 2 * power(value - 1);
    }
}

int main(){

    int value = 5;
    int result = power(5);
    cout<<result;
}