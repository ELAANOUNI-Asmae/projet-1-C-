#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char TXT[200];
    int i,j;

    printf("Print a text !\n");
    gets(TXT);

 for(i=0;i<strlen(TXT);i++){
    if(TXT[i]=='e'){
        for(j=i;j<strlen(TXT);j++){
            TXT[j]= TXT[j+1];
        }
    }
 }

 puts(TXT);
    return 0;
}
