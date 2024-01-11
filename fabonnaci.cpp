#include<iostream>
using namespace std;

int fabonnaci(int n ){
    if(n == 0){
        return 0;
    }
    if( n ==1 ){
        return 1;
    }
    else{
        return (fabonnaci(n-1) + fabonnaci(n-2));
    }
}

int main(){

    int value = 4;
    int result = fabonnaci(4);
    cout<<result;
}
