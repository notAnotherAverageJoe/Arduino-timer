#include <LiquidCrystal.h>

int seconds = 0;
// startup the LCD
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
    lcd_1.begin(16, 2); // 16x2 LCD display
    lcd_1.print("Hello, World!");
}

void loop()
{
    // Set the cursor to column 0, line 1
    lcd_1.setCursor(0, 1);

    // Print the number of seconds
    lcd_1.print("Secs: ");
    lcd_1.print(seconds);
    lcd_1.print(" ");
    lcd_1.print("is ");

    // Add a space to separate even/odd status
    lcd_1.print(" ");

    // Check if the number is even or odd
    if (seconds % 2 == 0)
    {
        lcd_1.print("Even");
    }
    else
    {
        lcd_1.print("Odd");
    }

    delay(1000); 
    seconds += 1;

    // Clear the previous display to avoid overlapping text
    lcd_1.clear();
}