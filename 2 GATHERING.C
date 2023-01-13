#include<stdio.h>
int sum (int a[100],int n ){
	
	int s=0;
	int i;
	
	for(i=0; i<n; i++){
	
	
	 s= s+a[i];
	 

}
	return s;

}
main(){
	
	int b[100];
	int v,i;
	
	int n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		
	printf("Enter number:");
	scanf("%d",&b[i]);
	}
	
	v=sum(b,n);
	printf("%d",v);
}



