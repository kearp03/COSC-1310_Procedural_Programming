#include <stdio.h>
#define SALES_TAX 1.055

int main(void){
    //Declare prices of each item as a constant float
    const float monitor_price = 10.00;
    const float keyboard_price = 3.5;
    const float mouse_price = 1.5;
    const float cpu_price = 20.33;
    const float ram_price = 15.34;

    //Declares the variables to hold how many the user wants of each item
    int monitor, keyboard, mouse, cpu, ram;

    //User inputs how much they want of each item
    printf("Enter how many of the following items you want.\n");
    printf("Monitors: ");
    scanf("%d", &monitor);
    printf("Keyboard: ");
    scanf("%d", &keyboard);
    printf("Mice: ");
    scanf("%d", &mouse);
    printf("CPU: ");
    scanf("%d", &cpu);
    printf("RAM: ");
    scanf("%d", &ram);

    //Computes the cost of each item, the subtotal, and the total with tax
    float monitor_cost = monitor * monitor_price;
    float keyboard_cost = keyboard * keyboard_price;
    float mouse_cost = mouse * mouse_price;
    float cpu_cost = cpu * cpu_price;
    float ram_cost = ram * ram_price;
    float subtotal = monitor_cost + keyboard_cost + mouse_cost + cpu_cost + ram_cost;
    float total = subtotal * (SALES_TAX);

    //Prints everything to the screen in table format
    printf("Item    \tAmount\tCost\n");
    printf("Monitor \t%d    \t$%.2f\n", monitor, monitor_cost);
    printf("Keyboard\t%d    \t$%.2f\n", keyboard, keyboard_cost);
    printf("Mice    \t%d    \t$%.2f\n", mouse, mouse_cost);
    printf("CPU     \t%d    \t$%.2f\n", cpu, cpu_cost);
    printf("RAM     \t%d    \t$%.2f\n", ram, ram_cost);
    printf("---------------------------------\n");
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Total: $%.2f\n", total);
}
