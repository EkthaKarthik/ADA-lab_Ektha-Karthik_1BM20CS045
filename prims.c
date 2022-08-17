#include<stdio.h>
int c[20][20],visited[10],a,b,i,j,n,a,b,min;
int cost = 0;
int count = 0;
void prim()
{
    min = 999;
    visited[1] = 1;
    while(count<n-1)
    {
        min = 999;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(visited[i]==1 && visited[j]==0 && min>c[i][j])
                {
                    min = c[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        printf("%d -> %d -> %d \n",a,b,c[a][b]);
        cost += c[a][b];
        visited[b] = 1;
        count++;
    }
    printf("Total cost of spanning tree: %d \n",cost);
}
void main()
{

    printf("Enter the number of nodes in the graph: \n");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
            c[i][j]=999;
        }
        visited[i] = 0;
    }
    prim();
}
