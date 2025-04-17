#include<iostream>
using namespace std;

int fibonacci(int n ){
    if(n==0 || n == 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n* factorial(n-1);
}

int power(int x,int y){
    
    if(y==1){
        return x ;
    }
    return power(x,y/2)*power(x,(y-y/2));
}



int main(){
    
    cout << factorial(5) << endl;

    cout << fibonacci(7) << endl;

    int result = power(2,5);
    cout << result<< endl;

    return 0;
    
}




