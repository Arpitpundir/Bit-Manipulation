#include<bits/stdc++.h>
using namespace std;

int clearLastnBits(int N, int n){
  int mask = -1<<n;
  return N&mask;
}

int main(){
  int N;
  cin>>N;
  cout<<clearLastnBits(10, 2)<<endl;
}