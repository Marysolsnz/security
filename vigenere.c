//Vigenere cipher encryption and decryption program

#include <stdio.h>
#include <string.h>

void encrypt(char *key, char *plain_text){
  int j;
  int i = 0;
  char keyword[strlen(plain_text)];

  while (i < strlen(plain_text)){
    for(j = 0; j < strlen(key); j++){
      keyword[i] = key[j];
      i++;
    }
  }

  for(i = 0; i < strlen(plain_text); i++){
    int change = ((plain_text[i] - 97) + (keyword[i] - 97)) % 26;
    printf("%c", change + 97);
  }
  printf("\n");
}

void decrypt(char *key, char *plain_text){
  int j;
  int i = 0;
  char keyword[strlen(plain_text)];

  while (i < strlen(plain_text)){
    for(j = 0; j < strlen(key); j++){
      keyword[i] = key[j];
      i++;
    }
  }

  for(i = 0; i < strlen(plain_text); i++){
    int change = ((plain_text[i] - 97) + (26 - (keyword[i] - 97))) % 26;
    printf("%c", change + 97);
  }
  printf("\n");
}


int main(int argc, char **argv){
  char *enc = strdup("encrypt");
  if(strcmp(argv[3], enc) == 0){
    encrypt(argv[1], argv[2]);
  }
  else{
    decrypt(argv[1], argv[2]);
  }
  return 0;
}
