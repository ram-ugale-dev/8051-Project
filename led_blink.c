#include <reg51.h>  // Header file for 8051 / AT89C51 registers

// Function to generate a software delay
void delay(unsigned int time) {
    unsigned int i, j;
    for (i = 0; i < time; i++) {
        for (j = 0; j < 1275; j++) {
            // Empty loop for delay (calibrated for ~11.0592 MHz crystal)
        }
    }
}
 void main(void) {
    while (1) {
        P2 = 0x00;        // Set all pins of Port 2 to LOW (LED ON)
        delay(100);       // Wait for 500 ms
        P2 = 0xFF;        // Set all pins of Port 2 to HIGH (LED OFF)
        delay(100);       // Wait for 500 ms
    }
}
