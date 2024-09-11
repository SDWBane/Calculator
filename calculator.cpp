#include <iostream>
#include <string>
#include <cmath>

int main(void) {
  int choice;
  double a;
  double b;
  double c;
  double d;
  double e;
  double angle_1;
  double angle_2;
  double side_1;
  double side_2;
  std::string choice2;


  std::cout << "Choose an operation -- Add (1) / Subtract (2) / Multiply (3) / Divide (4) / Exponent (5) / Logarithm (6) / Solve a quadratic (7) / Sine rule (8) / Cosine rule (9) / area of a triangle (10) / Quit (0): ";
  std::cin >> choice;
switch (choice) {
    case 0:{
     break;
    }
    case 1: {
  std::cout << "enter the first value: ";
    std::cin >> a;
    std::cout << "enter the second value: ";
    std::cin >> b;
    c = a + b;
    std::cout << "The answer is " << c;
  }
    case 2: {
    std::cout << "enter the first value: ";
    std::cin >> a;
    std::cout << "enter the second value: ";
    std::cin >> b;
    c = a - b;
    std::cout << "The answer is " << c; 
  }

    case 3: {
    std::cout << "enter the first value: ";
    std::cin >> a;
    std::cout << "enter the second value: ";
    std::cin >> b;
    c = a * b;
    std::cout << "The answer is " << c; 
  }

    case 4: {
    std::cout << "enter the first value: ";
    std::cin >> a;
    std::cout << "enter the second value: ";
    std::cin >> b;
    c = a / b;
    std::cout << "The answer is " << c;
  }

    case 5: {
    std::cout << "enter the base(for e copy 2.718281828459045): ";
    std::cin >> a;
    std::cout << "enter the exponent: ";
    std::cin >> b;
    c = pow( a ,b );
    std::cout << "The answer is " << c; 
  }

    case 6: {
    std::cout << "enter the arguement: ";
    std::cin >> a;
    std::cout << "enter the base(for base e copy 2.718281828459045): ";
    std::cin >> b;
    c = log(a);
    d = log(b);
    e = c / d;
    std::cout << "The answer is " << e;
  }

    case 7: {
    std::cout << "enter the value of a: ";
    std::cin >> a;
    std::cout << "enter the value of b: ";
    std::cin >> b;
    std::cout << "enter the value of c: ";
    std::cin >> c;
    d = b * b;
    e = 4 * a * c;
    double f = d - e;
    if ( f < 0 ) {
      std::cout << "No real solution";
    }
    else {
      double delta = std::sqrt(f);
      double g1 = delta - b;
      double g2 = -delta -b;    
      double x1 = g1 / (2 * a);
      double x2 = g2 / (2 * a);
      std::cout << "The first answer is " << x1 << "\n";
      std::cout << "The second answer is " << x2;
  }}
    case 8: {
    std::string choice2;
    std::cout << "Do you want to find an angle or a side: ";
    std::cin >> choice2;
    if (choice2 == "angle") {
      std::cout << "Enter all angles in degrees" << "\n";
      std::cout << "Enter the value of the other angle: ";
      std::cin >> angle_2;
      std::cout << "Enter the value of the side opposite that angle: ";
      std::cin >> side_2;
      std::cout << "Enter the value of the final side: ";
      std::cin >> side_1;

      double angle_2_d = (angle_2 * 3.14159265358979)/180;
      double angle_1_r = asin(side_1*sin(angle_2_d)/side_2);
      double angle_1_d = (angle_1_r *180) / 3.14159265358979;
      std::cout << "The angle is " << angle_1_d << " degrees";
      
    }
    else if (choice2 == "side") {
      double angle_1_d;
      double angle_2_d;
      std::cout << "Enter all angles in degrees" << "\n";  
      std::cout << "Enter the angle opposite the unknown side: ";
      std::cin >> angle_1_d ;
      std::cout << "Enter the value of the other side: ";
      std::cin >> side_2;
      std::cout << "Enter the value of the last angle: ";
      std::cin >> angle_2_d;
      double angle_1_r = (angle_1_d * 3.14159265358979) / 180;
      double angle_2_r = (angle_2_d * 3.14159265358979) / 180;
      side_1 = (side_2*sin(angle_1_r)) / (sin(angle_2_r));
      std::cout << "The answer is " << side_1;
    }
    
  }
    case 9: {
  double side_2;
  double side_1;
    std::cout << "Do you want to find an angle or a side: ";  
    std::cin >> choice2;
     if (choice2 == "side") {
      std::cout << "Enter all angles in degrees" << "\n";
      std::cout << "Enter the value of the angle: ";
      std::cin >> angle_1;
      std::cout << "Enter the value of the first side: ";
      std::cin >> side_1;
      std::cout << "Enter the value of the second side: ";
      std::cin >> side_2;

      double side_3_squared = ( side_1 * side_1 ) + ( side_2 * side_2 ) - 2 * side_2 * side_1 * cos(angle_1);
      double side_3 = sqrt(side_3_squared);

      std::cout << "The side length is " << side_3;
      }
      else if ( choice2 == "angle" ) {
      std::cout << "All angles are in degrees" << "\n";
      std::cout << "Enter the value of the opposite side: ";
      double opposite_side;
      std::cin >> opposite_side;
      std::cout << "Enter the value of the first adjacent side: ";
      std::cin >> side_1;
      std::cout << "Enter the value of the second adjacent side: ";
      std::cin >> side_2;
      
      double cosine_of_angle = (( side_1 * side_1 ) + ( side_2 * side_2 ) - ( opposite_side * opposite_side ))/( 2 * side_2 * side_1 );
      double angle_r = acos(cosine_of_angle);
      double angle_d = ( angle_r * 180 ) / 3.14159265358979;
      std::cout << angle_d;
      }
      case 10: {
      std::cout << "Enter all angles in degrees" << "\n";
      std::cout << "Enter the first side: ";
      std::cin >> side_1;
      std::cout << "Enter the second side: ";
      std::cin >> side_2;
      std::cout << "Enter the angle: ";
      std::cin >> angle_1;
      
      double angle_1_r = (angle_1 * 3.14159265358979)/180;
      double area = (side_1 * side_2 * sin(angle_1_r))/2;

      std::cout << area;
      } 
  }
  return 0;}}
