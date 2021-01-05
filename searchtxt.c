#include<stdio.h>
#include "searchtxt.h"
#define LINE 256
#define WORD 30

int getLine(char s[]){
    char str[LINE];
    int n=0;
    while(n<LINE && s[n]!='\n' && s[n]!='\0'){
        str[n]=s[n];
        n++;
    }
     str[n]='\n';

    int count=0;
    int i=0;
    char l =str[0];
    while(l != '\n' && l!='\0' && count<LINE){
        count++;
        i++;
        l =str[i];
    }
    if(count==0)
    printf("the line is empty");

    return count;
}

int getword (char w[]){
    char word[WORD];
 int n=0;
    while(w[n]!='\n'&& w[n]!=' ' && w[n]!='\t' && w[n]!='\t' && w[n]!='\0'){
        word[n]=w[n];
        n++;
    }
     word[n]=' ';

     int count=0;
    int i=0;
    char l =word[0];
    while(l != '\n' && l!=' ' && l!='\t' && l!='\0' && count<WORD){
        count++;
        i++;
        l =word[i];
    }
    if(count==0){
    printf("the word is empty");
    }
    return count;
}

int substring(char *str1 , char * str2){
    int str1len = getword(str1);
    int str2len = getword(str2);
    int j=0;
    int count=0;
    for(int i=0; i<str1len; i++){
        if (str1[i]==str2[0])
        {
            int jj=i;
            while (jj<str1len && str1[jj]==str2[j] && str1[jj]!='\0' && str1[jj]!='\n')
            {
                j++;
                count++;
                jj++;
             }
             
             if(count==str2len){
             return 1;
             }
             else
             {
                 count=0;
                 j=0;
             }
             
        }
        
    }
    return 0;

}
 int similar(char *s, char *t, int n){
int slen = getword(s);
int tlen = getword(t);
int countc=0;
if(slen==tlen){
    for (int c = 0; c < tlen; c++)
    {
    if(s[c]==t[c]){
        countc++;
    }
    }
    if(countc==tlen)
    return 1;
}
if(slen-n != tlen)
{
return 0;
}
else
{
    int j=0;
    int count=0;
    int i=0;
    for(i=0; i<slen ; i++){
        if(j<tlen && s[i]==t[j] && t[j]!='\0' && t[j]!='\n'){
            count++;
            j++;
        }
        else
        {
        }
        
    }


if(count==tlen && i-j==n){
    return 1;
}
}
return 0;
 }
 void print_lines(char *line,char *str){
int j=0;
int n=0;
while (line[n]!='\n' && line[n]!='\0' && n<getLine(line))
{
char word[WORD]={0};
while(line[n]!= ' ' && line[n]!= '\n' && line[n]!='\t')
{
word[j]=line[n];
n++;
j++;
}
if(substring(word,str)==1)
{
printf("%s",line);
}
j=0;
// for (int i = 0; i < WORD; i++)
// {
// word[i]=' ';
// }
n++;
}
 }
 void print_similar_words(char *line,char *str){
int j=0;
int n=0;
while (line[n]!='\n' && line[n]!='\0' && n<getLine(line) && line[n]!='\r')
{
char word[WORD]={0};
while(line[n]!= ' ' && line[n]!= '\n' && line[n]!='\t' && line[n]!='\r')
{
word[j]=line[n];
n++;
j++;
}
word[j]=0;
if(similar(word,str,1)==1)
{
printf("%s\n",word);
}
j=0;
n++;
}
 }


