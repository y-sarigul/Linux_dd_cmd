#include "../inc/dd.h"
#include <stdio.h>
#include <stdlib.h>

static char *ft_find_path(char *path, char **argv, size_t len) {

  while (ft_strncmp(path, *argv, len))
    argv++;
  return (*argv + len);
}

static void ft_path(int argc, char **argv, t_dd **root) {

  if (!(*root))
    (*root) = (t_dd *)malloc(sizeof(t_dd));

  while (argc) {
    (*root)->if_path = ft_strdup(ft_find_path("if=", argv, 3));
    (*root)->of_path = ft_strdup(ft_find_path("of=", argv, 3));
    argc--;
  }
}

int main(int argc, char *argv[]) {
  t_dd *root;

  root = NULL;
  ft_path(argc, argv, &root);
  ft_check_argv(root);
  printf("%s\n", root->if_path);
  printf("%s\n", root->of_path);
}
