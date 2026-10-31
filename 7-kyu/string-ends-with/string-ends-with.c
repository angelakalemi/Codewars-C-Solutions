#include <stdbool.h>
​
bool solution(const char *string, const char *ending)
{
  int i=0;
  int j=0;
  int counter=0;
  while(ending[j]!='\0'){
    j++;
  }
  while (string[i]!='\0'){
    i++;
  }
  if (j>i)return false;
  for(int k=0;k<j;k++){
    if(ending[k]==string[i-j+k] )counter++;
  }
  if(counter==j)return true;
  return false;
}