#include<bits/stdc++.h>
using namespace std;

void printSubset(string a, int n){
  int index = 0;
  while(n){
    int currBit = n&1;
    n = n>>1;
    if(currBit){
      cout<<a[index];
    }
    index++;
  }
}

void findSubset(string a){
  int n = a.size();
  int l = pow(2, n);
  for(int i = 0;i < l;i++){
    printSubset(a, i);
    cout<<endl;
  }
}

int main(){
  string a;
  cin>>a;
  findSubset(a);
}