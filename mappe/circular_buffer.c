#include <stdio.h>
#include <stdlib.h>
#include "circular_buffer.h"

// Opretter en ny cirkulær buffer
CircularBuffer* cb_create(int size) {
    CircularBuffer* cb = (CircularBuffer*)malloc(sizeof(CircularBuffer));
    if (cb == NULL) {
        return NULL;
    }
    
    cb->data = (int*)malloc(size * sizeof(int));
    if (cb->data == NULL) {
        free(cb);
        return NULL;
    }
    
    cb->size = size;
    cb->write_pos = 0;
    
    // Initialiser med 0'er
    cb_init(cb);
    
    return cb;
}

// Frigør en cirkulær buffer
void cb_destroy(CircularBuffer* cb) {
    if (cb != NULL) {
        if (cb->data != NULL) {
            free(cb->data);
        }
        free(cb);
    }
}

// Tilføjer en værdi til bufferen
void cb_add(CircularBuffer* cb, int value) {
    if (cb == NULL || cb->data == NULL) {
        return;
    }
    
    // Bruger pointer arithmetic i stedet for subscript operator
    *(cb->data + cb->write_pos) = value;
    
    // Cirkulær increment
    cb->write_pos = (cb->write_pos + 1) % cb->size;
}

// Udskriver bufferens indhold
void cb_print(CircularBuffer* cb) {
    if (cb == NULL || cb->data == NULL) {
        return;
    }
    
    for (int i = 0; i < cb->size; i++) {
        printf("%d ", *(cb->data + i));  // Bruger pointer arithmetic
    }
    printf("\n");
}

// Initialiserer bufferen med 0'er
void cb_init(CircularBuffer* cb) {
    if (cb == NULL || cb->data == NULL) {
        return;
    }
    
    for (int i = 0; i < cb->size; i++) {
        *(cb->data + i) = 0;
    }
}