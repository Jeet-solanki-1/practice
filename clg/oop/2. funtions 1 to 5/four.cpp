// fun overloading
#include<iostream>
using namespace std; void area(int *a, int *b){ /*area of rect with int*/ cout << " rect with int: " << (*a)*(*b);} void area(double a, double b){/* area of rect with double */ cout<<"rect with double" << a*b;} int main(){ int a,b; cin >> a;cin >> b; area(&a,&b);  area(a,b); return 0;}