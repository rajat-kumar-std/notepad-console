/*
 notepad - ctrl+s => save
	new line inertion
	backspace working
	filename with extension

*/
#include<stdio.h>
#include<conio.h>
int main(){
  FILE *fp;
  char a[500], fname[20];
  int i;
  clrscr();
  printf("Enter file name: ");
  gets(fname);
  printf("      Write Here:\n------------------------\n");
  i=0;
  while(1){
    a[i]=getch();

    if(a[i]==19){
      a[i]='\0';
      break;
      }

    if(a[i]==13)
      a[i]='\n';

    if(a[i]==8){
      i--;
      a[i]='\0';
      i--;
      printf("\b \b");
      }
    else
      printf("%c",a[i]);
    i++;
    }

  fp=fopen(fname,"w");
  i=0;
  while(a[i]!='\0'){
    fputc(a[i++],fp);
    }
  printf("\nFile Saved :)");
  fclose(fp);
  getch();
  }


