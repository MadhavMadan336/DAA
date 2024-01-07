/* INPUT:-TWO MATRIX A AND B EACH OF SIZE n*n 
   OUTPUT:-MATRIX C=A*B
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter the size of matrices: ");
scanf("%d", &n);
int a[n][n],b[n][n],c[n][n],i,j,k;
 printf("enter values for first matrix");
	for(i=0;i<n;i++)
    for(j=0;j<n;j++)
	{
		printf("\n enter values for 2D array=>>>>");
		scanf("%d",&a[i][j]);
	}
printf("enter values for second matrix");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
	{
		printf("\n enter values for 2D array=>>>>");
		scanf("%d",&b[i][j]);
	}
printf("\n first matrix is ");  
   for(i=0;i<n;i++)
   {
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d\t",a[i][j]);
   }  
printf("\n second matrix is ");
   for(i=0;i<n;i++)
   {
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d\t",b[i][j]);
   }  
for(i=0;i<n;i++)
for(j=0;j<n;j++)
for(k=0;k<n;k++)
c[i][j]=a[i][j]*b[i][j];
printf("\n multiplacation of matrix ");
  for(i=0;i<n;i++)
   {
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d\t",c[i][j]);
   }  
return 0;
}
