#include <stdio.h>

int main(void) {
  /*
  Kabisa bo'lmagan yilning
  M -oyining D -kuni berilgan.
  Berilgan sanadan keyingi sanani
  aniqlab ekranga chop etuvchi
  dastur tuzing.
  Masalan:
  01 02
  Natija:
  02 02
  */
  int d, m;
  scanf("%d %d", &d, &m);

  switch (m) {
    // 31 bir kunlik oylar uchun
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (d == 31) {
      d = 1;
      m = m + 1;
      if (m > 12) { // 12 - oy likka tekshirish
        m = 1;
      }
      printf("%.2d %.2d", d, m);
    } else {
      printf("%.2d %.2d", d + 1, m);
    }
    break;

  // Febral oyi uchun
  case 2:
    if (d == 28) {
      printf("%.2d %.2d", d = 1, m + 1);
    } else {
      printf("%.2d %.2d", d + 1, m);
    }
    break;

  // 30 kunlik oylar uchun
  case 4:
  case 6:
  case 9:
  case 11:
    if (d == 30){
      printf("%.2d %.2d", d = 1, m + 1);
  }else{
      printf("%.2d %.2d", d + 1, m);
    }
}
  return 0;
}