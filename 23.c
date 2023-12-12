#include <stdio.h>

int min(int *,int);

int main(void){
	int n;
	scanf("%d",&n);
	int a[101];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int o = min(a,n);
	printf("%d\n",o);
	return 0;
}

int min(int *a,int n){
	int s = a[0];
	for(int i=0;i<n;i++){
		if(s > a[i]){
			s = a[i];
		}
	}
	return s;
}

