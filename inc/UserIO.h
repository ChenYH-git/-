#ifndef _USERIO_H_
#define _USERIO_H_
#include<iostream>
using namespace std;

class UserIO
{
private:
    /* data */
public:


    int getQuestionAmount(); // 获取题目数量
    int getGrade(); // 获取年级
    double getUserAnswer();// 获取用户答案

    void putStringPoly(string poly);// 打印多项式字符串 如 89 - (84-4) =?
    void putRes(int num);// 输出错误题数
};

#endif