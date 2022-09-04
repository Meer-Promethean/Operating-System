#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int  argc , char* argv[]){
	
	if(strcmp(argv[1], "list") == 0){
		system("ls");
		}
	if(strcmp(argv[1], "showprocess") == 0){
		system("ps");
		}
	if(strcmp(argv[1], "showconfig") == 0){
		system("ifconfig");
		}
	return 0;
	}
	
	
	
	

