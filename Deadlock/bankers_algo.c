#include<stdio.h>
int main(){
    int n,i,j,k,y,alloc[20][20],max[20][20],avail[50],ind=0;
    printf("Enter the no of process");
    scanf("%d",&n);
    printf("Enter the no of resources:");
    scanf("%d",&n);
    printf("Enter the Allocation Matrix");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&alloc[i][j]);
        }
    }
    printf("Enter the Max Matrix");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter the Available Matrix");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&avail[i]);
    }
    int finish[n],safesequence[n],work[m],need[n][m];
    //calculating NEED Matrix
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }  
    }
    printf("NEED MATRIX IS");
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        for ( j = 0; j < count; j++)
        {
            printf("%d",need[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        work[i]=avail[i];
    }
    for ( i = 0; i < n; i++)
    {
        finish[i]=0;
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
                if (finish[i]==0)
                {
                    int flag=0;
                    for ( k = 0; k < m; k++)
                    {
                        if (need[i][j] >work[i][j])
                        {
                            flag = 1;
                            break;
                        }
                        
                    }
                    
                }
                
        }   
    }
        
    
    
    
    

    
    
    
    
}