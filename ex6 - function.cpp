//HackerRank
//https://www.hackerrank.com/domains/cpp/cpp-introduction

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    
  int array[] = {a,b,c,d};
  int largest;
  int swap;
    
//My program finds the largest number by using bubble sort 
 for(int i=0;i<4;i++){
      
      for(int x=0;x<3;x++){
          if(array[x] > array[x+1]){
              swap = array[x];
              array[x] = array[x+1];
              array[x+1] = swap;
          }
      }
  }
    
    largest = array[3];
    return largest;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
