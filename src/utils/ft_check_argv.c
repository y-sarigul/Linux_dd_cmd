#include "../../inc/dd.h"

void ft_check_argv(const t_dd *root) {
  if (!root) {
    ft_exit_sys("root");
  } else if (((root->if_path == NULL) || (root->if_path[0] == '\0'))) {
    ft_exit_sys("if");
  } else if ((access(root->if_path, R_OK) == -1)) {
    ft_exit_sys("if");
  } else if ((root->of_path == NULL) || (root->of_path[0] == '\0')) {
    ft_exit_sys("of");
  }
}
