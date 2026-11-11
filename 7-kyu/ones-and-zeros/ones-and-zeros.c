#include <stddef.h>
#include <math.h>
​
unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
  int sum=0;
  for (int i = 0; i < count; i++){
    if(bits[i]==1)sum+=pow(2, count-i-1);
  }
  return sum;
}