#include <stdio.h>

void conversion(double *,char *,int);

int main(void){
	int n;
	scanf("%d",&n);
	int i;
	double a[10];
	char c[10];
	for(i=0;i<n;i++){
		scanf("%lf %c",&a[i],&c[i]);
	}
	conversion(a,c,n);

}

void conversion(double *b,char *a,int n){
	for(int i=0;i<n;i++){
		if(a[i] == 'm'){
			b[i] = b[i] * 3.2808;
			printf("%lf ft\n",b[i]);
		}else if(a[i] == 'g'){
			b[i] = b[i] * 0.002205;
			printf("%lf lbs\n",b[i]);
		}else if(a[i] == 'c'){
			b[i] = 32 + 1.8 * b[i];
			printf("%lf f\n",b[i]);
		}
	}
}


