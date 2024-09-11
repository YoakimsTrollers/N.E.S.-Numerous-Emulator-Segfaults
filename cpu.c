#include <stdint.h>

// Struct for the registers (2A03 processor)
typedef struct {
    uint16_t PC;      //Program Counter
    uint8_t SP;       // Stack Pointer  (Where to initialise ?)
    uint8_t A;        // Accumulator Register
    uint8_t X;        // X Register
    uint8_t Y;        // Y Register
    uint8_t P;   // Processor Status Register (Flags: negative, overflow, etc.)
    uint8_t memory[0x10000]; // (probably need to make a function that handles different parts)
} CPU_registers;
//Status register layout
#define FLAG_CARRY       0b00000001  
#define FLAG_ZERO        0b00000010   
#define FLAG_INTERRUPT   0b00000100   
#define FLAG_DECIMAL     0b00001000    
#define FLAG_BREAK       0b00010000   
#define FLAG_OVERFLOW    0b01000000    
#define FLAG_NEGATIVE    0b10000000    