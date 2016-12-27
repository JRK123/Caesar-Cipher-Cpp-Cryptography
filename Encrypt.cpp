#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <fstream>
int main() {
   FILE *fp1, *fp2;
   char a=0;
   //clrscr();

   fp1 = fopen("source.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }

   fp2 = fopen("source1.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }

   //do {
     // a = fgetc(fp1);
      //fputc(a, fp2);
   //} while (a != EOF);//
    printf("Encrypting.....Done!");
   while (a != EOF)
    {
      a = fgetc(fp1);

      //printf("%d\n",a+45);


      fputc(a+45, fp2);
   }

   fclose(fp1);
   fclose(fp2);
   getch();
}
