//N個の整数A1,A2,...,ANが全て偶数のときに2で割る操作が何回できるか求める

#include<bits/stdc++.h>
using namespace std;

int min(vector<int> x,int N){ //最小値を求める
  int m;
  m=x.at(0);
  for(int i=1;i<N;i++){
    if(x.at(i)<m){
      m=x.at(i);
    }
  }

  return m;
}

int main(){
  int N;
  cin>>N;
  vector<int> vec(N);  //A1,A2,...,ANを入力
  vector<int> cnt(N); //各値が何回2で割れるか入力
  for(int i=0;i<N;i++){
    cin>>vec.at(i);
  }

  for(int i=0;i<N;i++){
    while(true){
      if(vec.at(i)%2==1){
        break;
      }
      cnt.at(i)+=1;
      vec.at(i)=vec.at(i)/2;
    }
  }

  cout<<min(cnt,N)<<endl;

  return 0;
}
