#include "../../inc/dd.h"
#include <stdio.h>
#include <stdlib.h>

void ft_check_argv(const t_dd *root) {
  if (!root) {
    perror("root");
    exit(EXIT_FAILURE);
  } else if ((root->if_path == NULL) || (root->if_path[0] == '\0')) {
    perror("if");
    exit(EXIT_FAILURE);
  } else if ((root->of_path == NULL) || (root->of_path[0] == '\0')) {
    perror("of");
    exit(EXIT_FAILURE);
  }
}
