//500円玉をA枚、100円玉をB枚、50円玉をC枚持っている時に合計をX円にするような場合の数を求める

#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z){
  int min=x;
  if(y<x&&y<z){
    min=y;
  }else if(z<x&&z<y){
    min=z;
  }

  return min;
}

int main(){

  int A,B,C,X;
  cin>>A>>B>>C>>X;

  int n_A,n_B,n_C; //A,B,Cがとりうる最小値
  int cnt=0;
  n_A=min(A,X/500,50);
  for(int i=0;i<=n_A;i++){
    n_B=min(B,(X-500*i)/100,50);
    for(int j=0;j<=n_B;j++){
      n_C=(X-i*500-j*100)/50;
      if(n_C<=C){
        cnt+=1;
      }
    }
  }


  cout<<cnt;

  return 0;
}
