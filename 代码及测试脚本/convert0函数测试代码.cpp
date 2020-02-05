#include<iostream>
#include<string>
char num[11][3] = { "零","一","二","三","四","五","六","七","八","九","十" };
int integer = 0;

int convert1(char wen[])
{
	using namespace std;
	int z;
	for (z = 0; z < 11; z++) {
		if (strcmp(num[z], wen) == 0)
			return z;
	}
}
int convert0(char wen[])
{
	using namespace std;
	char c[10], d[10];
	if (strlen(wen) == 2)
		return convert1(wen);
	else if (strlen(wen) == 4) {
		c[0] = wen[2];
		c[1] = wen[3];
		c[2] = '\0';
		if (convert1(c) != 10) {
			return convert1(c) + 10;
		}
		else {
			c[0] = wen[0];
			c[1] = wen[1];
			c[2] = '\0';
			return 10 * convert1(c);
		}
	}
	else if (strlen(wen) == 6) {
		c[0] = wen[4];
		c[1] = wen[5];
		c[2] = '\0';
		d[0] = wen[0];
		d[1] = wen[1];
		d[2] = '\0';
		return 10 * convert1(d) + convert1(c);
	}
}

int main(void)
{
	using namespace std;
	int x[20] = { 7,17,70,77,110 };
	char y[17][10] = { "七","十七","七十","七十七","一百一十" };
	int i,j=0, h = 0;
	for (i = 0; i < 5; i++) {
		if (x[i] == convert0(y[i])) {
			cout << y[i] << "		测试成功" << endl;
			h++;
		}
		else 
			cout << y[i] << "	测试失败，为异常测试数据" << endl;			
	}
	cout << endl;
	if (h == 5)
		cout << "测试通过，无异常数据" << endl;
	else cout << "出现异常测试数据" << endl;
}