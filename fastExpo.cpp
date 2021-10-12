#include<bits/stdc++.h>
using namespace std;

int fastExpo(int a, int b){
  int ans = 1;
  int mult = a;

  while(b){
    int currBit = b&1;
    b = b>>1;
    if(currBit){
      ans *= mult;
    }
    mult = pow(mult, 2);
  }
  return ans;
}

int main(){
  int a, b;
  cin>>a>>b;
  cout<<fastExpo(a, b)<<endl;
}