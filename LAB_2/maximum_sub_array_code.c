/* INPUT:-A SEQUENCE OF INTEGERS,SEPARATED BY SPACE (+VE/-VE)
   OUTPUT:-MAXIMUM SUBSEQUENCE IN THE SEQUENCE
*/
#include <stdio.h>
int main() 
{
    int n,i,maxSum,currentSum,start,end,temp;//VARIABLES
    printf("Enter the number of integers: ");//PRINT MASSAGE
    scanf("%d",&n);//INPUT FROM THE USER HOW MANY SEQUENCE

    int sequence[n];//ARRAY VARABLES
    printf("Enter the sequence of integers separated by spaces:\n");//PRINT MASSAGE
    for(i=0;i<n;i++) //FOR LOOP FROM 0 TO 1
    {
        scanf("%d",&sequence[i]);//INPUT***STORED SEQUENCE IN ONE BY ONE IN ARRAY
    }

    maxSum=sequence[0];
    currentSum=sequence[0];
    start=0;
    end=0;
    temp=0;
    
    for (i=1;i<n;i++)
    {
        if(currentSum<0) 
        {
            currentSum=sequence[i];
            temp=i;
        } 
        else 
        {
            currentSum+=sequence[i];
        }
        if (currentSum>maxSum){
            maxSum=currentSum;
            start=temp;
            end=i;
        }
    }
//PRINT THE SUBSEQUENCE 
    printf("Maximum subsequence: \n ");
    for (i=start;i<=end;i++)
    {
        printf("%d\t",sequence[i]);
    }
//MAXIMUM subsequence SUM
    printf("\nMaximum subsequence sum: %d\n",maxSum);

    return 0;
}
