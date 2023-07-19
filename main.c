#include "./pdf.h"
#include <stdio.h>

int main() {

  char name[10];
  printf("Enter name:");
  //doesnot read more than 9 characters , yep much safe
  scanf("%9s", name);
  pdf(name);
}
