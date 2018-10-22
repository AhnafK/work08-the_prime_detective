#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sieve(int target){
  int size = log(target)*target*1.15;
  char * numbers= calloc(size,sizeof(char));
  numbers[0] = 1;
  numbers[1] = 1;
  numbers[2] = 1;
  for(int x = 4; x < size; x+=2){
    numbers[x] = 1;
  }

  int pos = 1;
  
  for(int y = 3; y < size; y += 2){
    if(!(numbers[y])){
      y = 1;
      pos ++;
      
      for(int z = y; z < size; z += numbers[y]){
	if(!(numbers[z])){
	  numbers[z] = 1;
	}
      }
      
    }

    if(pos == target){
      return y;
    }
  }
  
  return 0;
}
