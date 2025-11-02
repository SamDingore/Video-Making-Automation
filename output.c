
/* A Work in Progress by Sam Dingore 2020 */

/*
About: https://samdingore.now.sh
Instagram: https://www.instagram.com/sam.dingore/
Twitter: https://twitter.com/SamDingore
Github: https://github.com/SamDingore
Snap me: https://www.snapchat.com/add/sameer_dingore */

/* I had this idea about hyperlapse or animation,
 we can make a video from images but in order to
 make that we need to adjust each image in timneline,
 So i came up with idea that we can actually code
 it and make my own video editor/maker.*/


#include <stdio.h>
#include <dirent.h>
#include "function.h"
#include <string.h>

char TransferArray[1000];
char framerate[100];
char videoname[1000];
char extension[100];
char imageExtension[100];
int main(void) {
int sp=10, loop=0;

   DIR *dr;
   struct dirent *en;
/*open all or present directory*/
   dr = opendir("./images");

   printf("Enter framerate of video: " );
   scanf("%s",framerate);
   printf("Enter extension of image (for exameple: .JPG / .PNG): " );
   scanf("%s",imageExtension );
   printf("Enter Output video name: " );
   scanf("%s",videoname );


   if (dr) {
      while ((en = readdir(dr)) != NULL) {
        strcpy(TransferArray,en->d_name);
        if(TransferArray[0]=='.'){
         /* for every file reading it consist
         of . and .. so we need to skip it */
          continue;
        }
        /*tranferring the array to a queue*/
        enqueue(TransferArray);
        loop=loop+1;

      }
      /*calling function to change the name */

      changeName(sp, loop, imageExtension);
      closedir(dr); //close all directory
   }
   /* Using ffmpeg function we are generating our output */

  Terminal(framerate,videoname,extension,imageExtension);
   return(0);


}
/* A Work in Progress by Sam Dingore 2020 */

/*
About: https://samdingore.now.sh
Instagram: https://www.instagram.com/sam.dingore/
Twitter: https://twitter.com/SamDingore
Github: https://github.com/SameerDingore
Snap me: https://www.snapchat.com/add/sameer_dingore */
