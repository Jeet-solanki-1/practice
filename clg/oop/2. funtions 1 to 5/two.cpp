#include<iostream>
using namespace std;
// call by value;

void printA(int a){
cout << "call by value" << a;
}
int main(){

int a;cin>>a; printA(a); return 0;

}