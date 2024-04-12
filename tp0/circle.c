#include <stdio.h>

#define PI 3.14159  // Define a constant for pi

float perimetre(float rayon) {

  return 2 * PI * rayon;
}

float surface(float rayon) {
 
  return PI * rayon * rayon;
}

int main() {
  float rayon_utilisateur;

  printf("Saisissez le rayon du cercle: ");
  scanf("%f", &rayon_utilisateur);

  float perimetre_cercle = perimetre(rayon_utilisateur);
  float surface_disque = surface(rayon_utilisateur);

  printf("Le périmètre du cercle est de %.2f.\n", perimetre_cercle);
  printf("L'aire du disque est de %.2f.\n", surface_disque);

  return 0;
}
