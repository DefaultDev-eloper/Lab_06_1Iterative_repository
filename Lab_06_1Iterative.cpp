#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* b, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}

void Print(int* b, const int size){
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int Count(const int* b, const int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && b[i] <= 0)
			count++;
	return count;
}

int Sum(const int* b, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && b[i] <= 0)
			S += b[i];
	return S;
}

void Zero(int* b, const int size) {
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && b[i] <= 0)
			b[i] = 0;
}

int main() {

	srand((unsigned)time(NULL));

	const int size = 24;
	int b[size];

	int Low = -15;
	int High = 75;

	Create(b, size, Low, High);
	cout << "Original array: ";
	Print(b, size);
	cout << endl;

	int count = Count(b, size);
	int sum = Sum(b, size);

	Zero(b, size);   

	cout << "Count of the elements: " << count << endl;
	cout << "Sum of the elements: " << sum << endl;

	cout << endl;
	cout << "Modified array: ";
	Print(b, size);

	return 0;
}