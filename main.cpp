
#include <cstdio>
#include <cstdlib>
#include <d3dx9anim.h>

struct stu {
    int num;
    float score;
    struct stu *next;
};

stu *find() {
    return 0;
}

stu *add() {
    return 0;
}

stu *sort() {
    return 0;
}

//录入信息
stu *create() {
    //创建三个结构体指针 *head,*beforeStu,*AfterStu
    struct stu *head, *beforeStu, *afterStu;
    head = NULL;
    //分配内存
    beforeStu = afterStu = (struct stu *) malloc(sizeof(struct stu));
    //将输入传给beforeStu
    printf("请输入学号和成绩：");
    scanf("%d", &beforeStu->num);
    scanf("%f", &beforeStu->score);
    //如果while循环中的flageCnt == 1的话，将head指针指向beforeStu
    int flageCnt = 0;
    while (beforeStu->num) {
        flageCnt++;
        if (flageCnt == 1) {
            head = beforeStu;
        } else {
            beforeStu = afterStu;
        }
        //为befor分配内存
        afterStu = (struct stu*)malloc(sizeof(struct stu));
        //将afterStu的next指针指向beforeStu
        beforeStu->next = afterStu;
        //赋值给beforeStu
        printf("请输入学号和成绩：");
        scanf("%d", &afterStu->num);
        scanf("%f", &afterStu->score);
    }
    beforeStu->next = NULL;
    return head;
}

stu *print(stu *pStu) {
    struct stu *p;
    p = pStu;
    while (p != NULL) {
        printf("学号是：%d", p->num);
        printf("成绩是：%f", p->score);
        printf("/n");
        p = p->next;
    }
}

//修改信息
stu *cut(stu *pStu) {
    //获取学号
    //遍历链表
    //找到学号
    //修改信息
    //重新指向
    return 0;
}

void menu() {
    printf("欢迎进入这个bug很多的系统！\n\n");//用户指南
    printf("若想录入信息请输入1\n\n若想显示已录入信息请输入2\n\n若想修改（删除）某个学生的信息并显示请输入3\n\n");
    printf("若想修改（增加）信息并显示请输入4\n\n若想查询某一个学生的成绩请输入5\n\n若想成绩排序请输入6（由大到小）\n\n登出系统请输入0\n\n");
    printf("请选择您需要的操作：");
    int countSystemCnt, inputNumber, j = 0;
    struct stu *returnStu;
    scanf("%d", &inputNumber);
    while (inputNumber != 0) {
        if (inputNumber != 1 && countSystemCnt == 0) {
            while (inputNumber != 1) {
                printf("请先录入信息\n");
                scanf("%d", &inputNumber);
                if (inputNumber == 0) {
                    goto end;
                }
            }
        }
        switch (inputNumber) {
            case 1:
                returnStu = create();
                break;
            case 2:
                returnStu = print(returnStu);
                break;
            case 3:
                returnStu = cut(returnStu);
                break;
            case 4:
                returnStu = add();
                break;
            case 5:
                returnStu = find();
                break;
            case 6:
                returnStu = sort();
                break;
        }
        printf("请选择您需要的操作：");
        scanf("%d", &inputNumber);
        printf("\n");
        countSystemCnt++;
    }
    end:
    printf("已退出系统\n");
    //测试
}

int main() {
    menu();
    return 0;
}


