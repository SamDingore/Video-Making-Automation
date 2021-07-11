#include <stdio.h>
#include <dirent.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int d=0;
int f=0;
int z=0;
int x=0;
int y=0;
int counter;
char number[100];

const char* numberMaker() {
  /* code */
  char a[100];
  char arr[100];
  char array[100];
  char ten[10];
  int j;
  int count=100;





char per[1000];



  const char* copychar( int pd, int pf, int pz, int py, int px){


      j=0;
  //    printf("%c\n",arr[j]);
      per[j]=px+0 +'0';
      per[j+1]=py+0 +'0';
      per[j+2]=pz+0 +'0';
      per[j+3]=pf+0 +'0';
      per[j+4]=pd+0 +'0';
  //    printf("sam\n");

     per[j+5]='\0';
      arr[j]='\0';
    //  printf("%s\n",per );
      return per;
  }



   d++;

  if (d == 10) {
    /* code */
    f++;
    d=0;
    if (f == 10) {
      /* code */
      z++;
      f=0;

      if (z == 10) {
        /* code */
        y++;
        z=0;

        if (y == 10) {
          /* code */
          x++;
          y=0;
        }
      }
    }
  }

  //printf("%d%d%d%d%d\n", x,y,z,f,d);
  strcpy(array, copychar(d,f,z,y,x));



const char* tenFileName(char arr01[10]){

  char nn[10] ="sam";
  strcat(arr01, nn);

  return arr01;
}



  if (array[3]=='0' && array[2]=='0' && array[1]=='0' && array[0]=='0') {

char sm[10];
 sm[0]=array[3];
 sm[1]=array[4];
 sm[2]='\0';
    /* code */

    strcpy(number,sm);

//    printf("%s\n",sm );
  } else if (array[2]=='0' && array[1]=='0' && array[0]=='0') {
    /* code */
    char smm[10];
     smm[0]=array[3];
     smm[1]=array[4];
     smm[2]='\0';
     strcpy(number,smm);

  //      printf("%s\n",smm );

  } else if (array[1]=='0' && array[0]=='0') {
    /* code */
    char smm[10];
     smm[0]=array[2];
     smm[1]=array[3];
     smm[2]=array[4];
     smm[3]='\0';
     strcpy(number,smm);

      //  printf("%s\n",smm );

  } else if (array[0]=='0') {
    /* code */
    char smm[10];
     smm[0]=array[1];
     smm[1]=array[2];
     smm[2]=array[3];
     smm[3]=array[4];
     smm[4]='\0';
     strcpy(number,smm);
  //   printf("%s\n",smm );
  }





  return number;
}

char aaa[10]="Sam";


/*
int main() {
  /* code */
  /*
  for (int i = 0; i < 10; i++) {
    /* code *//*
    char sss[10];
   strcpy(sss, numberMaker());
    printf("%s",sss );
    printf("\n" );
  }

  return 0;
}*/
