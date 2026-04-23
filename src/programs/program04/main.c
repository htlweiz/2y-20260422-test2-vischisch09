/// \file Programm 04
/// \author VIDIC Victoria
/// \date 23.04.2026

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// TODO: your code goes here
double compute_hypotenuse (double leg_a , double leg_b) {
  double hyp = 0;
  hyp = sqrt((leg_a*leg_a)+(leg_b*leg_b));

  return hyp;
}


int main(void) {
  double leg_a = 0, leg_b = 0;
  printf("Länge a: ");
  scanf("%lf", &leg_a);
  printf("Länge b: ");
  scanf("%lf", &leg_b);

  printf("Die Länge der Hypotenuse ist: %f", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
