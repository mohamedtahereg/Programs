
#include <stdio.h>

int main() {

  char username[100],domain[100];
  printf("Email: ");
  scanf("%[^@]",username);
  scanf("%[^\n]",domain);
  printf("%s\n",username);
  printf("%s",domain);

  return 0;
}
