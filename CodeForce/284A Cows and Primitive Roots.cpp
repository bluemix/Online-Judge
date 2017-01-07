#include<stdio.h>
#include <iostream>
using namespace std;


int countPrimitives(int p) {
  int ans=0;
  for(int i=1;i<p;i++){
    bool IS=true;
    int S=1;
    for(int j=1;j<=p-1;j++){
      S*=i,S%=p;
      if( j==p-1 ){
        if( S!=1 ){
          IS=false;
          break;
        }
      }
      else if( S==1 ){
        IS=false;
        break;
      }
    }
    if( IS )
      ans++;
  }

  return ans;
}


int main(){
	int p;
  cout<< "start typing numbers:\n";
	while( scanf("%d",&p)==1 ){
	  printf("primitive roots for %d = %d\n",p, countPrimitives(p));
	}
	return 0;
}
