#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first number(a) : ");
	scanf("%d",&a);
	printf("Enter the second number(b) : ");
        scanf("%d",&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping a is %d and b is %d ",a,b);
	return 0;
}
