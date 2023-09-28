#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) == 1 && n) {
        string ret[n];  // declaration of array of string to store the resultant array of cards
        string s, foo;  // string s stores the name of card which will be again stored in ret array 
        int i, idx = 0, len;// idx deontes next vacant space or (idx-1)position denotes position in which card s should be placed
        for(i = 0; i < n; i++) {
            cin >> s >> foo;
            len = foo.length();
            while(len) {//it moves len vacant position from current vacant position that is idx and it reaches next vacant position
                if(ret[idx] == "")// if it is unoccupied only then it should counted
                    len--;
                idx++;
                if(idx >= n)    idx = 0;//cyclic nature
            }
            ret[(idx-1+n)%n] = s;// edge case if idx is 0 then idx -1 = -1 but it should be n-1
        }
        for(i = 0; i < n; i++) {
            if(i)   putchar(' ');
            cout << ret[i];
        }
        puts("");
    }
    return 0;
}
