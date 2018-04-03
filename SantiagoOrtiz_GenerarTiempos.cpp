#include <iostream>
#include <ctime>

using namespace std;

int fibonacci(int N);
float get_time(int N);
int main()
{
	int N=4;
	
	for(int i=0;i<35;i++)
	{
		
		cout << i <<","<< get_time(i) << endl;
		
	}	
	
	return 0;
}

int fibonacci(int N)
{
	if(N==0)
	{
		return 0;	
	} 
	if(N==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(N-2)+fibonacci(N-1);
	}

}

float get_time(int N)
{
	clock_t t;
	t = clock();	
	fibonacci(N);
	t = clock() - t;
	float time = ((float)t)/CLOCKS_PER_SEC;
	return time;
}


