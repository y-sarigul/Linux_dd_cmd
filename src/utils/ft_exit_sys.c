#include "../../inc/dd.h"

void ft_exit_sys(const char *msg) {
  perror(msg);
  exit(EXIT_FAILURE);
}
