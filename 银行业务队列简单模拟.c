# include <stdio.h>
# include <stdlib.h>
int main()
{
	int n,a[1001],b[1001],c[1001],k=0,s;
	scanf("%d",&n);
	int i,j=0,t,fronta=0,frontb=0,reara=0,rearb=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(t%2!=0)
		{
			a[reara++]=t;
		}
		else
		{
			b[rearb++]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		if(fronta<reara)
		{
			c[k]=a[fronta];
			k++;
			fronta++;
			c[k]=a[fronta];
			k++;
			fronta++;
		}
		if(frontb<rearb)
		{
			c[k]=b[frontb];
			k++;
			frontb++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",c[i]);
	}
	printf("%d",c[i]);

	
}
