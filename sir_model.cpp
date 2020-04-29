#include <iostream>
#include <iomanip>
using namespace std;

// Iterations for Euler's method
const int DAYS = 200, ITER = 10000;

// Population size
const int POP = 2000;

// Model parameters
// Beta = infection rate
// Gamma = removal rate
const double beta = 0.42, gamma = 0.25;

// Compartments
double S[DAYS + 1], I[DAYS + 1], R[DAYS + 1];

int main() {
    // Initial conditions
    S[0] = 1 - 1.0 / POP, I[0] = 1.0 / POP, R[0] = 0;
    
    // Run simulation
    for (int i = 0; i < DAYS; ++i) {
        double S_[ITER + 1], I_[ITER + 1], R_[ITER + 1];
        
        S_[0] = S[i], I_[0] = I[i], R_[0] = R[i];
        
        // Euler's method
        for (int j = 0; j < ITER; ++j) {
            S_[j+1] = S_[j] + (-beta * S_[j] * I_[j]) / ITER;
            I_[j+1] = I_[j] + (beta * S_[j] * I_[j] - gamma * I_[j]) / ITER;
            R_[j+1] = R_[j] + (gamma * I_[j]) / ITER;
        }
        
        S[i + 1] = S_[ITER], I[i + 1] = I_[ITER], R[i + 1] = R_[ITER];
    }
    
    // Print results
    cout << "| DAY | SUSCEPTIBLE |  INFECTIOUS |   RECOVERED |\n";
    cout << "-------------------------------------------------\n";
    for (int i = 0; i < DAYS; ++i) {
        cout << "| " << setw(3) << i << " | "; // Day
        cout << setw(11) << (int)(POP * S[i] + .5) << " | "; // Suspectible
        cout << setw(11) << (int)(POP * I[i] + .5) << " | "; // Infectious
        cout << setw(11) << (int)(POP * R[i] + .5) << " |\n"; // Recovered
    }
}