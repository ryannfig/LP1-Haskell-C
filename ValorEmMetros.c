#include <stdio.h>
 float metros_para_dec(float metros) {
       return metros * 10; 
   }

 float metros_para_cen(float metros) {
       return metros * 100;
 }
  float metros_para_mili(float metros) {
       return metros * 1000;
  }

int main()
{
  float metros;
  
  printf("Digite um valor em metros: ");
  scanf("%f", &metros);
  
  float dec = metros_para_dec(metros);
  float cen = metros_para_cen(metros);
  float mili =  metros_para_mili(metros);
  
  printf("%.2f metros equivalem a: \n", metros);
  printf("%.2f decimetros \n", dec);
  printf("%.2f centimetros \n", cen);
  printf("%.2f milimetros \n", mili);
  
    return 0;
}
