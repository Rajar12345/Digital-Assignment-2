#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int len = strlen(s);
    printf("Length of the string is: %d\n", len);

    int freq[26] = {0};
    for(int i=0; i<len; i++) {
        freq[s[i] - 'A']++;
    }
    printf("Word frequency is: ");
    for(int i=0; i<26; i++) {
        if(freq[i] != 0) {
            printf("%d ", freq[i]);
        }
    }
    printf("\n");

    char *p, *q;
    p = s;
    while(*p != '\0') {
        q = p + 1;
        while(*q != '\0') {
            if(*p == *q) {
                printf("First repeated character is: %c\n", *p);
                goto nrep;
            }
            q++;
        }
        p++;
    }
    printf("No repeated characters found in the string.\n");
    nrep:
    p = s;
    while(*p != '\0') {
        q = p + 1;
        int f = 0;
        while(*q != '\0') {
            if(*p == *q) {
                f = 1;
                break;
            }
            q++;
        }
        if(f == 0) {
            printf("First non-repeated character is: %c\n", *p);
            break;
        }
        p++;
    }

    return 0;
}
