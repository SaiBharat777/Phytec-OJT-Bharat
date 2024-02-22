#include<stdio.h>
#include<string.h>
int main()
{
char data[10][50]={"Rahul:Dravid:Banglore:90909090","Sachin:Tendulkar:Mumbai:9988988","Sourav:Ganguly:Kolkata:987986","Anil:Kumble:Mysore:9887686","VVS:Laxman:Hyderabad:888686"}
char *token=NULL;
token=strtok(data,"-");
while(token!=NULL)
{
printf("token = %s\n",token);
token=strtok(NULL,"-");
}


}
