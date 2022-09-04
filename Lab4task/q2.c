#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

while(1){	
	printf("Chsoose the Command: \n");
	printf("1.List directories \n");
	printf("2.Show Process \n");
	printf("3.Show Confguration \n");
	printf("4.Exit \n");
	
	int x;
	scanf("%d", &x);
	if(x==1){
	system("ls");
	}
	if(x==2){
	system("ps");
	}
	if(x==3){
	system("ifconfig");
	}
	if(x==4){
	break;
	}
}
return 0 ;
}
	
	
	
	

