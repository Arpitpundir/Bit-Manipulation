#include<bits/stdc++.h>
using namespace std;
int uniqueNo(int n){

  int ans = 0;// since xor of any number with 0 would be no itself
  for(int i = 0;i < n;i++){
    int temp;
    cin>>temp;
    ans = ans ^ temp;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<uniqueNo(n)<<endl;
}