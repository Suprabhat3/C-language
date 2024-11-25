// FCFS with out tarn around time
#include<stdio.h>
int main() {
    int max = 30;
    int n, bt[max], wt[max];
    float awt = 0;
    printf("enter the number of process");
    scanf("%d", &n);
    printf("Enter the bust time the process");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&bt[i]);
    }
    printf("process\t bust time\t waiting time\n");
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        for (int j = 0; j < i; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
         awt=awt+wt[i];
         printf("%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i]);
        
    }
    awt=awt/n;
    printf("\nAvarage waiting time = %f",awt);

    return 0;
}
