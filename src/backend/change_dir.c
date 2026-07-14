#include <unistd.h>
void cd(const char*path);

int main() {
  cd("..");
  return 0;
}



void cd(const char*path) {
  chdir(path);
}

