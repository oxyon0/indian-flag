#include <stdio.h>

void printStripe(char color) {
    for (int i = 0; i < 35; i++) {
        printf("%c", color);
    }
    printf("\n");
}

void printAshokaChakraLine() {
    // Ashoka Chakra will be represented in the center of the middle stripe
    for (int i = 0; i < 13; i++) {
        printf(" ");  // Left padding
    }
    printf(" OOOO "); // Representation of the Chakra
    printf("\n");
}

int main() {
    // Print the top saffron stripe
    for (int i = 0; i < 4; i++) {
        printStripe('#');  // Saffron
    }

    // Print the middle white stripe with Ashoka Chakra
    for (int i = 0; i < 2; i++) {
        printStripe(' ');  // White
    }
    printAshokaChakraLine();  // Chakra in the center
    for (int i = 0; i < 2; i++) {
        printStripe(' ');  // White
    }

    // Print the bottom green stripe
    for (int i = 0; i < 4; i++) {
        printStripe('*');  // Green
    }

    return 0;
}
