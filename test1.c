#include<stdio.h>
void main()
{
	int i,j,item[4][5],hari[5],priya[5],poorna[5],chandra[5];
	printf("enter the cost of items\n");
	for(i=0;i<4;i++)
		for (j=0;j<5;j++)
 	scanf("%d",&item[i][j]);
       	for(j=0;j<5;j++)
	{
        hari[j]=item[0][j];
	priya[j]=item[1][j];
        poorna[j]=item[2][j];
   	chandra[j]=item[3][j]; 
	}
	printf("total amount of hari is\n");
        for (j=0;j<5;j++)
        printf("%d",hari[j]);

	printf("total amount of priya is\n");
        for (j=0;j<5;j++)
        printf("%d",priya[j]);
 
	printf("total amount of poorna is\n");
        for (j=0;j<5;j++)
        printf("%d",poorna[j]);
 
	printf("total amount of chandra is\n");
        for (j=0;j<5;j++)
        printf("%d",chandra[j]);
}
