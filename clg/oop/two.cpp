#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void main(){
    int n;
    cin >> n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i!=0){
            cout << "prime";
        }else{
            cout << "not prime";
            break;
        }
    }

}