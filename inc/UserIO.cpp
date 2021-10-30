#include"UserIO.h"
#include <stdio.h>

int UserIO::getQuestionAmount(){
    cout << "请输入题目数量?" << endl;
    int a;
    cin >> a;
    return a; // 获取题目数量
}
int UserIO::getGrade(){
    int s;
    cout << "请输入你的年级?" << endl;
    cin >> s;
    return s; // 获取年级
};

double UserIO::getUserAnswer(){
     // 获取用户输入的答案
	double result;
	cin>>result;
	return result;
	
};

void UserIO::putStringPoly(string poly){
    // 输出自动生成的多项式
	cout<<poly<<endl;
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
