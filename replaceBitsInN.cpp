#include<bits/stdc++.h>
using namespace std;

int replaceWithZero(int N, int i, int j){
  int a = -1<<j;
  int b = 1<<(i-1) - 1;
  int mask = a|b;
  return N&mask;
}
int replaceBits(int N, int M, int i, int j){
  N = replaceWithZero(N, i, j);
  M = M<<(i-1);
  return N|M;
}
int main(){
  int N, M;
  int i, j;
  cin>>N>>M>>i>>j;
  cout<<replaceBits(N, M, i, j)<<endl;
}