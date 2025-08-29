#include<iostream>
using namespace std;

double calc(int a,int b, char opr){
double ans =0;
switch(opr){

case '+': ans=a+b; break; case '-': ans=a-b; break;
case '/' : if(b>0){ ans = a/b;} else { cout << "fool 0";} break; default : cout << "oops"; break;

}
return ans;
}

int main(){

int a;  cin >> a;
int b;  cin >> b;
char opr; cin >> opr;
int ans = calc(a,b,opr);

cout << ans;

return 0;

}



