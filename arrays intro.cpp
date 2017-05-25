//HackerRank
//https://www.hackerrank.com/challenges/arrays-introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int arr[n];
    int temp = 0;
    
    for(int i = 0; i < n; i++){
       cin >> temp;
       //cout << temp;
       arr[i] = temp;
       //cout << arr[i];
    }
    
    int counter = n;
    for(int x = 0; x < n; x++){
       
        cout << arr[counter-1] << " ";
        counter = counter - 1;
    }
    
    return 0;
}