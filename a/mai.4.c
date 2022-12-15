#include<stdio.h>
int asal(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{return 0;
		}}
		
	return 1;
}
int main()
{
 int n;
 printf("sayi giriniz:");
 scanf("%d",&n);
 
 if(asal(n)==0)
{
	printf("asal degildir");
}
 else 
 { printf("asaldir");
 }
	return 0;
}
