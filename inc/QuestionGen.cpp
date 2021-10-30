#include"QuestionGen.h"
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>

void QuestionGen :: GenBasePoly(int level){
    // 生成多项式字符串
	int i;
	int snum;
	int fuhao;
	string str;	
	int num1;
	char mid[100];//作为转换成字符串载体 
	double num2;
	srand(time(0));
	
	snum=rand()%(5-2)+2;

	while(snum<2)snum++;
	
	if ( level == 0 ){
	for(i=1;i<snum;i++){
    	num1= rand() % 100;
    	sprintf(mid,"%d",num1);
    	str.append(mid);
    	memset(mid,'\0',sizeof(mid));
    	fuhao= rand() % 2;
    	switch(fuhao){
    		case 0:
    		str.append("+");break;
    		case 1:
    		str.append("-");break;
		}
	}
	num1= rand() % 100;
    sprintf(mid,"%d", num1);
    str.append(mid);
    memset(mid,'\0',sizeof(mid));
	}
    
    else if( level == 1 ){
    	for(i=1;i<snum;i++){
    	num1= rand()% 10000;
    	sprintf(mid, "%d" ,num1);
    	str.append(mid);
    	memset(mid,'\0',sizeof(mid));
    	fuhao= rand() % 4;
    	switch(fuhao){
    		case 0:
    		str.append("+");break;
    		case 1:
    		str.append("-");break;
    		case 2:
    		str.append("*");break;
    		case 3:
    		str.append("/");break;
		}
	}
	num1= rand() % 10000;
    	sprintf(mid,"%d",num1);
    	str.append(mid);
    	memset(mid,'\0',sizeof(mid));
    }
    
    else if ( level == 2 ){
    	for(i=1;i<snum;i++){
    	num2= 0+ 1.0 * ( rand() % RAND_MAX ) / RAND_MAX * ( 10000 - 0);
    	gcvt(num2,6,mid);
    	str.append(mid);
    	memset(mid,'\0',sizeof(mid));
    
    	fuhao= rand() % 4;
    	switch(fuhao){
    		case 0:
    		str.append("+");break;
    		case 1:
    		str.append("-");break;
    		case 2:
    		str.append("*");break;
    		case 3:
    		str.append("/");break;
		}
	}
	num2= 0+ 1.0 * ( rand() % RAND_MAX ) / RAND_MAX * ( 10000 - 0);
    	gcvt(num2,6,mid);
    	str.append(mid);
    	memset(mid,'\0',sizeof(mid));
	}
	basePoly = str;
 
};

void QuestionGen :: UpgradePoly(){
    // 为多项式字符串添加括号
    string poly = basePoly;
    int len=poly.length();
    int m=0;
    int i=0;
    int cnt=0;
    for(i=0;i<len;i++){
    	if(poly[i]=='+'||poly[i]=='-'||poly[i]=='*'||poly[i]=='/'){
    		cnt++;
		}	
	}
	if(cnt==3){
		for(i=0;i<len;i++){
    	if(poly[i]=='+'||poly[i]=='-'||poly[i]=='*'||poly[i]=='/'){
    		poly.insert(i+1,1,'(');break;
		}	
	} 
	int flag=0;
	for(m=0;m<len;m++){
	
		if(poly[m]=='+'||poly[m]=='-'||poly[m]=='*'||poly[m]=='/'){
			flag++;
		}
		if(flag==3){
			if(poly[m]=='+'||poly[m]=='-'||poly[m]=='*'||poly[m]=='/'){
			poly.insert(m,1,')');
			flag++;break;
			}
		}
	}
}  
	upgradedPoly=poly;
	
}

string QuestionGen::getPoly(int type,int level){
	if(level == 1 || level == 2) level = 0;
	if(level == 3 || level == 4) level = 1;
	if(level == 5 || level == 6) level = 2;
    GenBasePoly(level);
    UpgradePoly();

    switch (type)
    {
    case 0:
        return basePoly;
        break;
    
    case 1:
        return upgradedPoly;
        break;
    }

    return 0;
};
