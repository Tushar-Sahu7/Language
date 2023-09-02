#include <stdio.h>
// void printArray(int *ptr, int n){
//   for(int i =0 ; i<n;i++){
//     printf("The value ofelement %d is %d\n",i+1 , *(ptr+i));
//   }
// }
void printArray(int ptr[], int n){
  for(int i =0 ; i<n;i++){
    printf("The value ofelement %d is %d\n",i+1 , ptr[i]);
  }
}
int main(void) {
  int arr[] = {1,2,3543,34,3,645,23};
  printArray(arr, 7);
  return 0;
}