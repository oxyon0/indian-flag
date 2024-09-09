#include <stdio.h>

// ANSI escape codes for colors
#define RESET "\033[0m"
#define SAFFRON "\033[38;5;202m"  // Orange/Saffron
#define WHITE "\033[37m"           // White
#define GREEN "\033[32m"           // Green
#define BLUE "\033[34m"            // Blue (for Ashoka Chakra)

void printStripe(char color, const char* colorCode) {
    printf("%s", colorCode);  // Set color
    for (int i = 0; i < 35; i++) {
        printf("%c", color);
    }
    printf(RESET);  // Reset color
    printf("\n");
}

void printAshokaChakraLine() {
    // Print Ashoka Chakra line with white stripe
    printf(WHITE);
    for (int i = 0; i < 13; i++) {
        printf(" ");  // Left padding
    }
    printf(BLUE " OOOO " RESET); // Ashoka Chakra in blue
    printf(WHITE "\n");
}

int main() {
    // Print the top saffron stripe
    for (int i = 0; i < 4; i++) {
        printStripe('#', SAFFRON);  // Saffron
    }

    // Print the middle white stripe with Ashoka Chakra
    for (int i = 0; i < 2; i++) {
        printStripe(' ', WHITE);  // White
    }
    printAshokaChakraLine();  // Chakra in the center
    for (int i = 0; i < 2; i++) {
        printStripe(' ', WHITE);  // White
    }

    // Print the bottom green stripe
    for (int i = 0; i < 4; i++) {
        printStripe('*', GREEN);  // Green
    }

    return 0;
}
