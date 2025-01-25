#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c", &a);
    if(a>='a' && a<='z') {
        switch (a) {
            case 'a' : printf("Vowel");
                       break;
            case 'e' : printf("Vowel");
                       break;
            case 'i' : printf("Vowel");
                       break;
            case 'o' : printf("Vowel");
                       break;
            case 'u' : printf("Vowel");
                       break;
            default : printf("Consonant");                                            
        }
    }
    else if(a>=1 && a<=1000) {
        printf("Digit");
    }
    else {
        printf("Special character");
    }
    return 0;
}