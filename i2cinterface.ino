#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the I2C address according to your LCD module
int i2cAddress = 0x27;

// Adjust the columns and rows based on your LCD module size
int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(i2cAddress, lcdColumns, lcdRows); // lcd(address, columns, rows)

void setup() {
  // Initialize the LCD with the I2C address
  lcd.begin(lcdColumns, lcdRows);
  lcd.init();  // initialize the LCD
  lcd.backlight();  // turn on the backlight

  // Display a welcome message
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello,");
  lcd.setCursor(0, 1);
  lcd.print("Arduino!");
  delay(2000);
}

void loop() {
  // Display a counter on the LCD
  for (int i = 0; i < 10; ++i) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Count: ");
    lcd.print(i);

    delay(1000);
  }

  // Display a scrolling message
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Scrolling Text:");

  String message = "Hello, I2C LCD!";
  for (int i = 0; i < message.length() + lcdColumns - 1; ++i) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(i, i + lcdColumns));
    
    delay(500);
  }
}
