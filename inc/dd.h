#ifndef DD_H
#define DD_H

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_byte {
  // count kac kere donecini belirtiriz yani count * bs = kadar okur ve yazar
  // eger count 0'sa tum dosyayi kopyala
  int count;
  // kac byte kac byte kopyalacayacagini belirtir bs
  // default olarak 512
  int bs;
} t_byte;

typedef struct s_dd {
  int if_fd;
  int of_fd;
  char *if_path;
  char *of_path;
  t_byte byte;
} t_dd;

// *******UTILS*******
void ft_check_argv(const t_dd *root);
void ft_exit_sys(const char *msg);
void ft_file_descriptor(t_dd *root);
void ft_read_and_write(const t_dd *root);

#endif // !DD_H
