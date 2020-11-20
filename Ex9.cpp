#include<iostream>
using namespace std;

void inputArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "Nhap vao mang so nguyen duong thu " << i + 1 << " : ";
			cin >> arr[i];
		} while (arr[i]<=0);
		
	}
}

int sumArr(int arr[], int k,int pos)
{
	int sum = 0;
	for (int i = pos; i <k ; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int sumMaxArr(int arr[], int n,int k)
{
	int h = k;
	int sum = 0;
	int max = sumArr(arr, k, 0);
	for (int i = 0; i < n-h+1; i++)
	{
		int sum = sumArr(arr,k, i);
		k++;
		if (sum >= max)
			max = sum;

	}
	return max;
}

int main()
{
	int arr[1000], n,k;
	do
	{
		cout << "Nhap vao so luong phan tu trong mang: ";
		cin >> n;
	} while (n <= 0);

	do
	{
		cout << "Nhap vao so phan tu muon cong : ";
		cin >> k;
		if (k > n)
			cout << "Vui long nhap lai so nho hon so luong phan tu..." << endl;
	} while (k<2||k>=n);
	inputArray(arr, n);
	int max = sumMaxArr(arr, n, k);
	cout << max;
	return 0;

}