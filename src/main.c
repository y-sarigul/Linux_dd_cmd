#include "../inc/dd.h"
#include <stdio.h>
#include <stdlib.h>

static void ft_path(int argc, char **argv, t_dd **root) {

  int i;

  if (!(*root)) {
    (*root) = (t_dd *)malloc(sizeof(t_dd));
  }

  i = 0;
  while (i < argc) {
    if ((ft_strncmp("if=", *argv, 3)) == 0)
      (*root)->if_path = ft_strdup(*argv + 3);
    else if ((ft_strncmp("of=", *argv, 3)) == 0)
      (*root)->of_path = ft_strdup(*argv + 3);
    else if ((ft_strncmp("count=", *argv, 6)) == 0)
      (*root)->byte.count = ft_atoi(*argv + 6);
    else if ((ft_strncmp("bs=", *argv, 3)) == 0)
      (*root)->byte.bs = ft_atoi(*argv + 3);
    i++;
    argv++;
  }
  if (((*root)->byte.bs) == 0)
    (*root)->byte.bs = 512;
}

int main(int argc, char *argv[]) {
  t_dd *root;

  root = NULL;
  // gelen arugumanlari bir struct yapisi icerisine atiyorum
  ft_path(argc, argv, &root);
  // gelen argumanlarin eksikligini ve dogrulugunu burada kontrol ediyorum
  // ft_check_argv(root);
  printf("%s\n", root->if_path);
  printf("%s\n", root->of_path);
  printf("%d\n", root->byte.bs);
  printf("%d\n", root->byte.count);
}
