// demo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

using namespace std;

void hello()
{
	cout << "Hello concurrent world." << endl;
}

void do_something()
{
	cout << "work 1 done." << endl;
}

void do_something_else()
{
	cout << "work 2 done." << endl;
}

void keep_doing_work()
{
	while
}


int main()
{
    std::cout << "Hello World!" << endl;

	thread t1(hello);

	t1.join();

	thread t2_lambda([] {
		do_something();
		do_something_else();
		}
	);

	t2_lambda.join();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
