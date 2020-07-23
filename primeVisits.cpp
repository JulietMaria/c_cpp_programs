#include<iostream>
using namespace std;

  void prime(int a,int b){
          int countt = 0;
      for(int i=a;i<=b;i++){
            int j;
        for( j=2;j<i;j++){
            if(i%j == 0){
                break;
            }
        }
         if(j==i){
            countt++;
         }
      }
      cout<<countt<<endl;
  }

  int main(){
     int t;
     cin>>t;
     while(t--){
        int a,b;
        cin>>a>>b;
        prime(a,b);
     }
  }

