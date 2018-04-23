#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],pr[10],temp1,n;
	float avgwt;
	printf("Enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student %d name:",i+1);
  		scanf("%s",&p[i]);
  		fflush(stdin);
		printf("Enter process time:");
		fflush(stdin);
		scanf("%d",&pt[i]);
		printf("Enter no of gifts:");
		fflush(stdin);
		scanf("%d",&pr[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]>pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}

	printf("\norder of billed students ==>>\n");
	printf("\nG_name\t P_time\t No.Gifts\n");
	for(i=0;i<n;i++)
	{
	   printf(" %s\t %d\t %d\t\n" ,p[i],pt[i],pr[i]);
	}
	getch();
}

