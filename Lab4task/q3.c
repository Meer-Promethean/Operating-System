#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
char x[100];
scanf("%[^\n]s" , x);
while((getchar()) != '\n');
//printf("%s\n" , x);
int chk = strcmp(x , "exit");


while(chk != 0){
	
	scanf("%[^\n]s", x);
	while((getchar()) != '\n');
	
	if(strcmp(x ,"show current" ) ==0 ){
	system("pwd");
	}
	if(strcmp(x ,"list in detail" )==0){
	system("ls -a");
	}
	if(strcmp(x , "show process in detail")==0){
	system("ps -e");
	}
	if(strcmp(x , "exit") == 0){
	break;
	}
}
return 0 ;
}
	
	
	
	

