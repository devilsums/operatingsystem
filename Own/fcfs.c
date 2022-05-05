#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 30

void main(){
	int i, j, n, bt[MAX], at[MAX], wt[MAX], tat[MAX], temp[MAX];
	float atat=0, awt=0;
	
	printf("Enter the number of processes:\n> ");
	scanf("%d", &n);
	
	printf("Enter the burst time of processes:\n");
	for(i=0; i<n; i++)
		scanf("%d", &bt[i]);
		
	printf("Enter the arrival time of processes:\n");
	for(i=0; i<n; i++)
		scanf("%d", &at[i]);
		
	temp[0]=0;
	printf("Processes\t Burst Time\t Arrival Time\t Waiting Time\t Turnaround Time\n");
	for(i=0; i<n; i++)
	{
		wt[i]=0;
		tat[i]=0;
		temp[i+1] = temp[i]+bt[i];
		
		wt[i]=temp[i]-at[i];
		tat[i]=wt[i]+bt[i];
		
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\n", i+1, bt[i], at[i], wt[i], tat[i]);
		
	}
	
	awt=awt/n;
	atat=atat/n;
	printf("Average waiting time: %f\n", awt);
	printf("Average turnaround time: %f", atat);
	getch();
}
