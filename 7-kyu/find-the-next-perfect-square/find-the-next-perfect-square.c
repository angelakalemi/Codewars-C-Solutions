#include <math.h>
​
long long findNextSquare(long long sq)
{
  long root=sqrt(sq);
  if(root*root==sq){
    return (root+1)*(root+1);
  }else{
    return -1;
  }
}