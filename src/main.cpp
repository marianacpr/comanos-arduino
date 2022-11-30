/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Arduino.h>

#define  PIN_LED 13  //Pino onde está conectado o led


/**
 * @brief setup inicial da aplicação
 * 
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LEAD, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LEAD, HIGH);
  delay(1000);
  digitalWrite(PIN_LEAD, LOW);
  delay(1000);
}