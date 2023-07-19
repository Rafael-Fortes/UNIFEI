#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int countA=0;
    int length;

    scanf("%s", string);

    length = strlen(string);

    for (int i = 0; i < length; i++) {
        if (string[i] == 'a')
            countA++;
    }

    int maxLength;
    if (countA > length / 2)
        maxLength = length;
    else
        maxLength = countA * 2 - 1; 

    printf("%d", maxLength);

    return 0;
}