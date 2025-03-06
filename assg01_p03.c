#include <stdio.h>

// Define a rectangular prism structure
struct RectangularPrism {
int length;
int width;
int height;
};

// Function to calculate lateral surface area
int calculateLateralSurfaceArea(struct RectangularPrism prism) {
    int shortface = prism.width * prism.height;
    int longface = prism.length * prism.height;
    return (shortface + longface)*2;
}

// Function to calculate total surface area
int calculateTotalSurfaceArea(struct RectangularPrism prism) {
    int lateral = calculateLateralSurfaceArea(prism);
    return lateral + (prism.length * prism.width * 2);
}

int main() {
    // Declare a rectangular prism variable
    struct RectangularPrism prism;

    // Get input from the user
    printf("Enter the length, width, and height of the rectangular prism (separated by spaces): ");
    scanf("%d %d %d", &prism.length, &prism.width, &prism.height);

    // Check for valid input
    if (prism.length <0 || prism.width <0 || prism.height <0 || prism.length >100 || prism.width >100 || prism.height >100) {
        printf("Invalid input. Please enter positive integers not exceeding 100.\n");
        return 1; // Exit with an error code 
        }
    
    
    // Calculate and print the lateral and total surface areas
    // write your code here
    int lateralSurfaceArea = calculateLateralSurfaceArea(prism);
    int totalSurfaceArea = calculateTotalSurfaceArea(prism);
    printf("Lateral Surface Area: %d\n", lateralSurfaceArea);
    printf("Total Surface Area: %d\n", totalSurfaceArea);
    return 0; // Exit successfully
}   
/* calculate short side face area and long side face area then add them together
and multiply by 2 to have the lateral surface area. Then take the lateral surface area add with
area of the 2 bases to have the total surface area*/