#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

void ls(const char *working_dir);

int main() {
  ls( "/home/penglx");
}
// Takes a string as input e.g ls("/home/user");
void ls(const char *working_dir) {
  DIR *dir = opendir(working_dir);
    if (dir == NULL) {
      perror("Unable to open directory");
      return;
    }
    
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
      if (entry->d_name[0] != '.' ) {
        printf("%s\n", entry->d_name);
      }
    }
    
  closedir(dir);
}

