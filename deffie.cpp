#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a,q,xa,xb,ya,yb,k1,k2;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of q:");
	scanf("%d",&q);
	printf("enter the value of xa:"); 
	scanf("%d",&xa);
	printf("enter the value of xb:");
	scanf("%d",&xb);
	ya=pow(a,xa);
	ya=ya%q;
	printf("value of ya:%d",ya);
	yb=pow(a,xb);
	yb=yb%q;
	printf("\nvalue of yb:%d",yb);
	k1=pow(yb,xa);
	k1=k1%q;
	printf("\nsecret key of user A:%d",k1);
	k2=pow(ya,xb);
	k2=k2%q;
	printf("\nsecret key of user B:%d",k2);
}
	
