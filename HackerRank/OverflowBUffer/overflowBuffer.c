#include <stdio.h>
#include <string.h>
void copy_string(char *dest, char *src) 
{
  int buffer_size = 10;
  int src_len = strlen(src);
  if (src_len > buffer_size - 1) {
    src_len = buffer_size - 1;
  }
memcpy(dest, src, src_len);
dest[src_len] = '\0';
}

int main() {
  char dest[10];
  char *src = "Una Cadena muy Larga";
  copy_string(dest, src);
  printf("Cadena destino: %s\n", dest);
  return 0;
}