// call by refrence
#include<iostream> 
using namespace std; void printA(int *a){cout<< "c by r" << *a;} int main(){int a; cin >> a; printA(&a); return 0;}