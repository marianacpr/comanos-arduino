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

#define  PIN_LED 14  //Pino onde está conectado o led


/**
 * @brief setup inicial da aplicação
 * 
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 Serial.print('ola Mundo');
  
}

void loop() {
  // put your main code here, to run repeatedly:
 
}