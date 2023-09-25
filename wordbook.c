#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int equal(const char s1[],const char s2[]){printf("6");
    int ifequal=0;
    int i=0;
    while(s1[i]==s2[i]&& s1[i]!='\0'&&s2[i]!='\0') i++;
    if(s1[i]=='\0'&&s2[i]=='\0') ifequal =1;
    return ifequal;
}
struct node{
    char Eng[20],Chi[10];
};
int main(){
    struct node word[100];
    int key;
    int i=0;
    B:
    printf("1.添加单词\n2.查看单词\n3.复习\n");
   
    scanf("%d",&key);
    switch (key)
    {
    case 1: 
        A:  printf("请输入汉语：\n");
            scanf("%s",word[i].Chi);
            printf("请输入英语：\n");
            scanf("%s",word[i].Eng);
            printf("继续摁1 结束摁2");
            int a;scanf("%d",&a);;i++;
            if(a==1) {
               goto A;
            }
            if(a==2) goto B;
            else break;
    case 2:
        for(int j=0;j<=i;j++){
            printf("%s ",word[j].Chi);
            printf("%s\n",word[j].Eng);
        }        
        goto B;
    case 3:
        for(int j=0;j<=i;j++){
            printf("请输入");printf("%s",word[j].Chi);printf("的英文");
            char temword[20];
            scanf("%s",word->Eng);
            if(equal(temword,word[j].Eng))
                printf("nb\n");
            else printf("sb\n");
        }
        goto B;

    }
 return 0;
}