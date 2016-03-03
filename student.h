#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct{
    char sno[10];
    char name[20];
    int building;
    int room;
    char className[10];
}StType;                    //�Զ���ѧ������

typedef struct node{
    StType data;
    struct node *next;
}NodeType;                  //�Զ�������ڵ�����

#endif // STUDENT_H_INCLUDED
