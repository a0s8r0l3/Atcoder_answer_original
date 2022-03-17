//合計Y円になる紙幣N枚の組み合わせを出力

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int x,y,z; //x:10000円札, y:5000円札, z: 1000円札
  x=-1,y=-1,z=-1;
  int N,Y=0;
  cin>>N>>Y;

  for(int i=0;i<=min(Y/10000,N);i++){
    for(int j=0;j<=min((Y-i*10000)/5000,N-i);j++){
      if(i*10000+j*5000+(N-i-j)*1000==Y){
        x=i;
        y=j;
        z=N-i-j;
      }
    }
  }
  cout<<x<<" "<<y<<" "<<z<<endl;
  return 0;
}
