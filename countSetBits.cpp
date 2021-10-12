#include<iostream>
using namespace std;
int countSetBits(int N){
  int ans = 0;
  while(N > 0){
    ans += N&1;
    N = N>>1;
  }
  return ans;
}

int countSetBitsFast(int N){
  int ans = 0;
  while(N){
    N = N&(N-1);
    ans++;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<countSetBits(n)<<endl;
  cout<<countSetBitsFast(n)<<endl;
}