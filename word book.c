#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node{
    char Eng[20],Chi[10];
}Node;
Node* book;

int main(){
    int key=0;
    int i=0;
    while(1){
    printf("1.add\n2.check\n3.review\n");
   
    scanf("%d",&key);
    switch (key)
    {
    case 1:{
            Node *word=(Node *)malloc(sizeof(Node));
            printf("Chinese:\n");
            scanf("%s",word->Chi);
            printf("English:\n");
            scanf("%s",word->Eng);
            book = (Node *)realloc(book, sizeof(Node) * (i + 1));
            book[i]=*word;
            i++;
            break; 
    }   
    case 2:
        for(int j=0;j<i;j++){
            printf("%s ",book[j].Chi);
            printf("%s\n",book[j].Eng);
        }        
        break;
    case 3:{
        int b=rand()%i;
        printf("please input the English of ");printf("%s\n",book[b].Chi);
        char temword[20];
        scanf("%s",temword);
        if(strcmp(temword,book[b].Eng)==0)
            printf("nb\n");
        else printf("sb\n");
        break;}
    default:
        break;


    }}
 return 0;
}