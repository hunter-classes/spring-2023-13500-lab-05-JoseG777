#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisble(int a, int b){
    if(a%b==0){
        return true;
    }
    else{
        return false;
    }
}

bool isPrime(int n){
    if(n >= 2){
    for(int i = 2;i < n-1; i++){
        if(isDivisble(n, i) == true){
            return false;
        }
    }
    return true;
    }
}

int nextPrime(int n){
    int j = n + 1;
    while(isPrime(j) == false){
        j++;
    }
    return j;
}

int countPrimes(int a, int b){
    int count = 0;
    for(int k = a; k < b; k++){
        if(isPrime(k)==true){
            count += 1;
        }
    }
    return count;
}

bool isTwinPrime(int n){
    if(isPrime(n) == true){
        if(isPrime(n + 2) == true or isPrime(n - 2) == true){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int nextTwinPrime(int n){
    int l = n + 1;
    while(isTwinPrime(l) == false){
        l = l + 1;
    }
    return l;
}

int largestTwinPrime(int a, int b){
    int n;
    int m = b;
    while(isTwinPrime(m) == false and m > a){
        m = m - 1;
    }
    if(isTwinPrime(m) == false){
        return -1;
    }
    else{
        return m;
    }
}
