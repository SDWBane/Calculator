#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double exponent(double base, double exp);
double logarithm(double value);
double solveQuadratic(double a, double b, double c);
double sineRule(double a, double A, double b);
double cosineRule(double a, double b, double c);
double areaOfTriangle(double a, double b, double C);

const double PI = 3.14159265358979323846;

// Helper function to convert degrees to radians
double degreesToRadians(double degrees) {
    return degrees * (PI / 180.0);
}

int main() {
    int choice;
    double a, b, c, exp, angle, result;

    do {
        // Display menu
        cout << "Calculator Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exponent" << endl;
        cout << "6. Logarithm" << endl;
        cout << "7. Solve a quadratic equation" << endl;
        cout << "8. Sine rule" << endl;
        cout << "9. Cosine rule" << endl;
        cout << "10. Area of a triangle" << endl;
        cout << "0. Quit" << endl;
        cout << "Enter your choice (0-10): ";
        cin >> choice;

        switch(choice) {
            case 1: // Add
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << add(a, b) << endl;
                break;
            case 2: // Subtract
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << subtract(a, b) << endl;
                break;
            case 3: // Multiply
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << multiply(a, b) << endl;
                break;
            case 4: // Divide
                cout << "Enter two numbers (denominator cannot be zero): ";
                cin >> a >> b;
                if (b != 0) {
                    cout << "Result: " << divide(a, b) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5: // Exponent
                cout << "Enter base and exponent: ";
                cin >> a >> exp;
                cout << "Result: " << exponent(a, exp) << endl;
                break;
            case 6: // Logarithm
                cout << "Enter value (must be positive): ";
                cin >> a;
                if (a > 0) {
                    cout << "Result: " << logarithm(a) << endl;
                } else {
                    cout << "Error: Logarithm of non-positive number!" << endl;
                }
                break;
            case 7: // Solve a quadratic equation
                cout << "Enter coefficients a, b, and c: ";
                cin >> a >> b >> c;
                result = solveQuadratic(a, b, c);
                cout << "Roots: " << result << endl;
                break;
            case 8: // Sine rule
                cout << "Enter side a, angle A (in degrees), and side b: ";
                cin >> a >> angle >> b;
                result = sineRule(a, angle, b);
                cout << "Result: " << result << endl;
                break;
            case 9: // Cosine rule
                cout << "Enter sides a, b, and c: ";
                cin >> a >> b >> c;
                result = cosineRule(a, b, c);
                cout << "Result: " << result << endl;
                break;
            case 10: // Area of a triangle
                cout << "Enter sides a, b, and angle C (in degrees): ";
                cin >> a >> b >> angle;
                cout << "Area: " << areaOfTriangle(a, b, angle) << endl;
                break;
            case 0: // Quit
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 0 and 10." << endl;
                break;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}

// Function implementations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double exponent(double base, double exp) {
    return pow(base, exp);
}

double logarithm(double value) {
    return log10(value);
}

double solveQuadratic(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        return root1; // For simplicity, return one of the roots
    } else if (discriminant == 0) {
        return -b / (2*a);
    } else {
        cout << "No real roots." << endl;
        return 0;
    }
}

double sineRule(double a, double A, double b) {
    double A_rad = degreesToRadians(A);
    return (b * sin(A_rad)) / a;
}

double cosineRule(double a, double b, double c) {
    return acos((a*a + b*b - c*c) / (2*a*b)) * (180.0 / PI);
}

double areaOfTriangle(double a, double b, double C) {
    double C_rad = degreesToRadians(C);
    return 0.5 * a * b * sin(C_rad);
}
