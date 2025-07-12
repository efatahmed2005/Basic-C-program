#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char question[][200] = {
    "1. What HTML element is used to embed a video in a webpage?",
    "2. Which event is triggered when an element has been loaded in HTML?",
    "3. What is the purpose of the 'controls' attribute in the <audio> and <video> tags?",
    "4. Which event is triggered when a user clicks on an HTML element?",
    "5. Which attribute can be used to prevent a video from playing automatically when the page loads?"
};

char option[][50] = {
    "a. <audio>", "b. <embed>", "c. <iframe>", "d. <video>",
    "a. onloadstart", "b. onplay", "c. onloadeddata", "d. onerror",
    "a. To autoplay the media", "b. To control the volume of the media", "c. To display media controls like play, pause, and volume adjustment", "d. To set the media on a loop",
    "a. onkeydown", "b. onmouseover", "c. onclick", "d. onresize",
    "a. autoplay", "b. loop", "c. controls", "d. none of the above"
};


    char answer[5]={'d','a','c','c','a'};
    int question_quantity=sizeof(question)/sizeof(question[0]);
    char input;
    int point=0;
    printf("\nAnswer the questions given below . \n\n");
    for(int i=0;i<question_quantity;i++)
    {
        printf("%s\n",question[i]);
    
        for(int j=(i*4);j<(i*4)+4;j++)
        {
          printf("%s\n",option[j]);
        }
      printf("\n\n");
      scanf(" %c",&input);
      input= tolower(input);

      if(input==answer[i])
      {
        printf("correct\n\n");
        point++;
      }
      else printf("wrong\n\n");
   }
printf("\n\n");
printf("Your score : %d/%d\n\n\n",point,question_quantity);
return 0;
}
