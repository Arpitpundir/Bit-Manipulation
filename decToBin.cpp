#include<bits/stdc++.h>
using namespace std;

long long int decToBin(int N){
  int n = 0,ans = 0;
  while(N > 0){
    int currBit = N&1;
    ans += pow(10, n)*currBit;
    n++;
    N = N>>1;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<decToBin(n)<<endl;
}