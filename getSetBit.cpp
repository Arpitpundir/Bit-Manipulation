#include<bits/stdc++.h>
using namespace std;

void evenOdd(int n){
  if(n&1){
    cout<<"Odd"<<endl;
  }else{
    cout<<"Even"<<endl;
  }
}

int getnthBit(int n, int N){
  int temp = 1<<(n-1);
  int res = N&temp;
  if(res > 0){
    return 1;
  }
  return 0;
}

int setnthBit(int n, int N){
  int temp = 1<<(n-1);
  int res = N|temp;
  return res;
}
int main(){
  int n;
  cin>>n;
  cout<<setnthBit(1, 10);
}