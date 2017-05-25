#include<stdio.h>
#include<string.h>

int main(){
    printf("%d\n", strcmp("abc", "abc") || strcmp("abc", "aa"));
    printf("%d\n", strcmp("abc", "abc") || strcmp("aa", "abc"));

    return 0;
}

