#ifndef _APP_H_
#define _APP_H_
#include<iostream>
#include "UserIO.h"
#include "QuestionGen.h"
#include"StrManipulate.h"
using namespace std;

class App
{
private:

    UserIO userIO;
    QuestionGen questionGen;
    StrManipulate strManipulate;

    int grade;
    int num;
    double userAnswer;
    int wrongAmount;

    /* data */
public:
    void init();
    void start();

};

#endif