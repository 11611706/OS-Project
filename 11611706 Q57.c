#include<stdio.h>
#include<string.h>
int main()
{
int tet[30],att[20],n,i,j,temp,pa[20],stt[20],ftt[20],wtt[30],taa[20];
int tuwat=0,tota=0;
float atta,aata;
char pnb[10][10],t[10];
printf("Enter the number of processes\n:");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
printf("Enter process name\n,Enter the arrivaltime\n,Enter the execution time\n and Enter the priority:\n");
flushall();
scanf("%s\n%d\n%d\n%d\n",pnp[i],&att[i],&tet[i],&pa[i]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(pa[i]<pa[j])
{
temp=pa[i];
pa[i]=pa[j];
pa[j]=temp;
temp=ata[i];
att[i]=att[j];
att[j]=temp;
temp=tet[i];
tet[i]=tet[j];
tet[j]=temp;
strcpy(t,pnb[i]);
strcpy(pnb[i],pnb[j]);
strcpy(pnb[j],t);
}
}
for(i=0;i<n;i++)
{
if(i==0)
{
stt[i]=ata[i];
wtt[i]=stt[i]-ata[i];
ftt[i]=stt[i]+tet[i];
taa[i]=ftt[i]-att[i];
}
else
{
stt[i]=ftt[i-1];
wtt[i]=stt[i]-att[i];
ftt[i]=stt[i]+tet[i];
taa[i]=ftt[i]-att[i];
}
tuwat+=wtt[i];
tota+=taa[i];
}
awta=(float)tuwat/n;
atat=(float)tota/n;
printf("\nThe process name\t\n The arrival time\t\nThe execution time\t \nThe priority\t\nThe waiting time\t\nTheturnaroundtime\t\n");
for(i=0;i<n;i++)
printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d\t\t%5d",pnp[i],att[i],tet[i],pa[i],wtt[i],taa[i]);
printf("\nTHE Average waiting time is:%f",atta);
printf("\nTHE Average turnaroundtime is:%f",aata);
}

