#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{	int pid  = fork();
	int fact = 1;
	if(pid > 0){
	int num;
	
   	FILE *fd;
   	fd = fopen("file.txt","w");

   	printf("Enter num: ");
   	scanf("%d",&num);

   	fprintf(fd,"%d",num);
   	fclose(fd);

	}
	
	
	if(pid == 0){
	sleep(5);  // to delay if child executes first
  	int fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
	printf("File does not exist\n");
	return 1;
	}
	char buffer[200];
	int x;
	read(fd, buffer, sizeof(buffer)-1);
	printf("Contents of File are:\n");
	sscanf(buffer, "%d", &x); // type casting from char to int
	printf("%d\n", x);
	while(x>0)
	{
	fact = fact * x;
	x--;
	
	}
	printf("%d\n", fact);
	FILE *fdd;
   	fdd = fopen("file.txt","w");
   	fprintf(fdd,"%d",fact);
   	
	fclose(fdd);	
  
  	return 0;
}

}

