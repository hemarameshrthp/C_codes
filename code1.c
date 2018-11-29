#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int k,j,temp;
	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			if(a[j]>a[k]){
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		}
	}
	if(a[0]==0) printf("0");
	else{
	for(i=0;i<n;i++) printf("%d",a[i]);
	}
	return 0;
}
