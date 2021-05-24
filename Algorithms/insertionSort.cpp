#include <iostream>

int main(){
   int array[] = {3,4,5,64,0,2,1};
   int prev = array[0];
   for(int i=1;i<7;i++){
       int j = i-1;
      while (array[j] > array[i]){
          int temp = array[i-1];
          array[i-1] = array[i];
          array[i] = temp;
          j = j-1;
          
        }
    } 
}
