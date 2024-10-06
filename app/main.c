#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "../src/lab.h"


// TODO: Get shell program to print version w/ -v flag 
// parse args with getop
// exit after

char* getPrompt()
{
  char *prompt = getenv("MY_PROMPT");
  if (prompt != NULL)
  {
    return prompt;
  }
    free(prompt);
    return "shelly $ ";
}

int main(int argc, char *argv[]) // argc num of args + progname
{
  // struct shell active_shell;
  // active_shell.
  bool session = true;

  // Parse arguments
  int c;
  char *version;
  while ((c = getopt (argc, argv, "v::")) != -1) // adapted from https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html
  {
      switch (c)
      {
      case 'v':
        version = getVersion();
        printf("%s\n", version); 
        free(version); 
        session = false; 
        break;
      case 'b':
        break;
      case 'c':
        break;
      case '?':
      default:
        abort ();
      }
  }

  if (session)
  {
    char *input;
    char *prompt = getPrompt();

    while ((input=readline(prompt)))
    {
      //input = readline(shell_prompt);
      if (!input) break;
      add_history(input);
      printf("%s\n", input);
      // session = false;
      if (strcmp(input, "exit") == 0) 
      {
        free(input);
        break;
      }
      free(input);
    }
  }
  // free(session);
  // Loop through user commands while program active

  // char *line = (char *)NULL;
  // char *version = getVersion();
  // line = readline("What is your name?");
  // printf("Hello %s! This is the starter template version: %s\n", line, version);
  // free(line);
  // free(version);

  return 0;
}