// Assignment 1

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// This function will return the distance of the inputed points and print them to prevent repeating code in each function
// This function will be used in all other functions despite its name containing "distance"
double calculateDistanceHelper() {
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;

    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    // Calculating the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
}

double calculateDistance() {
    // Calls helper function
    double distance = calculateDistanceHelper();

    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    // Distance is renamed to diameter to make computing perimeter more logical
    double diameter = calculateDistanceHelper();

    // Calculating perimeter
    double perimeter = PI * diameter;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 1.0;

}

double calculateArea() {

    double diameter = calculateDistanceHelper();
    // Converting from diameter to radius to make the area calculation standard
    double radius = diameter / 2;
    // Calculating the area (pi * r^2)
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 1.0;

}

double calculateWidth() {
    // Calculating width, again, same as original distance formula just with a different name
    double width = calculateDistanceHelper();

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 1.0;
}

double calculateHeight() {
    /* NOTE!!!
    I'm not exactly sure what was meant by height here so I did the distance divided by 2 under the assumption that the  
    ceiling of the city in question would be a dome shape*/
    double height = calculateDistanceHelper() / 2;

    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 1.0;
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}