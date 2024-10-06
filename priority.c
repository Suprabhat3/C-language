// priority CPU scheduling in C language 

#include<stdio.h>
int main() {
    int n;
    printf("enter the number of process :");
    scanf("%d", &n);
    int t,p[n],pr[n], bt[n], wt[n];
    float awt = 0;

        for (int i = 0; i < n; i++)
    {   printf("enter the process number :");
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time of the process%d:",i+1);
       scanf("%d",&bt[i]);
    }
    for (int i = 0; i < n; i++)
    {    printf("enter the priority of the process%d:",i+1);
        scanf("%d",&pr[i]);}

          // applaying bubble short technique
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(pr[j]>pr[j+1]){

                 t = pr[j];
                pr[j] = pr[j+1];
                pr[j+1] = t;
                
                t = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = t;
                
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;

            }
        }
        
    }
    printf("process\t bust time\t priority \t waiting time\n");
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        for (int j = 0; j < i; j++)
        {
            wt[i]=wt[i]+bt[j];
        }
         awt=awt+wt[i];
         printf("%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],pr[i],wt[i]);
        
    }
    awt=awt/n;
    printf("\nAvarage waiting time = %f",awt);

    return 0;
}
