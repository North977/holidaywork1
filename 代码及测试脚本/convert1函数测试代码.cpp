#include<iostream>
#include<string>
char num[11][3] = { "零","一","二","三","四","五","六","七","八","九","十" };

int convert1(char wen[])
{
	using namespace std;
	int z,i;
	for (z = 0,i=0; z < 11; z++,i++) {
		if (strcmp(num[z], wen) == 0) {
			return z; 
		}			
	}
}

int main()
{
	using namespace std;
	int x[12] = { 0,2,4,6,8,10,9,7,5,3,1 ,22};
	char y[12][9] = { "零","二","四","六","八","十","九","七","五","三","一","二十二" };
	int i, h = 0;
	for (i = 0; i < 12; i++) {
		if (x[i] == convert1(y[i])) {
			cout << y[i] << "	测试成功" << endl;
			h++;
		}
		else cout << y[i]	 << "	测试失败，为异常测试数据" << endl;
	}
	cout << endl;
	if (h == 12)
		cout << "测试成功" << endl;
	else cout << "出现异常测试数据" << endl;
	return 0;
}
