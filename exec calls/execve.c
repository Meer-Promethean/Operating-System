#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	// santax execve(const char *file, char *const argv[], char *const envp[]);
  char *binaryPath = "/bin/bash";
  char *const args[] = {binaryPath, "-c", "echo \"Visit $HOSTNAME : $PORT from your browser.\"", NULL};
  char *const env[] = {"HOSTNAME=www.fast.nu.edu.pk.com", "PORT=8080", NULL};
 
  execve(binaryPath, args, env);
  // for making personal environment and takes agrs as an array
 
  return 0;
}
