#include<bits/stdc++.h>
using namespace std;

int uniqueNo(int n){
  vector<int> sum;
  for(int i = 0;i < n;i++){
    int temp;
    cin>>temp;
    int count = 1;
    while(temp > 0){
      int currBit = temp&1;
      temp = temp>>1;
      if(count > sum.size()){
        sum.push_back(currBit);
      }else{
        sum[count-1] += currBit;
      }
      count++;
    }
  }
  int ans = 0;
  for(int i = 0;i < sum.size();i++){
    ans += pow(2, i)*(sum[i]%3);
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  cout<<uniqueNo(n)<<endl;
}