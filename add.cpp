#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "student.h"

extern NodeType *head;

void Add(){
    StType st;
    while(1){
        system("cls");
        printf("\n\n\n******************** 输 入 信 息 ********************\n");
        printf("\n请输入学生住宿信息\n\n");
        printf("学号：");
        scanf("%s",st.sno);
        printf("姓名：");
        scanf("%s",st.name);
        printf("楼号：");
        scanf("%d",&st.building);
        printf("房间号：");
        scanf("%d",&st.room);
        printf("班级名：");
        scanf("%s",st.className);
        NodeType *s,*r;
        r = head;
        while(r->next != NULL && strcmp(r->next->data.sno,st.sno)){
            r = r->next;
        }
        if(r->next != NULL && strcmp(r->next->data.sno,st.sno) == 0){         //存在重学号的记录，则提示相应信息
            printf("\t>>学号重复\n");
        }else{
            s = (NodeType *)malloc(sizeof(NodeType));//新建一个学生节点
            s->data = st;
            s->next = r->next;
            r->next = s;
            printf("新增的信息为：\n");
            printf("Record：   学号        姓名    楼号    房间号    班级名\n");
            printf("%18s%9s%6d%10d%13s\n",s->data.sno,s->data.name,s->data.building,s->data.room,s->data.className);
        }
        printf("是否继续追加(y/n)?");
        if(tolower(getch()) == 'n')
            break;
    }
}
