#include<iostream>
#include<string>
char num[11][3] = { "��","һ","��","��","��","��","��","��","��","��","ʮ" };

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
	char y[12][9] = { "��","��","��","��","��","ʮ","��","��","��","��","һ","��ʮ��" };
	int i, h = 0;
	for (i = 0; i < 12; i++) {
		if (x[i] == convert1(y[i])) {
			cout << y[i] << "	���Գɹ�" << endl;
			h++;
		}
		else cout << y[i]	 << "	����ʧ�ܣ�Ϊ�쳣��������" << endl;
	}
	cout << endl;
	if (h == 12)
		cout << "���Գɹ�" << endl;
	else cout << "�����쳣��������" << endl;
	return 0;
}
