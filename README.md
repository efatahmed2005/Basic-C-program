```c
#include <stdio.h>
#include <string.h>

int main()
{   int answer;
    char name[30];

    printf("Hey, I am Efat. What's your name? ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Nice to meet you, %s!\nAre you intrested to see my codes ?\n1.Yes\n2.No\n", name);
    scanf("%d",&answer);
    if(answer==1) printf("Yeah, sure . I am glad to know it.\n" );
    else if(answer==2) printf("Oh, I hope you know all of this . Congratulations !\n" );


    return 0;
}
