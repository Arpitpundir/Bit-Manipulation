#include<bits/stdc++.h>
using namespace std;
int clearRange(int N, int i, int j){
  int a = -1<<i;
  int b = 1<<(j-1) - 1;
  int mask = a|b;
  return mask&N;
}

int main(){
  int N;
  int i, j;
  cin>>N>>i>>j;
  cout<<(clearRange(N, i, j));
}