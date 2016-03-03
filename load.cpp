#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Load(){
    system("cls");
    printf("\n\n\n**********     录 入 信 息 中     **********\n");
    FILE *fp;
    NodeType *s,*r;
    StType st;
    int n;
    char sno[10];
    if((fp=fopen("record.dat","rb")) == NULL){
        printf("\t>>不能打开record.dat文件\n");
        exit(1);
    }
    fseek(fp,0,2);
    n = ftell(fp)/sizeof(StType);
    if(n > 0){                                      //文件不空
        r = head;                                      //r指向头结点
        rewind(fp);
        for(int i = 0; i < n; i++){                 //尾插法
            fread(&st,sizeof(StType),1,fp);         //读取一个学生记录
            s = (NodeType *)malloc(sizeof(NodeType));//新建一个学生节点
            s->data = st;
            r->next = s;                            //将*p节点链到末尾
            r = s;                                  //*r始终指向尾节点
        }
        r->next = NULL;                             //尾节点的next置为null
        fclose(fp);
    }else{
        printf("\n\n\n\t>>无任何记录\n");
        fclose(fp);
    }
    printf("\n\n\n**********   录 入 信 息 完 毕 ！ **********\n");
    printf("Press any key to continue...");
    getch();
}
