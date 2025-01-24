#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    if(a>='a' && a<='z') {
        printf("Consonant");
    }
    else if(a>='1' && a<='100') {
        printf("Digit");
    }
    else if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
        printf("Vowel");
    }
    else {
        printf("Special Character");
    }
    return 0;
}