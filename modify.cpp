#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Modify(){                                      //修改一个学生记录，只能次该除学号外的其他数据
    char sno[10];
    while(1){
        system("cls");
        printf("\n\n\n**********修 改 学 生 住 宿 信 息**********\n");
        printf("\n   请输入要修改学生的学号：");
        scanf("%s",sno);
        NodeType *s;
        s = head->next;
        while(s != NULL && strcmp(s->data.sno,sno) != 0){
            s = s->next;
        }
        if(s != NULL){
            printf("Record：   学号        姓名    楼号    房间号    班级名\n");
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            printf("\n\t真的要修改吗（y/n）?");
            if(tolower(getch()) == 'y'){
                printf("\n\t请输入新信息:\n");
                printf("姓名:");
                scanf("%s",s->data.name);
                printf("楼号:");
                scanf("%d",&s->data.building);
                printf("房间号:");
                scanf("%d",&s->data.room);
                printf("班级名:");
                scanf("%s",s->data.className);
                printf("\n处理后的结果:\n");
                printf("Record：   学号        姓名    楼号    房间号    班级名\n");
                printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
            }
        }else{
            printf("\t>>没有该学生的数据,无法进行修改操作!\n");
        }
        printf("是否继续修改(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}
