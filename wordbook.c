#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char Eng[20],Chi[10];
};
int main(){
    struct node word[100];
    int key=0;
    int i=0;
    while(1){
    printf("1.add\n2.check\n3.review\n");
   
    scanf("%d",&key);
    switch (key)
    {
    case 1:while(1){
            printf("Chinese:\n");
            scanf("%s",word[i].Chi);
            printf("English:\n");
            scanf("%s",word[i].Eng);
            printf("1.continue;2.exist\n");
            int a=0;scanf("%d",&a);i++;
            break;
            }       
    case 2:
        for(int j=0;j<i;j++){
            printf("%s ",word[j].Chi);
            printf("%s\n",word[j].Eng);
        }        
        break;
    case 3:
        for(int j=0;j<i;j++){
            printf("please input the English of ");printf("%s\n",word[j].Chi);
            char temword[20];
            scanf("%s",temword);
            if(strcmp(temword,word[j].Eng)==0)
                printf("nb\n");
            else printf("sb\n");
        }
    default:
        break;

    }}
 return 0;
}