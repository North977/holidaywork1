#include<iostream>
#include<cstdio>
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
void opera(char x[])
{
	using namespace std;
	char m[20], n[20], s[20];
	while (1) {
		cin >> m;
		if (strcmp(m, "看看") == 0) break;
		if (strcmp(m, x) != 0) {
			cout << "输入错误" << endl; break;
		}
		cin >> n >> s;
		if (strcmp(n, "增加") == 0)
			integer = integer + convert0(s);
		else if (strcmp(n, "减少") == 0)
			integer = integer - convert0(s);
		else if (strcmp(n, "乘以") == 0)
			integer = integer * convert0(s);
		else if (strcmp(n, "除以") == 0)
			integer = integer / convert0(s);
		else {
			cout << "输入错误" << endl; break;
		}
	}
}

int main(void)
{
	using namespace std;
	char a[20], x[20], b[20], y[20], h[20];
	cin >> a >> x >> b >> y;
	if (strcmp(a, "整数") != 0 || strcmp(b, "等于") != 0)
		cout << "输入错误" << endl;
	integer = convert0(y);
	opera(x);
	cin >> h;
	if (integer > 99 || integer < 0)
		cout << "超出范围";
	else if (integer >= 0 && integer < 11)
		cout << num[integer];
	else if (integer > 11 && integer < 20)
		cout << "十" << num[integer % 10];
	else if (integer > 19 && integer % 10 == 0)
		cout << num[integer / 10] << "十";
	else if (integer > 19 && integer % 10 != 0)
		cout << num[integer / 10] << "十" << num[integer % 10];
	return 0;
}