// Problem : https://www.hackerrank.com/challenges/pangrams

#include <stdio.h>
#include <ctype.h> // header for tolower()
#include <stdlib.h>
#include <string.h>

int main(){
    char x[100000];
    int check[40];
    memset(check, 0, sizeof(check));
    int i;
    gets(x);
    for (i = 0; x[i]; i++) {
        int index = tolower(x[i])%97;
        // printf("%d\n",index);
        check[index] = 1;
    }
    
    for (i = 0; i < 26 ; i++) {
        if (check[i] == 0) {
            break;
        }
    }
    // printf("%d",i);
    if(i == 26)
        printf("pangram\n");
    else printf("not pangram\n");
    return 0;
}
