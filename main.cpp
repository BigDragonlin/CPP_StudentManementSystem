
#include <cstdio>
#include <cstdlib>

struct stu {
    int num;
    float score;
    struct stu *next;
};

stu * find() {
    return 0;
}

stu * add() {
    return 0;
}

stu * cut() {
    return 0;
}

stu * sort() {
    return 0;
}

stu * print() {
    return 0;
}

//录入信息
stu * create() {
    //创建三个结构体 s *head , *stuBefore *stuAfter
    struct stu *head, *stuBefore, *stuAfter;
    //给stuBefore, stuAfter分配内存
    stuBefore= stuAfter = (struct stu *) malloc(sizeof(struct stu));
    //将head初始化
    head = NULL;
    //获取用户输入的学号和成绩
    printf("请输入学号：");
    scanf("%d", &stuBefore->num);
    printf("请输入成绩：");
    scanf("%f", &stuBefore->score);
    //如果学号为0则退出while循环
    int flageNum = 0;
    while (stuBefore->num){
        //创建一个标记，每次循环都将标记置为0
        flageNum ++;
        //判断标记是不是为1
        if (flageNum == 1){
            //如果为1则将head指向stuBefore
            head = stuBefore;
        } else {
            //如果不为1则将stuAfter指向stuBefore
            stuAfter->next = stuBefore;
        }
//     给stuBefor从新开辟一块内存
        stuBefore = (struct stu *) malloc(sizeof(struct stu));
        //将stuAfer的next指向stuBefore。第一次执行时，stuAfter->next = stuBefore 就等于 head->next = stuBefore。因为他们的内存地址是一样的
        stuAfter->next = stuBefore;
        //获取用户输入的学号和成绩
        printf("请输入学号：");
        scanf("%d", &stuBefore->num);
        printf("请输入成绩：");
        scanf("%f", &stuBefore->score);
    }
    //将stuAfter的next指向NULL
    stuAfter->next = NULL;
    return head;
}

void menu() {
    printf("欢迎进入这个bug很多的系统！\n\n");//用户指南
    printf("若想录入信息请输入1\n\n若想显示已录入信息请输入2\n\n若想修改（删除）某个学生的信息并显示请输入3\n\n");
    printf("若想修改（增加）信息并显示请输入4\n\n若想查询某一个学生的成绩请输入5\n\n若想成绩排序请输入6（由大到小）\n\n登出系统请输入0\n\n");
    printf("请选择您需要的操作：");
    int countSystemCnt,inputNumber,j = 0;
    struct stu *returnStu;
    scanf("%d", &inputNumber);
    while (inputNumber != 0){
        if (inputNumber != 1 && countSystemCnt == 0){
            while (inputNumber != 1){
                printf("请先录入信息\n");
                scanf("%d", &inputNumber);
                if (inputNumber == 0){
                    goto end;
                }
            }
        }
        switch (inputNumber) {
            case 1:
                returnStu = create();
                break;
            case 2:
                returnStu = print();
                break;
            case 3:
                returnStu = cut();
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
        countSystemCnt ++;
    }
    end:
    printf("已退出系统\n");
    //测试
}

int main()
{
    menu();
    return 0;
}


