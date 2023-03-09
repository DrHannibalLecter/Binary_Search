#include <stdio.h>
#include <stdlib.h>

int main() {
    int* deck = malloc(sizeof(int) *1024);
    int n;
    scanf("%d", &n);
    int up = 0;
    for(; up < 1024; up++){
        scanf("%d", deck+up);
    }
    up += 2;
    int low = -1;
    int mid = (up+low)/2;
    printf("%d %d\n", mid, deck[mid-1]);
    while(deck[mid-1] != n){
        if (deck[mid-1] > n){
            up = mid+1;
        }
        else{
            low = mid-1;
        }
        mid = (up+low)/2;
        printf("%d %d\n", mid, deck[mid-1]);
    }
    free(deck);
}