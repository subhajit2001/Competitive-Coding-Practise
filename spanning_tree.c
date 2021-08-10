#include<stdio.h>
#include<conio.h>
#define MAX 10

int adj[MAX][MAX], tree[MAX][MAX], n;

void read_matrix()
{
	int i,j;
	printf("\n Enter the number of nodes in the Graph: ");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix of the Graph: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&adj[i][j]);
}

int spanning_tree(int src)
{
	int visited[MAX],d[MAX],parent[MAX];
	int i,j,k,min,u,v,cost;
	

