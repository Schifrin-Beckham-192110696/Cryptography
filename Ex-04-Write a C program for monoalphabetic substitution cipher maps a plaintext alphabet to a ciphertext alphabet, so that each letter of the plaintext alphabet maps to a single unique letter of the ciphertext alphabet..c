#include <stdio.h>
#include <string.h>
char alpha[27][3] = {
    { 'a', 'z' }, { 'b', 'y' }, { 'c', 'x' }, { 'd', 'w' }, { 'e', 'v' },
    { 'f', 'u' }, { 'g', 't' }, { 'h', 's' }, { 'i', 'r' }, { 'j', 'q' },
    { 'k', 'p' }, { 'l', 'o' }, { 'm', 'n' }, { 'n', 'm' }, { 'o', 'l' },
    { 'p', 'k' }, { 'q', 'j' }, { 'r', 'i' }, { 's', 'h' }, { 't', 'g' },
    { 'u', 'f' }, { 'v', 'e' }, { 'w', 'd' }, { 'x', 'c' }, { 'y', 'b' },
    { 'z', 'a' }
};
char monoalphabetic(char a);
char monoalphabetic_decrypt(char a);

int main() {
    char str[10];
    printf("Enter the string: ");
    gets(str);
    char encrypted[10];
    char decrypted[10];
    for (int i = 0; str[i] != '\0'; i++) 
	{
        encrypted[i] = monoalphabetic(str[i]);
    }
    encrypted[strlen(str)] = '\0';

    for (int i = 0; encrypted[i] != '\0'; i++) {
        decrypted[i] = monoalphabetic_decrypt(encrypted[i]);
    }
    decrypted[strlen(encrypted)] = '\0';
    printf("Cipher Text: %s\n", encrypted);
    printf("Decrypted Text: %s\n", decrypted);
    return 0;
}

char monoalphabetic(char a) {
    int i;
    for (i = 0; i < 27; i++) {
        if (a == alpha[i][0]) {
            return alpha[i][1];
        }
    }
    return a;
}

char monoalphabetic_decrypt(char a) {
    int i;
    for (i = 0; i < 27; i++) {
        if (a == alpha[i][1]) {
            return alpha[i][0];
        }
    }
    return a;
}
