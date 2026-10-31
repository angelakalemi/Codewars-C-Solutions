#include <stdbool.h>
#include <ctype.h>
​
bool is_isogram(const char *word)
{
  int j=0;
  int array[26];
  int plithos[26];
  char k='a';
  int metritis=0;
  int counter=0;
  for (int i=0;i<26;i++){
    array[i]=k;
    k++;
    plithos[i]=0;
  }
  while (word[j]!='\0'){
    if (tolower(word[j])>='a' && tolower(word[j])<='z'){
      for (int i=0;i<26;i++){
        if(tolower(word[j])==array[i]){
          plithos[i]+=1;
        }
      }
    }
    j++;
  }
  int max=plithos[0];
  for(int i=0;i<26;i++){
    if(plithos[i]>=max){
      max=plithos[i]; 
    }
    if(plithos[i]==0){
      metritis+=1;
    }
  }
   for(int i=0;i<26;i++){
     if(plithos[i]==max){
       counter++;
     }
   }
    if (counter+metritis==26){
      return true;
    }
     
    return false;
}