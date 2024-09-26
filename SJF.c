// SJF technique for process execution

#include<stdio.h>

int main() {
    int max = 30;
    int n,t,p[max],bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    printf("enter the number of process :");
    scanf("%d",&n);
    printf("enter the process number :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the bust time of the process :");
    for (int i = 0; i < n; i++)
    {
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
    printf("process \t bust time \t waiting time \t turn around time \n");
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
       for (int j = 0; j < i; j++)
       {
        wt[i] = wt[i]+bt[j];

       }
       tat[i] = wt[i]+bt[i];
       awt = awt + wt[i];
       atat = atat+tat[i];
       printf("%d \t\t %d \t\t\t %d \t\t %d\n",p[i],bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Avarage waiting time = %f\n",awt);
    printf("avarage turn around time =%f",atat);
    
    return 0;
}
