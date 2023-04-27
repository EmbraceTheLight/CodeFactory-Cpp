#include<iostream>
#include<stdlib.h>
#include<thread>
int i = 0;

void testThread()
{
	int num = 1000000;

	for (int n = 0; n < num; n++)
	{
		i = i + 1;
	}
}
int main()
{
	using std::cout;
	using std::endl;
	using std::thread;
	cout << "Start all threads." << endl;

	thread thread_test1(testThread);
	thread thread_test2(testThread);
	thread_test1.join();
	thread_test2.join();
	cout << "all threads joined." << endl;
	cout << "now i is " << i << endl;
	system("pause");
	return 0;
}