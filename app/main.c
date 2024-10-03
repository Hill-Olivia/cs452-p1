#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "../src/lab.h"


// TODO: Get shell program to print version w/ -v flag 
// parse args with getop
// exit after

int main(int argc, char *argv[]) // argc num of args + progname
{

  for (int i = 0; i < argc; i++) 
  {
      printf("Argument %d: %s\n", i, argv[i]);
  }
  // char *line = (char *)NULL;
  // char *version = getVersion();
  // line = readline("What is your name?");
  // printf("Hello %s! This is the starter template version: %s\n", line, version);
  // free(line);
  // free(version);

  return 0;
}