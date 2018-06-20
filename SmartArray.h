#include<cstdlib>
#include<ctime>
using namespace std;
class SmartArray{
	
	public:
		int size;
		int *arr;
		
		SmartArray(int *tab,int size);
		SmartArray(int size)
		{
			srand(time(NULL));
			arr = new int [size];
			for(int i = 0; i < size; i ++)
			{
				arr[i] = rand();
			}
		}
		void maxValue();
		void minValue();
		void ifSorted();
		void sortArray();
		void shuffleArray();
		void showValue();
		void showArray();
};

void function()
{
	cout<<"function is working"<<endl;
}
