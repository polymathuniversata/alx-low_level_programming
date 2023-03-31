#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
    srand(time(NULL));  // seed the random number generator with current time

    char password[PASSWORD_LENGTH+1];  // create a char array to hold the password

    // fill the password array with random characters
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % 94 + 33;  // generate a random ASCII character from 33 to 126
    }

    password[PASSWORD_LENGTH] = '\0';  // null-terminate the password string

    printf("Random password for program 101-crackme: %s\n", password);

    return 0;
}
