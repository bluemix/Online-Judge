
#include<stdio.h>
int main(){
	int n;
	int count;
	bool first=true;
	count=1;
	while(scanf("%d",&n)==1){
		int i,j,max,sum;
		int m[100];
		int c[20000]={0};
		bool IS;
		for(i=0;i<n;i++)
			scanf("%d",&m[i]);
		for(IS=true,i=0,max=-2147483647;i<n&&IS;i++)
			if(m[i]>=1)
				if(m[i]<=max)
					IS=false;
				else
					max=m[i];
			else
				IS=false;
		for(i=0;i<n&&IS;i++)
			for(j=i;j<n&&IS;j++){
				sum=m[i]+m[j];
				c[sum]++;
				if(c[sum]>1)
					IS=false;}
		if(first)
			putchar('\n');
		first=false;
		if(IS)
			printf("Case #%d: It is a B2-Sequence.\n\n",count++);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n",count++);
	}
	return 0;
}
/*

所謂「B2數列」係指一正整數數列 1<= b1 < b2 < b3 ...，其中所有的 bi + bj （i <= j）皆不相等。

您的任務是判別某一數列是否為「B2數列」。 

輸入說明 ：

每筆測試資料有兩行，第一行代表該數列有 N 個數值（2 ≤ N ≤ 100），第二行則為該數列的N個數值。每個數值 bi 皆為整數，且 bi ≤ 10000。

輸出說明 ：

每筆測試資料以一行輸出，且每筆輸出資料後均需輸出一空白行。格式請參考輸出範例。

範例輸入 ： 

4
1 2 4 8
4
3 7 10 14
5
13 14 15 16 17

範例輸出 ：

Case #1: It is a B2-Sequence.

Case #2: It is not a B2-Sequence.

Case #3: It is not a B2-Sequence.

提示 ：

acm 11063

出處 ：

acm 11063 (作者：taichunmin) 

*/