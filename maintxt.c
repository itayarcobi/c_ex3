#include<stdio.h>
#include "searchtxt.h"
#define LINE 256
#define WORD 30

int main(){
char fline [LINE];
char word [WORD];
char sc;
int f=0;
if(fgets(fline,LINE,stdin)!=NULL){
    while(fline[f]!=' '){
        word[f]=fline[f];
        f++;
    }
    sc =fline[f+1];
}
 char txt [LINE];
switch (sc) 
{
case 'a':
for (int i = 2; i < LINE; i++)
{
if(fgets(txt,LINE,stdin)!=NULL){
print_lines(txt,word);
}
}
    break;
case 'b':
for (int i = 2; i < LINE; i++)
{
if(fgets(txt,LINE,stdin)!=NULL){
print_similar_words(txt,word);
}
}
default:
    break;
}
return 0;
}