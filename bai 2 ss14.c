#include<stdio.h>
void swap(int *a,int *b){
	printf("truoc khi doi cho hieu la %d\n",*a-*b);
	int temo=*a;
	*a=*b;
	*b=temo;
	printf("truoc khi doi cho hieu la %d\n",*a-*b);
}

int main(){
	int x,y;
	printf("nhap x :");
	scanf("%d",&x);
	printf("nhap y :");
	scanf("%d",&y);
	swap(&x,&y);

}
