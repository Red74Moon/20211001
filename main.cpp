//1. �̸��� Test�̰� ũ�Ⱑ 10�� �迭�� �����ϰ�
//2. for���� �̿��Ͽ� 1~10�� ���� ���ʷ� �����Ͻÿ�.
//3. ������ ���� for���� �̿��Ͽ� ���ʴ�� ����Ͻÿ�.

#include <iostream>

using namespace std;

int main()
{
	int Test[10];
	int i = 0;
	bool Status = true;

	do
	{
		Test[i] = i + 1;
		
		cout << Test[i] << endl;

		++i;
	} while (i < 10);


//Process:

//	if(i < 10)
//	{
//		Test[i] = i + 1;
//		cout << Test[i] << endl;
//		++i;
//	} else
//	{
//		cout <<  endl;
//		cout << "Good Bye" << endl;
//		goto End;
//	}
//
//	goto Process;
//End:

	//while (Status)
	//{
	//	if (i == 10)
	//	{
	//		break;
	//	}
	//	Test[i] = i + 1;
	//	cout << Test[i] << endl;
 //		++i;
	//} 


	//for (int i = 0; i < 10; ++i)
	//{
	//	Test[i] = i + 1;
	//	cout << Test[i] << endl;
	//}
	return 0;
}