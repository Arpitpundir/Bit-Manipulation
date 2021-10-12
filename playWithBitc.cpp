#include<iostream>
using namespace std;

//problem is to count the no of set bits in integer in a given range
int findNoOfSetBits(int a, int b){
  int count = 0;
  for(int i = a; i <= b;i++){
    int temp = i;
    while(temp){
      int currBit = temp&1;
      temp = temp>>1;
      if(currBit){
        count++;
      }
    }
  }
  return count;
}
int main() {
  int n;
  cin>>n;
  while(n--){
  int a, b;
  cin>>a>>b;
  cout<<findNoOfSetBits(a, b)<<endl;
  }
}