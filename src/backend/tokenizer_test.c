#include <stdio.h>
#include <string.h>
int main() {
  const char *tokens[512];
  char command[] = "ls -la";
  cmd_tokenize(command, tokens);
  printf("%s", tokens[0]);
  return 0;
}

void cmd_tokenize(char* command, const char *list[]){
  /*
  tokenizer function
  first parameter is the command that is to be tokenized
  second parameter is the array in which all the tokens are to be stored

  */
  char *tokenizerptr;
  int index = 0;
  tokenizerptr = strtok(command, " ");

  while (tokenizerptr != NULL) {
    list[index] = tokenizerptr;
    tokenizerptr = strtok(NULL, " ");
    index = index +1;
  }
  list[index] = NULL; 
}

