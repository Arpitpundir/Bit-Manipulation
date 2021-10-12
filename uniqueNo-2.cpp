#include<bits/stdc++.h>
using namespace std;

int Xor(vector<int> arr){
  int l = arr.size();
  int ans = 0;
  for(int i = 0;i < l;i++){
    ans = ans^arr[i];
  }
  return ans;
}

int firstSetBit(int N){
  int ans = 0;
  while(N > 0){
    if(N&1){
      ans++;
      return ans;
    }
    N = N>>1;
    ans++;
  }
  return ans;
}
void uniqueNo(vector<int> arr){
  int n = arr.size();
  int res = Xor(arr);
  int firstBit = firstSetBit(res);
  int mask = 1<<(firstBit-1);
  vector<int> arr2;

  for(int i = 0;i  < n;i++){
    if(arr[i]&mask){
      arr2.push_back(arr[i]);
    }
  }

  int a = Xor(arr2);
  int b = res ^ a;
  cout<<a<<" "<<b<<endl;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for(int i = 0;i < n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  uniqueNo(arr);
}