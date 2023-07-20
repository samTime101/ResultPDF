#include <stdio.h>
#include "./pdf.h"

struct record
  {
  char name[20],school[40];
  
  }data;

int main() {

  printf("Enter school name:");
  //doesnot read more than 9 characters , yep much safe
  scanf(" %39[^\n]", data.school);
  
  printf("Enter name:");
  //doesnot read more than 9 characters , yep much safe
  scanf(" %19[^\n]", data.name);
  
  pdf(data.name,data.school);

  
}
