#include<stdio.h>
void bubblesort(int a[],int n){
	int t;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;}}}
}
void insert(int a[],int n,int m){
	for(int i=n-1;i>=0;i--){
		if(a[i]>m){
			a[i+1]=a[i];}
		else{
			a[i+1]=m;
			break;}}
}
void main(){
	int n,m;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);}
	printf("\nMark to insert : ");
	scanf("%d",&m);
	insert(a,n,m);
	for(int i=0;i<=n;i++){
		printf("%d ",a[i]);}
}
