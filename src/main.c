#include <stdio.h>
#include <string.h>

struct Option
{
  const char* longName;
  const char* shortName;
  const char* description;
};


int main(int argc, char* argv[]) {
  printf("Hello, world!\n");
  
  return 0;
}
