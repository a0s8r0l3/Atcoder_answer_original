//N枚の円盤を半径が大きい順に積み上げた時にできる段数の最大値を求める

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  int cnt=0,flg=0; //cnt: 積み上げられる円盤の枚数、flg: 円盤が積み上げられるかを判定
  vector<int> vec(N); //円盤の半径

  for(int i=0;i<N;i++){
    cin>>vec.at(i);
  }

  for(int i=0;i<N;i++){
    flg=0;
    if(i==0){
      cnt+=1;
    }else{
      for(int j=0;j<i;j++){
        if(vec.at(i)==vec.at(j)){
          flg=1;
          break;
        }
      }
      if(flg==0){
      	cnt+=1;
      }
    }
  }
  cout<<cnt<<endl;
}
