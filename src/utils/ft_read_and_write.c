#include "../../inc/dd.h"
#include <stdio.h>

void ft_read_and_write(const t_dd *root) {
  char **buff;
  int c_tmp;
  int i;
  int rd_byte;

  c_tmp = 0;
  i = 0;
  rd_byte = 1;
  buff = (char **)malloc(sizeof(char *) * (root->byte.count));
  while ((c_tmp < root->byte.count) && (rd_byte != 0)) {
    buff[i] = (char *)malloc(sizeof(char) * ((root->byte.bs) + 1));
    rd_byte = read(root->if_fd, buff[i], root->byte.bs);
    if (rd_byte == -1)
      ft_exit_sys("read");
    buff[rd_byte + 1] = "\0";
    write(root->of_fd, buff[i], rd_byte);
    c_tmp++;
    i++;
  }
  buff[c_tmp] = 0;
}
