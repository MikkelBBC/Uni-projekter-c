#include <stdio.h> //standerta bilotek som giver adgang printf scanf og getchar
#include <stdlib.h> //standard bibliotek der ka bruges med terminalen
#include "circular_buffer.h" // eget biblotek

//📋 Oversigt Dette program implementerer en interaktiv cirkulær buffer der kan modtage kommandolinje argumenter og læse bruger input fra terminalen.

int main(int argc, char* argv[]) { // arg for kommandolinje argumenter fx 5 * betyder værdien ligger et andet sted * ka holde mange tegn
    // Check om der er mindst 2 argumenter (program navn + buffer størrelse)
    if (argc < 2) {
        printf("Usage: %s <buffer_size> [initial_values...]\n", argv[0]);
        return 1;
    }

    // Læs buffer størrelse fra første argument
    int buffer_size = atoi(argv[1]);
    
    if (buffer_size <= 0 || buffer_size > 255) {
        printf("Buffer size must be between 1 and 255\n");
        return 1;
    }

    // Opret cirkulær buffer
    CircularBuffer* cb = cb_create(buffer_size);
    if (cb == NULL) {
        printf("Failed to create circular buffer\n");
        return 1;
    }

    // Tilføj initial værdier fra kommandolinjen
    for (int i = 2; i < argc; i++) {
        int value = atoi(argv[i]);
        cb_add(cb, value);
        cb_print(cb);
    }

    // Uendelig løkke til at læse nye værdier fra brugeren
    while (1) {
        printf("Enter next value: ");
        int next_value;
        int result = scanf("%d", &next_value);
        
        // Clear input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (result != 1) {
            printf("\nInvalid input. Exiting.\n");
            break;
        }
        cb_add(cb, next_value);
        cb_print(cb);
    }

    // Frigør cirkulær buffer
    cb_destroy(cb);

    return 0;
}