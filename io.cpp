int HandleInputGrade(String a) {
    cout<<"����������꼶"<<endl;
    cin>>a;
    if(a[0]=="һ"||a[0]=="��"){
    	return 1;
	}
	else if(a[1]=="��"||a[2]=="��"){
    	return 3;
	}
	else if(a[1]=="��"||a[2]=="��"){
    	return 5;
	}
}
int HandleInputNum(int num){
	cout<<"��������Ŀ��"<<endl;
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
		cout<<"������ȫ����ȷ��̫���ˣ�"<<endl;
	}
	else{
		cout<<"���������� "<<tofnum<<" ��Ŷ"<<endl;
	}
}
	
	

