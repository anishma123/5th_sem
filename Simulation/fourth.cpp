#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate random x and y coordinates between -1 and 1
void generate_random_point(double &x, double &y) {
    x = (double) rand() / RAND_MAX * 2 - 1;  
    y = (double) rand() / RAND_MAX * 2 - 1;
}

int main() {
    int circlepoints = 0, iteration;
    double x, y;

    std::cout << "Enter the number of iterations: ";
    std::cin >> iteration;

    // Seed the random number generator
    srand(time(0));

    // Monte Carlo simulation
    for (int i = 0; i < iteration; i++) {
        generate_random_point(x, y);

        if (x * x + y * y <= 1) {
            circlepoints++;
        }
    }

    double pi_estimate = 4.0 * circlepoints / iteration;

    std::cout << "Estimated value of pi: " << pi_estimate << std::endl;

    return 0;
}