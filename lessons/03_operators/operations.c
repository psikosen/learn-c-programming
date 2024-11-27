#include <stdio.h>

/* Let's explore the magical world of C operators!
   Think of operators as special tools in your programming toolbox
   that help you manipulate and transform data. */

int main() {
    // Let's set up some variables for our experiments
    int cosmic_rays = 1000;
    int particle_count = 7;
    float decay_rate = 2.5;
    
    printf("🔬 Welcome to our C Operator Laboratory! 🧪\n\n");

    // Arithmetic Operations
    printf("Experiment #1: Basic Arithmetic\n");
    printf("------------------------------\n");
    printf("Initial cosmic rays: %d\n", cosmic_rays);
    printf("Particle count: %d\n", particle_count);
    
    // Division magic - notice what happens with integer division!
    int rays_per_particle = cosmic_rays / particle_count;  // Integer division
    float precise_rays = (float)cosmic_rays / particle_count;  // Float division
    
    printf("\n🎯 Integer division result: %d rays per particle\n", rays_per_particle);
    printf("🎯 Float division result: %.2f rays per particle\n", precise_rays);
    
    // Modulo - finding remainders
    int remaining_rays = cosmic_rays % particle_count;
    printf("🎯 Remaining rays: %d\n\n", remaining_rays);
    
    // Increment/Decrement magic
    printf("Experiment #2: Increment/Decrement\n");
    printf("--------------------------------\n");
    int count = 5;
    printf("Initial count: %d\n", count);
    printf("After count++: %d\n", count++);  // Post-increment
    printf("After ++count: %d\n", ++count);  // Pre-increment
    printf("After count--: %d\n", count--);  // Post-decrement
    printf("Final count: %d\n\n", count);
    
    // Compound assignment operators
    printf("Experiment #3: Compound Assignment\n");
    printf("--------------------------------\n");
    float energy_level = 100.0;
    printf("Initial energy: %.2f\n", energy_level);
    
    energy_level *= decay_rate;  // Multiply and assign
    printf("After decay: %.2f\n", energy_level);
    
    energy_level /= 2;  // Divide and assign
    printf("After half-life: %.2f\n", energy_level);
    
    // A fun finale - combining operations
    printf("\n🎆 Grand Finale: The Ultimate Formula 🎆\n");
    float final_result = (energy_level + cosmic_rays) / (particle_count * decay_rate);
    printf("Our combined calculation: %.2f\n", final_result);
    
    return 0;
}