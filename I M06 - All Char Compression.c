#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int i,j,flag=0;
    char word[100];
    scanf("%s",&word);
    for(i=0;i<strlen(word);i++){
            if((word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='y')&&(word[i+1]=='a'||word[i+1]=='e'||word[i+1]=='i'||word[i+1]=='o'||word[i+1]=='u'||word[i+1]=='y')){
                flag=1;
                break;
           }
    }

    for(i=0;i<strlen(word);i++){
        if((word[i]==word[i+1])){
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
       printf("No");
    }
    else{

        printf("Yes");
            }       
    return 0;
}
