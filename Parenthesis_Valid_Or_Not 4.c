#include <stdio.h>
#include <stdbool.h>

bool istrue(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            count++; 
        } 
        else if (s[i] == ')') {
            count--; 
        if (count < 0) {
            return false;
            }
        }
    }
    return count == 0;
}

int main() {
    char s[] = "()";
    if (istrue(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

