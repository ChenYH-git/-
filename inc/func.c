#include "func.h"

int HandleInputGrade(string grade) {
    string gradeNum[6] = {"一年级", "二年级", "三年级", 
        "四年级", "五年级", "六年级"};
    int flag;
    for (int i = 0; i < 6; i++) {
        flag = grade.compare(gradeNum[i]);
        if (!flag) {
            return i+1;
        }
    }
}

int HandleInputGrade(String a) {
    cout<<"请输入你的年级"<<endl;
    cin>>a;
    if(a[0]=="一"||a[0]=="二"){
    	return 1;
	}
	else if(a[1]=="三"||a[2]=="四"){
    	return 3;
	}
	else if(a[1]=="五"||a[2]=="六"){
    	return 5;
	}
}
int HandleInputNum(int num){
	cout<<"请输入题目数"<<endl;
	cin >> num;
	return num;
}
double HandleInputAnswer(int num){
	double ans;
	cin>>ans;
	return ans;
}
void HandleOutput(){
		if(tofnum==0){
		cout<<"结束！全部正确，太棒了！"<<endl;
	}
	else{
		cout<<"结束！错了 "<<tofnum<<" 题哦"<<endl;
	}
}
bool Judge(double res, double userRes) {
    if（res==userRes）
    {
        return 1;
    }
    else
    {
        return 0;
    }
}	


int Level_12(data quesdata) {
    int i;
    for ( i = 1; 2*i - 1 < quesdata.Strnum; i++)
    {
        if (quesdata.num[2 * i - 1] == plus)
        {
            quesdata.num[2 * i] = quesdata.num[2 * i] + quesdata.num[2 * i - 2];
       }
        else if (quesdata.num[2 * i - 1] == minus)
        {
            quesdata.num[2 * i] = quesdata.num[2 * i - 2] - quesdata.num[2 * i];
        }
       
    }
    return quesdata.num[quesdata.Strnum];
}

int Level_34(data quesdata) {
	int num[10]={0};
	int top=0;
	int flag=0;
	while(flag<quesdata.Strnum)
	{
		if(flag%2==0)
		{
			if(num[top-1]>10000&&top>0)
			{
				if(num[top-1]-10000==div)
				{		
					num[top-2]/=quesdata.num[flag];
					top--;
				}
				if(num[top-1]-10000==multi)
				{
					num[top-2]*=quesdata.num[flag];
					top--;
				}
			
				if(num[top-1]-10000==plus||num[top-1]-10000==minus)
				{
					num[top]=quesdata.num[flag];
					top++;
				}	
			}
			else
			{
				num[top]=quesdata.num[flag];
				top++;
			}
		}
		else
		{
			num[top]=quesdata.num[flag]+10000;
			top++;
		}	
		flag++;
	}
	int sum=num[0];
	for(int i=1;i<top;i+=2)
		{
			if(num[i]-10000==1)
			{
				sum+=num[i+1];
			}
			if(num[i]-10000==2)
			{
				sum-=num[i+1];
			}
		}
		return sum;
}
 #include<stack>
 string list56(quesdata){
 	
 	//将 问题 例如：89 -（ 84 - 4 ) 转化为字符串 
 }
 double Level_56() {
 	 string question=list56(quesdata);
        vector<int> stk;
        char preSign = '+';
        int num = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (isdigit(question[i])) {
                num = num * 10 + double(question[i] - '0');
            }
            if (!isdigit(question[i]) && question[i] != ' ' || i == n - 1) {
                switch (preSign) {
                    case '+':
                        stk.push_back(num);
                        break;
                    case '-':
                        stk.push_back(-num);
                        break;
                    case '*':
                        stk.back() *= num;
                        break;
                    default:
                        stk.back() /= num;
                }
                preSign = question[i];
                num = 0;
            }
        }
        return accumulate(stk.begin(), stk.end(), 0);
    }




double GenQuestion(int level) {
    // 生成一个4以下，2以上的随机数表示多少个数的四则运算，然后生成对应个随机数作为运算数据，另外生成一个1~4的随机数表示加减乘除  
    int strnum; 
    double res;
    strnum = rand() % 4;
    leng = strnum*2;
    int i;
    quesdata.Strnum = leng-1;
    if ( level == 1 || level == 2 ){
	for(i=0;i+2<leng;i+=2){
    	quesdata[i] = rand() % 100;
    	quesdata[i+1] = rand() % 4;
	}
	}
    
    else if( level == 3 || level == 4 ){
    		for(i=0;i+2<leng;i+=2){
    	quesdata[i] = rand() % 10000;
    	quesdata[i+1] = rand() % 4;
	}
    }
    
    else if ( level == 5 || level == 6 ){
    	for(i=0;i+2<leng;i+=2){
    	quesdata[i] = rand() % 10000;
    	quesdata[i+1] = rand() % 4;
	}
	}
    
    if ( level == 1 || level == 2 )
        res = Level_12();
    else if( level == 3 || level == 4 )
        res = Level_34();
    else if ( level == 5 || level == 6 )
        res = Level_56();
    
    return res;
}
