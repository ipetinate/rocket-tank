#include <Arduino.h>

// PINS H Bridge L298n

const int8_t PIN_H_BRIDGE_A = 11;
const int8_t PIN_H_BRIDGE_B = 10;
const int8_t PIN_H_BRIDGE_C = 6;
const int8_t PIN_H_BRIDGE_D = 5;

// Methods
void moveForwardStart();
void moveForwardStop();

void moveBackwardStart();
void moveBackwardStop();

void setup()
{
  pinMode(PIN_H_BRIDGE_A, OUTPUT);
  pinMode(PIN_H_BRIDGE_B, OUTPUT);
  pinMode(PIN_H_BRIDGE_C, OUTPUT);
  pinMode(PIN_H_BRIDGE_D, OUTPUT);
}

void loop()
{
  moveForwardStart();
  delay(2000);
  moveForwardStop();
  moveBackwardStart();
  delay(2000);
  moveBackwardStop();
}

// Method's implementation

void moveForwardStart()
{
  digitalWrite(PIN_H_BRIDGE_B, HIGH);
  digitalWrite(PIN_H_BRIDGE_C, HIGH);
};

void moveForwardStop()
{
  digitalWrite(PIN_H_BRIDGE_B, LOW);
  digitalWrite(PIN_H_BRIDGE_C, LOW);
};

void moveBackwardStart()
{
  digitalWrite(PIN_H_BRIDGE_A, HIGH);
  digitalWrite(PIN_H_BRIDGE_D, HIGH);
};

void moveBackwardStop()
{
  digitalWrite(PIN_H_BRIDGE_A, LOW);
  digitalWrite(PIN_H_BRIDGE_D, LOW);
};