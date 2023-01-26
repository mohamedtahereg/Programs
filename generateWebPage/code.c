#include <stdio.h>
char x1[] = "<html><head><title>";
char x2[] = "</title></head><body>";
char x3[] = "</body></html>";
int main() {
  FILE *out = fopen("index.html", "w");
  char title[10], body[400];
  printf("Enter website title: ");
  scanf("%s", title);
  printf("Enter the body: ");
  scanf("\n%[^\n]", body);
  fprintf(out, "%s%s%s%s%s", x1, title, x2, body, x3);
  return 0;
}
