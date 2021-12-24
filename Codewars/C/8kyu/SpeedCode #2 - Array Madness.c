#include <stdbool.h>
#include <stddef.h>
#include <math.h>

bool array_madness(size_t n1, const int arr1[n1], size_t n2, const int arr2[n2]) {
  int sum1 = 0, sum2 = 0;
  for(size_t i = 0; i < n1; i++){
    sum1 += pow(arr1[i], 2);
  }
  for(size_t j = 0; j < n2; j++){
    sum2 += pow(arr2[j], 3);
  }
  if(sum1 > sum2)
    return true;
  else
    return false;
}
