//HackerRank
//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    if (n >= 1 && n <= 9){
        switch(n) {
          case 1 :
             cout << "one" << endl;
            break;
          case 2 :
             cout << "two" << endl;
            break;
          case 3 :
             cout << "three" << endl;
            break;
          case 4 :
             cout << "four" << endl; 
            break;
          case 5 :
             cout << "five" << endl;
            break;
          case 6 :
             cout << "six" << endl; 
            break;
          case 7 :
             cout << "seven" << endl; 
            break;
          case 8 :
             cout << "eight" << endl; 
            break;
          case 9 :
             cout << "nine" << endl;  
            break;
    }
    }
        else if(n > 9){
            cout << "Greater than 9";
            
        }
    // your code goes here
    return 0;
}
