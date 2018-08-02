#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,item,beg=0,mid,end,count=1,flag=0;
	clrscr();
	printf("How many elements you want to enter=\n");
	scanf("%d",&n);
	printf("Enter all the elements in sorted order=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item that is search=\n");
	scanf("%d",&item);
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end)
	{       if(item==a[mid])
		{
		printf("The item %d is found at %d position in %d iteration",item,mid+1,count);
		flag=1;
		break;
		}
		else if(a[mid]<item)
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=(beg+end)/2;
		count++;
	}
	if(flag==0)
	{
	printf("The item is not found in the array");
	}
getch();
}
