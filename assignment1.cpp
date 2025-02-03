/*1. Number Manipulation and Prime Numbers

Write a C++ program to take a positive integer.n as input and:

1. Check whether n is a prime number.

2. If it is not prime, find all its factors.

3. If it is prime, find the next prime number greater than n.
*/
#include<iostream>
using namespace std;
int main(){
    int n ,i=2;
    cout<<"enter number:";
    cin>>n; 
    for(i=2;i<=n;i++){
        if(n % i==0){  
            break;
        }
    }
    if(n==i){
        cout<<n<<" is prime number\n.";
        int secondPrime=n+1;
        while(true){
        for( i=2;i<secondPrime;i++){
            if(secondPrime % i==0){
                break;
            }
        }
        if(i==secondPrime){
            cout<<"second prime number is"<<secondPrime<<endl;
            break;
        }
        secondPrime++;
    }
    }
    else{
     cout<<n<<" is not prime number\n";
     for(int i=1;i<=n;i++){
        if(n % i==0){
            cout<<i<<" ";
        }
     }
      cout<<endl;
    }
    return 0;
    }
