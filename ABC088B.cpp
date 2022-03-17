//得点を最大化する戦略を取りながら点の書かれたN枚のカードを交互にとる時、1人目が多くとる点数

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  vector<int> a(N);
  vector<bool> flg(N);
  int round=0; //何回戦目か
  for(int i=0;i<N;i++){
    cin>>a.at(i);
    flg.at(i)=true;
  }

  int max=0;
  int address=0;
  int sum_Alice=0,sum_Bob=0; //Alice: 一人目, Bob: 2人目


  for(int i=0;i<N;i++){
    round+=1;
  	for(int j=0;j<N;j++){
      if(flg.at(j)==true){
        max=a.at(j);
        address=j;
        break;
      }
  	}

    for(int j=0;j<N;j++){
      if(a.at(j)>max&&flg.at(j)==true){
        max=a.at(j);
        address=j;
      }
    }

    if(round%2==1){
      sum_Alice+=max;
    }else{
      sum_Bob+=max;
    }
    flg.at(address)=false;
  }

  cout<<sum_Alice-sum_Bob;
}
