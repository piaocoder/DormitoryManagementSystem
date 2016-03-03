#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Query(int op){
    NodeType *s,*r;
    s = head->next;
    printf("\n\n\n**********查 询 学 生 住 宿 信 息**********\n");
    int sum = 0;
    if(op == 1){
        printf("\n   请输入要查询学生的学号：");
        char sno[10];
        scanf("%s",sno);
        while(s != NULL){
           if(strcmp(s->data.sno,sno) == 0){
                if(sum == 0){
                   printf("Record：   学号        姓名    楼号    房间号    班级名\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else if(op == 2){
        printf("\n   请输入要查询学生的姓名：");
        char name[20];
        scanf("%s",name);
        while(s != NULL){
           if(strcmp(s->data.name,name) == 0){
                if(sum == 0){
                    printf("Record：   学号        姓名    楼号    房间号    班级名\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else if(op == 3){
        printf("\n   请输入要查询学生的房间号：");
        int room;
        scanf("%d",&room);
        while(s != NULL){
           if(s->data.room == room){
                if(sum == 0){
                    printf("Record：   学号        姓名    楼号    房间号    班级名\n");
                    sum++;
                }
               printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }else{
        printf("\n   请输入要查询学生的班级名：");
        char className[10];
        scanf("%s",className);
        while(s != NULL){
           if(strcmp(s->data.className,className) == 0){
                if(sum == 0){
                    printf("Record：   学号        姓名    楼号    房间号    班级名\n");
                    sum++;
                }
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
           }
           s = s->next;
        }
    }
    if(sum == 0){
        printf("\n 查无此信息!\n");
    }
    printf("Press any key to continue...");
    getch();
}

void Query_interface(){
    while(1){
        system("cls");
        printf("        ***************************************************************\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *             青 岛 理 工 大 学 宿 舍 管 理 系 统             *\n");
        printf("        *                                                             *\n");
        printf("        *                                                             *\n");
        printf("        *                    1. 按学号查询                            *\n");
        printf("        *                    2. 按姓名查询                            *\n");
        printf("        *                    3. 按房间号查询                          *\n");
        printf("        *                    4. 按班级查询                            *\n");
        printf("        *                    0. 结束查询返回上层                      *\n");
        printf("        ***************************************************************\n");
        printf("\n\n\n");
        loop1:
        printf("\t请输入操作数：");
        int op;
        scanf("%d",&op);
        switch(op){
            case 0:
                return ;
            case 1:
                Query(1);
                break;
            case 2:
                Query(2);
                break;
            case 3:
                Query(3);
                break;
            case 4:
                Query(4);
                break;
            default :
                printf("\n*****输入错误，请重新输入！*****\n");
                goto loop1;
                break;
        }
    }
}
