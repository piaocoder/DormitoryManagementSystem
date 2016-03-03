#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Save(){
    system("cls");
    printf("\n\n\n**********     保 存 信 息 中     **********\n");
    FILE *fp;
    NodeType *p = head->next;
    if((fp=fopen("record.dat","wb")) == NULL){     //以写模式打开
        printf("\t不能建立record.dat文件\n");
        exit(2);
    }
    while(p != NULL){
        fwrite(&p->data,sizeof(StType),1,fp);
        p = p->next;
    }
    printf("\n\n\n**********   录 入 信 息 完 毕 ！ **********\n");
    printf("Press any key to continue...");
    getch();
    fclose(fp);                                     //关闭文件
}
