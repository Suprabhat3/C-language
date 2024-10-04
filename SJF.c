// SJF technique for process execution

#include<stdio.h>

int main() {
    int n;
    printf("enter the number of process :");
    scanf("%d",&n);
    int t,p[n],bt[n],wt[n];
    float awt=0;
        
    for (int i = 0; i < n; i++)
    {   printf("enter the process number :");
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < n; i++)
    {   printf("enter the burst time of the process %d :",p[i]);
        scanf("%d",&bt[i]);
    }
    // applaying bubble short technique
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(bt[j]>bt[j+1]){
                t = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = t;
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
        
    }
    printf("process \t bust time \t waiting time\n");
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
       for (int j = 0; j < i; j++)
       {
        wt[i] = wt[i]+bt[j];

       }
       awt = awt + wt[i];
       printf("%d \t\t %d \t\t\t %d\n",p[i],bt[i],wt[i]);
    }
    awt=awt/n;
    printf("Avarage waiting time = %f\n",awt);
    return 0;
}
