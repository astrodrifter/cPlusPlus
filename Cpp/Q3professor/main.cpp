#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

static const int size = 256;
void solve(const char * line){
    char a[size], b[size], op;
    bool first = true;
    const char *lp = line;
    char *ap = a, *bp = b;
    
    int i = 0;
    while(*lp){
        if (isdigit(*lp) && first){
            a[i] = &lp;
        }   
    }
    cout << a;
}
int main(void)
{
	char line[size];
    while(fgets(line, size, stdin) != NULL){
        //solve(line);
        //cout << line;
    }
	return 0;
}
