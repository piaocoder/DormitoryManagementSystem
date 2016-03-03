#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Delete(){
    char sno[10];
    while(1){
        system("cls");
        printf("\n\n\n**********删 除 学 生 住 宿 信 息**********\n");
        printf("\n   请输入要删除学生的学号：");
        scanf("%s",sno);
        NodeType *s,*r;
        r = head;
        s = head->next;
        while(s != NULL){
            if(strcmp(s->data.sno,sno) == 0)
                break;
            r = s;
            s = s->next;
        }
        if(s != NULL){
            r->next = s->next;
            free(s);
            printf("\t学号为%s的记录被删除\n",sno);
        }else{
            printf("\t>>文件中没有该学生的数据,无法进行删除操作!\n");
        }
        printf("是否继续删除(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}

void Deleteall(){
    system("cls");
    NodeType *s,*r;
    s = head->next;
    if(s != NULL){
        r = s->next;
        free(s);
        s = r;
    }
    head->next = NULL;
    printf("\n\n\n");
    printf("全部宿舍管理信息已删除\n\n");
    printf("Press any key to continue...");
    getch();
}

void Del_interface(){
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             青 岛 理 工 大 学 宿 舍 管 理 系 统             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                    1. 按学号删除                            *\n");
        printf("        *                    2. 全部删除                              *\n");
        printf("        *                    0. 结束查询返回上层                      *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop2:
        printf("\t请输入操作数：");
        int op;
        scanf("%d",&op);
        switch(op){
            case 0:
                return ;
            case 1:
                Delete();
                break;
            case 2:
                Deleteall();
                break;
            default :
                printf("\n*****输入错误，请重新输入！*****\n");
                goto loop2;
                break;
        }
    }
}
