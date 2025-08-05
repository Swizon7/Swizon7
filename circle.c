#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    
    // Set color for the first circle
    setcolor(WHITE);
    // Draw circle with center (50, 50) and radius 75
    circle(50, 50, 75);
    
    // Set color for the second circle
    setcolor(RED);
    // Draw circle with center (50, 50) and radius 125
    circle(50, 50, 125);
    
    // Wait for user input (e.g., key press)
    getch();
    
    // Close the graphics mode
    closegraph();
    
    return 0;
}