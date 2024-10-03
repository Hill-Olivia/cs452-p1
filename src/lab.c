#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include "lab.h"

// char *getVersion(void)
// {
//   char *version = (char *)malloc(MAX_VERSION_STRING);
//   snprintf(version, MAX_VERSION_STRING, "%d.%d", lab_VERSION_MAJOR, lab_VERSION_MINOR);
//   return version;
// }

// int segfault(void)
// {
//   // add volatile because clang will optimize out the segfault
//   volatile int *foo = NULL;
//   int bar = *foo;
//   return bar;
// }

// void outOfBounds(void)
// {
//   int arr[5] = {0, 1, 2, 3, 4};
//   int i = 0;
//   for (i = 0; i < 6; i++)
//     {
//       arr[i] = i;
//     }
//   UNUSED(arr);
// }

char *get_prompt(const char *env)
{
    UNUSED(NULL);
    return '0';
}

int change_dir(char **dir)
{
    UNUSED(NULL);
    return 1;
}

char **cmd_parse(char const *line)
{
    UNUSED(NULL);
    return NULL;
}

void cmd_free(char ** line)
{
    UNUSED(NULL);
}

char *trim_white(char *line)
{
    UNUSED(NULL);
    return '0';
}

bool do_builtin(struct shell *sh, char **argv)
{
    UNUSED(NULL);
    return false;
}

void sh_init(struct shell *sh)
{
    UNUSED(NULL);
}

void sh_destroy(struct shell *sh)
{
    UNUSED(NULL);
}

void parse_args(int argc, char **argv)
{
    UNUSED(NULL);
}