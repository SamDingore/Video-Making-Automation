/* A Work in Progress by Sam Dingore 2020 */

/* I had this idea about hyperlapse or animation,
 we can make a video from images but in order to
 make that we need to adjust each image in timneline,
 So i came up with idea that we can actually code
 it and make my own video editor/maker.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE  256

struct element {
    char *name;
    struct element *next;
};

struct element *tail;

void enqueue (char *name);
int dequeue (char *name);
void print_queue (void);
void error (char *msg);
void command();
char buf [BUFSIZE];




  void init_queue ()
  {
      tail = NULL;
  }

/*program to enqueue*/
  void enqueue (char *name)
  {
      struct element *ptr;
      char *cp;

      if ((ptr = (struct element *) malloc (sizeof (struct element))) == NULL)
          error ("malloc");
      if ((cp = (char *) malloc (strlen (name) + 1)) == NULL)
          error ("malloc");

      strcpy (cp, name);
      ptr -> name = cp;

      if (tail == NULL) {
          ptr -> next = ptr;
      }
      else
      {
          ptr -> next = tail -> next;
          tail -> next = ptr;
      }
      tail = ptr;
  }


/*program for dequeue*/
  int dequeue (char *name) // returns -1 on error
  {
      struct element *ptr;
      char *cp;

      if (!tail) {
          fprintf (stderr, "Queue is empty\n");
          return -1;
      }
      // get the head
      ptr = tail -> next;
      cp = ptr -> name;

      if (ptr == tail)
          tail = NULL;
      else
          tail -> next = ptr -> next;
      free (ptr);
      strcpy (name, cp);
      free (cp);
      return 0;
  }

/*this is just to check whether program is working not*/
  void print_queue (void)
  {

      struct element *ptr, *head;

      if (!tail) {
          fprintf (stderr, "Queue is empty\n");
          return;
      }

      printf ("Queue: \n");

      // get the head
      head = ptr = tail -> next;
      int i = 1;

      do {
          printf ("%d. %s\n", i, ptr -> name);

          ptr = ptr -> next;
          i++;
      } while (ptr != head);
  }

  void error (char *msg)
  {
      perror (msg);
      exit (1);
  }
/* again a test program*/
 int test(int sp){
  printf("hello");
  return sp;
}

void changeName (int sp, int loop) {
    struct element *ptr, *head;
    head = ptr = tail -> next;

    int ret,j,p,q;
    char oldName[200];
    char temp;
    char arr[200];

/*Program to store int to char so we can
have ascending array*/
    const char* copychar(int sp){
       for(j=0;sp>0;j++){
        arr[j]=sp%10 + '0';
        sp = sp/10;
       }

        arr[j]='\0';
        return arr;
    }




   int i = 1, k=1, z=0;

   do {

     char arr2[200];
     char newarr[200];
     char newName[200];
     char finaloldname[200];
     char finalnewname[200];


     strcat(arr2, copychar(sp));
     strcpy(oldName, ptr -> name);
     sp=sp+10;

    /*my own version of storing a
    only two digits in a single string*/
     newarr[0]=arr2[k];
     newarr[1]=arr2[k+1];
     newarr[2]='\0';

     char oldpath[]="./images/";
     char newpath[]="./images/img-0";
     char extension[]=".png";

    /*program to create the file names*/
    const char* oldFileName(char oldName[200]){

      strcat(oldpath,oldName);
      return oldpath;
    }

    const char* newFileName(char newName[200]){


      strcat(newName,extension);
      strcat(newpath,newName);
      return newpath;
    }

      strcpy(finaloldname, oldFileName(oldName));
      strcpy(finalnewname, newFileName(newarr));


     if (rename(finaloldname, finalnewname) == 0)
         {

           printf("%s renamed successfully.\n",oldName);
        }
       else
        {

           printf("Unable to rename %s. Please check files exist.\n",oldName);
        }


      z=z+1;
      k=k+1+1;
      ptr = ptr -> next;
      i++;

   } while (ptr != head);

}


/*Program to use FFMPEG functions*/

void Terminal( char framerate[100],  char videoname[1000]) {
   char Terminal[1000];
   char command[100];
   char middle[100];
   char extensionforvideo[100];
   strcpy(command,"ffmpeg -framerate ");
   strcat(command,framerate);
   strcpy(middle," -i ./images/img-%02d.png ./output/");
   strcat(command,middle);
   strcat(command,videoname);
   strcpy(extensionforvideo,".avi");
   strcat(command,extensionforvideo);
   printf("%s\n",command );
   system(command);
}



/* A Work in Progress by Sam Dingore 2020 */

/*
About: https://samdingore.now.sh
Instagram: https://www.instagram.com/sam.dingore/
Twitter: https://twitter.com/SamDingore
Github: https://github.com/SamDingore
Snap me: https://www.snapchat.com/add/sameer_dingore */
