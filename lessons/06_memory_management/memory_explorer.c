/* 🧙‍♂️ Memory Magic: A Journey Through Computer Memory!
 * Just as quantum physicists explore the bizarre world of particles,
 * we'll explore the fascinating realm of computer memory!
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Our quantum-like observation structure
typedef struct MemoryObservation {
    void* address;      // Where in memory's vast space
    size_t size;        // How much space it occupies
    char* description;  // What we've discovered
} MemoryObservation;

// Function to observe memory state (like a quantum measurement!)
void observeMemory(void* ptr, size_t size, const char* desc) {
    printf("\n🔍 Memory Observation:\n");
    printf("Address: %p\n", ptr);
    printf("Size: %zu bytes\n", size);
    printf("Description: %s\n", desc);
    
    // Let's peek at the memory content (like particle properties!)
    unsigned char* bytes = (unsigned char*)ptr;
    printf("First 8 bytes: ");
    for(size_t i = 0; i < (size < 8 ? size : 8); i++) {
        printf("%02X ", bytes[i]);
    }
    printf("\n");
}

// Function to demonstrate stack memory (like quantum ground states!)
void exploreStackMemory() {
    printf("\n🏰 Exploring Stack Memory (The Quantum Ground State!)\n");
    
    int localVar = 42;                    // A quantum number!
    double waveFunction = 3.14159;        // Our probability amplitude!
    char message[] = "Hello, Memory!";    // A quantum message!
    
    observeMemory(&localVar, sizeof(int), "Integer on stack");
    observeMemory(&waveFunction, sizeof(double), "Double on stack");
    observeMemory(message, strlen(message) + 1, "String on stack");
}

// Function to explore heap memory (like quantum excited states!)
void exploreHeapMemory() {
    printf("\n🚀 Exploring Heap Memory (The Quantum Excited State!)\n");
    
    // Allocate memory (like creating a quantum superposition!)
    int* dynamicNumber = (int*)malloc(sizeof(int));
    *dynamicNumber = 137; // A magical quantum constant!
    
    char* dynamicString = (char*)malloc(20);
    strcpy(dynamicString, "Quantum String!");
    
    // Observe our quantum allocations
    observeMemory(dynamicNumber, sizeof(int), "Dynamic integer");
    observeMemory(dynamicString, strlen(dynamicString) + 1, "Dynamic string");
    
    // Clean up our quantum states
    free(dynamicNumber);
    free(dynamicString);
}

// Function to demonstrate memory alignment (like quantum spin states!)
void exploreMemoryAlignment() {
    printf("\n⚛️ Exploring Memory Alignment (Quantum Spin States!)\n");
    
    // Create a structure with different types (like different spin particles!)
    struct ParticleStates {
        char spin_half;     // 1 byte
        int spin_one;       // 4 bytes
        double spin_two;    // 8 bytes
    } particle;
    
    // Observe alignments (like measuring spin states!)
    printf("Addresses of structure members:\n");
    printf("char:   %p (offset: %lu)\n", &particle.spin_half, 
           (unsigned long)((void*)&particle.spin_half - (void*)&particle));
    printf("int:    %p (offset: %lu)\n", &particle.spin_one,
           (unsigned long)((void*)&particle.spin_one - (void*)&particle));
    printf("double: %p (offset: %lu)\n", &particle.spin_two,
           (unsigned long)((void*)&particle.spin_two - (void*)&particle));
}

// Function to demonstrate memory fragmentation (like quantum decoherence!)
void exploreMemoryFragmentation() {
    printf("\n🌌 Exploring Memory Fragmentation (Quantum Decoherence!)\n");
    
    void* pointers[5];  // Our quantum ensemble
    size_t sizes[] = {100, 200, 300, 400, 500};  // Different quantum states
    
    // Allocate memory blocks (create quantum states)
    for(int i = 0; i < 5; i++) {
        pointers[i] = malloc(sizes[i]);
        printf("Allocated %zu bytes at %p\n", sizes[i], pointers[i]);
    }
    
    // Free some blocks (quantum collapse!)
    printf("\nFreeing alternate blocks (quantum collapse!):\n");
    for(int i = 0; i < 5; i += 2) {
        printf("Freeing block at %p\n", pointers[i]);
        free(pointers[i]);
        pointers[i] = NULL;
    }
    
    // Try to allocate a large block (quantum recombination!)
    printf("\nAttempting to allocate a large block (quantum recombination!):\n");
    void* largeBlock = malloc(1000);
    printf("Large block allocated at: %p\n", largeBlock);
    free(largeBlock);
    
    // Clean up remaining blocks
    for(int i = 0; i < 5; i++) {
        if(pointers[i] != NULL) {
            free(pointers[i]);
        }
    }
}

int main() {
    printf("🌟 Welcome to Memory Magic: Where Bits Meet Quantum Bits! 🌟\n");
    printf("=========================================================\n");
    
    // Explore different memory realms (like quantum realms!)
    exploreStackMemory();
    exploreHeapMemory();
    exploreMemoryAlignment();
    exploreMemoryFragmentation();
    
    printf("\n🎭 Memory Magic Show Complete! 🎭\n");
    return 0;
}
