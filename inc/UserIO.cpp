#include"UserIO.h"
#include <stdio.h>

int UserIO::getQuestionAmount(){
    cout << "请输入题目数量";
    int a;
    cin >> a;
    return a; // 获取题目数量
}
string UserIO::getGrade(){
    return ""; // 获取年级
};

double UserIO::getUserAnswer(){
    return 0.0; // 获取用户输入的答案
};

void UserIO::putStringPoly(string poly){
    // 输出自动生成的多项式
};

void UserIO::putRes(int num){
    // 输出最终结果
    if(num==0)
	{
		printf("结束！全部正确，太棒了！");
	}
	else
	{
		printf("结束！错了 %d 题哦",num);
	}
};