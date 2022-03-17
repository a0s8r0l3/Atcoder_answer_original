//1以上N以下の整数のうち、十進法で格桁の和がA以上B以下のものの総和を求める

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

  int N,A,B;
  cin>>N>>A>>B;

  int sum=0;

  for(int i=1;i<=N;i++){
    if(i/10000+i%10000/1000+i%1000/100+i%100/10+i%10<=B&&
       i/10000+i%10000/1000+i%1000/100+i%100/10+i%10>=A){
      sum+=i;
    }
  }

  cout<<sum;

  return 0;
}
