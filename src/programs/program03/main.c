/// \file Programm 04
/// \author VIDIC Victoria
/// \date 23.04.2026

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here


double celsius2fahrenheit (double temp_celsius){
temp_celsius = temp_celsius * 9/5 + 32;
}
return celsius2fahrenheit;



int main(void) {
  double temp_celsius = 0;

  printf("Temperatur in Grad Celsius: ");
  scanf("%lf", &temp_celsius);
  
  printf("%f", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
