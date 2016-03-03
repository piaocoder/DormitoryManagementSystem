#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct{
    char sno[10];
    char name[20];
    int building;
    int room;
    char className[10];
}StType;                    //自定义学生类型

typedef struct node{
    StType data;
    struct node *next;
}NodeType;                  //自定义链表节点类型

#endif // STUDENT_H_INCLUDED
