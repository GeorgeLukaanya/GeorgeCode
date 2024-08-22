#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Define the Byte ADT (8-bit signed integer)
typedef struct {
    int8_t value; // Stores the byte value (8-bit signed integer)
} Byte;

// Function to create a new Byte
Byte* newByte(int8_t value) {
    // Ensure that the value is within the range of a byte (-128 to 127)
    if (value < -128 || value > 127) {
        printf("Error: Value out of byte range (-128 to 127)\n");
        return NULL;
    }
    
    // Allocate memory for a new Byte object
    Byte* byteObj = (Byte*)malloc(sizeof(Byte));
    
    // Initialize the Byte object with the given value
    byteObj->value = value;
    return byteObj;
}

// Function to set the value of a Byte
void setByteValue(Byte* byteObj, int8_t value) {
    if (value < -128 || value > 127) {
        printf("Error: Value out of byte range (-128 to 127)\n");
        return;
    }
    
    // Set the byte's value
    byteObj->value = value;
}

// Function to get the value of a Byte
int8_t getByteValue(Byte* byteObj) {
    return byteObj->value;
}

// Function to display the value of a Byte
void printByte(Byte* byteObj) {
    printf("Byte value: %d\n", byteObj->value);
}

// Clean up memory for the Byte object
void deleteByte(Byte* byteObj) {
    free(byteObj);
}

int main() {
    // Create a new Byte object with a value of 100
    Byte* myByte = newByte(100);
    if (myByte != NULL) {
        printByte(myByte);  // Output: Byte value: 100

        // Modify the value of the Byte
        setByteValue(myByte, -50);
        printByte(myByte);  // Output: Byte value: -50

        // Get the value of the Byte
        int8_t byteValue = getByteValue(myByte);
        printf("Retrieved byte value: %d\n", byteValue);  // Output: Retrieved byte value: -50

        // Delete the Byte object
        deleteByte(myByte);
    }

    return 0;
}
