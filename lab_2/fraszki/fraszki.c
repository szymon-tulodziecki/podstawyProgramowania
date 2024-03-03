#include <stdio.h>

void fraszka0() {
  printf("\n  Kradziez jakiej sumy\n  uprawnia do dumy?\n\n");
}

void fraszka1() {
  printf("\n  Wszystko mija.\n  Nawet najdluzsza zmija.\n\n");
}

void fraszka2() {
  printf("\n  Najstraszniejsze sa grzechy,\n  z ktorych nie ma uciechy.\n\n");
}

void fraszka3() {
  printf("\n  Po to czlowiek odkryl slowo,\n  by przemilczec to i owo.\n\n");
}

void fraszka4() {
  printf("\n  Leza na progu jak Rejtani.\n  Protestujacy? Nie, pijani.\n\n");
}

void fraszka5() {
  printf("\n  Mila poratuj w potrzebie,\n  przyjdz do mnie, a przyjde do siebie.\n\n");
}

void fraszka6() {
  printf("\n  Na zlodzieju czapka gore –\n  chyba ze ukradnie w pore.\n\n");
}

void fraszka7() {
  printf("\n  Taki jest ciag dalszy starego moralu:\n  ,,Gdy nie ma koszuli, blizsze cialo cialu\'\'.\n\n");
}

void spis_tresci() {
  printf("\n0. Pytanie");
  printf("\n1. Optymistyczna");
  printf("\n2. O grzechach");
  printf("\n3. Po to");
  printf("\n4. Analogie");
  printf("\n5. Erotyk");
  printf("\n6. Przyslowie");
  printf("\n7. Blizsza koszula cialu");
  printf("\n\n");
}

int main() {
  spis_tresci();
  int nr;
  printf("Podaj numer fraszki: ");
  scanf("%d", &nr);

  switch(nr) {
    case 0:
      fraszka0();
      break;
    case 1:
      fraszka1();
      break;
    case 2:
      fraszka2();
      break;
    case 3:
      fraszka3();
      break;
    case 4:
      fraszka4();
      break;
    case 5:
      fraszka5();
      break;
    case 6:
      fraszka6();
      break;
    case 7:
      fraszka7();
      break;
    default:
      printf("Zly wybor! \n");
  }

  return 0;
}