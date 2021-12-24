#include <stddef.h>

int positive_sum(const int *values, size_t count){
  int i, sum=0;
  for(i=0; count!=0 ;i++){
    if(*(values+i)>= 0)
      sum += *(values + i);
    --count;
  }
  return sum;
}
