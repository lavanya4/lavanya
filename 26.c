#include <stdio.h>
 
int main(void) {
	int i,j,a[50],size,m;
printf("\nEnter the size :");
scanf("%d",&size);
printf("\nEnter the array elementes");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]>a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
}}}
printf(" \nThe median element is %d",a[size/2]);
	return 0;
}
