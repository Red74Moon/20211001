//1. 이름이 Test이고 크기가 10인 배열을 선언하고
//2. for문을 이용하여 1~10의 값을 차례로 대입하시오.
//3. 대입한 값을 for문을 이용하여 차례대로 출력하시오.

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