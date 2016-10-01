//Caesar cipher encryption and decryption program

#include <stdio.h>
#include <string.h>

void encrypt(int key, char * plain_text){
  int i;
  for(i = 0; i < strlen(plain_text); i++){
    int val = (int) plain_text[i];
    int change = ((val - 97) + key) % 26;
    printf("%c", change + 97);
  }
  printf("\n");
}

void decrypt(int key, char * plain_text){
  int i;
  key = 26 - key;
  for(i = 0; i < strlen(plain_text); i++){
    int val = (int) plain_text[i];
    int change = ((val - 97) + key) % 26;
    printf("%c", change + 97);
  }
  printf("\n");
}

int main(int argc, char **argv){
  char *enc = strdup("encrypt");
  if(strcmp(argv[3], enc) == 0){
    encrypt(atoi(argv[1]), argv[2]);
  }
  else{
    decrypt(atoi(argv[1]), argv[2]);
  }
  return 0;
}
