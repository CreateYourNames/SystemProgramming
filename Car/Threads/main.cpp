//Threads
#include<iostream>
#include<thread>    //� ���� ���������� ��������� ������
using namespace std;
using namespace std::chrono_literals; //�� �����

bool finish = false;

void Plus() //Plus ���������
{
	while (!finish)
	{
		cout << "+ ";
		std::this_thread::sleep_for(1s);
	}
}
void Minus()
{
	while (!finish)
	{
		cout << "- ";
		std::this_thread::sleep_for(1s);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	//Plus();
	//Minus();
	//cout << Plus << endl;   //00007FF7675D1401
	std::thread plus_thread(Plus); //������ ������
	std::thread minus_thread(Minus);

	cin.get();
	finish = true;

	if(minus_thread.joinable())minus_thread.join();
	if (plus_thread.joinable())plus_thread.join();
	if (plus_thread.joinable())plus_thread.join();
	if (plus_thread.joinable())plus_thread.join();
}