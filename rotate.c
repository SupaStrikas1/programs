#include<stdio.h>
void rotate(int a[],int n,char d,int cr){
	int t;
	if(d=='l'){
		for(int i=0;i<cr;i++){
			t=a[0];
			for(int j=0;j<n-1;j++){
				a[j]=a[j+1];
			}
		a[n-1]=t;
		}
	}
	if(d=='r'){
		for(int i=0;i<cr;i++){
			t=a[n-1];
			for(int j=n-1;j>0;j--){
				a[j]=a[j-1];
			}
		a[0]=t;
		}
	}
}
void main(){
	int n,cr;
	char d;
	scanf("%d",&n);
	int a[n];
	printf("Enter elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
	printf("Number of rotation : ");
	scanf("%d",&cr);
	printf("Direction of rotation : ");
	scanf("%c",&d);
	
	rotate(a,n,d,cr);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
