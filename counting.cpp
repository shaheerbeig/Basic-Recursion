#include<iostream>
using namespace std;

int count(int value){
    if(value == 0){
        return 0;
    }
    else{
        cout<<value<<endl;
        return value + count(value - 1);
    }
}
int main(){

    int value = 5;
    int result = count(5);
    cout<<result;
}
