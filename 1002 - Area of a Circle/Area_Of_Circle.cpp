#include <iostream>
#include <iomanip>  
double calculateAreaOfCircle(double R) {
    const double PI = 3.14159;
    return PI * R * R;
}

int main() {
    double R;
    std::cin >> R; // Input the value of R
    
    // Calculate the area
    double A = calculateAreaOfCircle(R);

    // Output the result with four decimal places
    std::cout << "A=" << std::fixed << std::setprecision(4) << A << std::endl;

    return 0;
}