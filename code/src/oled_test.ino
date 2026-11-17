#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SH1122_256X64_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

int progress = 0;
float angle = 0.0;

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer(); // Clear internal memory

  // Draw border
  u8g2.drawFrame(0, 0, 256, 64);

  // Draw compas on the left
  int cx = 36;
  int cy = 32;
  int r = 24;
  u8g2.drawCircle(cx, cy, r);
  u8g2.drawCircle(cx, cy, 2); 

  // Calculate rotating needle tip
  int nx = cx + cos(angle) * (r - 4);
  int ny = cy + sin(angle) * (r - 4);
  u8g2.drawLine(cx, cy, nx, ny);


  u8g2.setFont(u8g2_font_5x7_tr);
  u8g2.drawStr(cx - 2, cy - r + 7, "N");

  // Draw ttext on the right
  u8g2.setFont(u8g2_font_ncenB10_tr);
  u8g2.drawStr(74, 22, "LoRaBasedCompass");

  u8g2.setFont(u8g2_font_6x10_tr);
  if (progress < 100) {
    u8g2.drawStr(74, 38, "Initializing display...");
  } else {
    u8g2.drawStr(74, 38, "Display OK! Ready.");
  }

  // Loading Bar at the bottom right
  u8g2.drawFrame(74, 46, 166, 10);          
  int fillWidth = map(progress, 0, 100, 0, 162);
  u8g2.drawBox(76, 48, fillWidth, 6);   

  u8g2.sendBuffer(); // Push frame to the screen

  // Update animation states
  angle += 0.15;
  if (angle > 6.283) angle = 0;

  progress += 2;
  if (progress > 100) {
    delay(800);
    progress = 0;
  }

  delay(30); // ~30 FPS animation speed
}
