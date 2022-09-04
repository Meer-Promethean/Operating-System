#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  

    int pfd[2];       
    pipe(pfd);        // ah pipe
    char text[20]; // temporary storage
    FILE *fd1,*fd2;
    int pid = fork();
    char c;
    char *path1 = argv[1];   // argument paths
    char *path2 = argv[2];
    if (pid == 0){
        fd2 = fopen("copy.txt", "w");
       
        read(pfd[0], text , 15);

        fputs(text ,fd2);
        fclose(fd2);

    }
    else
    {

        fd1 = fopen("input.txt", "r");
        do
        {
            c=fgetc(fd1);
            write(pfd[1], (void *)&c, 1);

        } while (c!=EOF); // while c != end of file
        
       
        fclose(fd1);
    }

    return 0;
}
