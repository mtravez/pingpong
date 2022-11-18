#include <Arduino.h>
#include <WiFi.h>

#define SHORT_PRESS_TIME 500
#define LONG_PRESS_TIME 3000
#define BUTTON_P1 1
#define BUTTON_P2 2

int player1, player2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON_P1, INPUT_PULLUP);
  pinMode(BUTTON_P2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long p1_button_state_new = digitalRead(BUTTON_P1);
  unsigned long p2_button_state_new = digitalRead(BUTTON_P2);

  if (p1_button_state_new = HIGH)
    player1++;
  else if (p2_button_state_new = HIGH)
    player2++;
  printf("%i : %i", player1, player2);
}