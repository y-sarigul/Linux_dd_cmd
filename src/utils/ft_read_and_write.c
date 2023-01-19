#include "../../inc/dd.h"

void ft_read_and_write(const t_dd *root) {
  char *buff;
  int rd_byte;

  buff = (char *)malloc(sizeof(char) * (root->byte.bs + 1));
  while ((rd_byte = read(root->if_fd, buff, root->byte.bs)) != 0) {
    buff = (char *)malloc(sizeof(char) * (root->byte.bs + 1));
    write(root->of_fd, buff, rd_byte);
  }
}
