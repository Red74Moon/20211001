//1. �̸��� Test�̰� ũ�Ⱑ 10�� �迭�� �����ϰ�
//2. for���� �̿��Ͽ� 1~10�� ���� ���ʷ� �����Ͻÿ�.
//3. ������ ���� for���� �̿��Ͽ� ���ʴ�� ����Ͻÿ�.

#include <iostream>

using namespace std;

int main()
{
	int Test[10];

	for (int i = 0; i < 10; ++i)
	{
		Test[i] = i + 1;
		cout << Test[i] << endl;
	}
	return 0;
}