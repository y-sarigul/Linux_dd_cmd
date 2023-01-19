#include "../../inc/dd.h"

void ft_file_descriptor(t_dd **root) {
  if (!(*root))
    ft_exit_sys("root");
  if (((*root)->if_fd = open((*root)->if_path, O_RDONLY)) == -1)
    ft_exit_sys("if_fd");
  if (((*root)->of_fd =
           open((*root)->of_path, O_RDWR | O_CREAT | O_TRUNC, 0766)) == -1)
    ft_exit_sys("of_fd");
}
