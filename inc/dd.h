#ifndef DD_H
#define DD_H

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_dd {
  int in_fd;
  int out_fd;
  char *if_path;
  char *of_path;
} t_dd;

// *******UTILS*******
void ft_check_argv(const t_dd *root);
void ft_exit_sys(const char *msg);

#endif // !DD_H
