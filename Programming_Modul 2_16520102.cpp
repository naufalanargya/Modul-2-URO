#include <stdio.h>
int main(){
 int pilih,i,hasil=1;
 float A,B, result;
 printf("Angka pertama: ");
 scanf("%f", &A);
 printf("Angka kedua: ");
 scanf("%f", &B);
 printf("Berikut adalah operator-operator yang tersedia: \n");
 printf("1. Penjumlaha\n");
 printf("2. Pengurangan\n");
 printf("3. Perkalian\n");
 printf("4. Pembagian\n");
 printf("5. Perpangkatan\n");
 printf("6. Pengintegralan\n");
 printf("Pilih program yang diinginkan: " );
 scanf("%d", &pilih);
 if (pilih==1){
  result = A + B;
  printf("%.2f",result);
  break;
 }
 else if (pilih==2){
  result = A - B;
  printf("%.2f",result);
  break;
 }
 else if (pilih==3){
  result = A * B;
  printf("%.2f",result);
  break;
 }
 else if (pilih==4){
  result = A / B;
  printf("%.2f",result);
  break;
 }
 else if  (pilih==5){
   printf("1. A sebagai bilangan yang akan dipangkatkan dan B sebagai pangkat\n");
   printf("2. B sebagai bilangan yang akan dipangkatkan dan A sebagai pangkat\n");
   printf("Pilih kondisi: ");
   scanf("%d",&pilih);
   if (pilih==1) {
    for(i=1;i<=B;i++){
     hasil=hasil*A;
    }
    printf("Hasilnya adalah %d", hasil);
   }
   else if (pilih==2) {
    for(i=1;i<=A;i++){
     hasil=hasil*B;
    }
    printf("Hasilnya adalah %d", hasil);
   }
  break;
 }
  else if (pilih==6){
  break;
 }
 printf("Apakah anda masih ingin menggunakan kalkulator ini (1/0)?");
 scanf("%d",pilih);
 if (pilih==1){
  /*mau ngulang programnya*/
 }
 else return 0;
}