#include <stdio.h>
#include <string.h>
int max(int a,int b,int c){
	int t = a;
	if(b>t)t=b;if(c>t)t=c;
	return t;
}
int min(int a,int b,int c){
	int t = a;
	if(b<t)t=b;if(c<t)t=c;
	return t;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,j = 0;
		int a[1000],s[1000];
		for(i = 0;i < n;i++)
		scanf("%d",&a[i]);
		for(i = 0;i < n;i+=3)
		{
			if(((i/3)+1)%2 == 1)
			s[j++] = max(a[i],a[i+1],a[i+2]);
			else
			s[j++] = min(a[i],a[i+1],a[i+2]);
		}
		int k = s[0];
		for(i = 1;i< j;i++)
		if(s[i]>k)	k=s[i];
		printf("%d\n",k);
	}
}
