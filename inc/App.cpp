#include"App.h"
#include"Judge.h"
#include <string.h>

void App::init(){
    userIO = UserIO();
    questionGen = QuestionGen();
    strManipulate = StrManipulate();
    
    grade = userIO.getGrade(); // 输入年级；
    num = userIO.getQuestionAmount(); // 输入题目数量；

};

void App::start(){
    string poly;
    double res;
    for(int i = 0; i<num;i++){
        poly = questionGen.getPoly(1,grade);
        userIO.putStringPoly(poly);
        userAnswer = userIO.getUserAnswer();
        res = strManipulate.calculate(poly);
        if(!Judge(res,userAnswer))wrongAmount++;
    }

    userIO.putRes(wrongAmount);
};