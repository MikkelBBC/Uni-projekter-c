#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

// Struktur til at repræsentere en cirkulær buffer
typedef struct {
    int* data;
    int size;
    int write_pos;
} CircularBuffer;

// Funktion til at oprette en ny cirkulær buffer
CircularBuffer* cb_create(int size);

// Funktion til at frigøre en cirkulær buffer
void cb_destroy(CircularBuffer* cb);

// Funktion til at tilføje en værdi til bufferen
void cb_add(CircularBuffer* cb, int value);

// Funktion til at udskrive bufferens indhold
void cb_print(CircularBuffer* cb);

// Funktion til at initialisere bufferen med 0'er
void cb_init(CircularBuffer* cb);

#endif // CIRCULAR_BUFFER_H