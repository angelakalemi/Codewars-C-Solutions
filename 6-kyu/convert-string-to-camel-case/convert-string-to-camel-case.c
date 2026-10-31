//  do not allocate memory for the result
//  write to pre-allocated pointer *camel
​
void to_camel_case(const char *text, char *camel) {
  int j,i;
  i=0;
  j=0;
  while (text[j]!='\0'){
    if(text[j]=='_' || text[j]=='-'){
      if(text[j+1]>='A'&& text[j+1]<='Z'){
        camel[i]=text[j+1];
        i++;
        j+=2;
      }else if (text[j+1]>='a' && text[j+1]<='z'){
        camel[i]=text[j+1]-32;
        i++;
        j+=2;
      }        
    }else{
      camel[i]=text[j];
      i++;
      j++;
    }
  }
  camel[i]='\0';
​
}