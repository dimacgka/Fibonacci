#include <iostream>
using namespace std;
 
int fib(int n)
{
    if(n < 3)
        return 1;
    return fib(n - 2) + fib(n - 1);
}
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 0;
 
    cout << "Введи число:\n> ";
    cin  >> n;
 
    int *arr = new int[n];
 
    for(int i = 0; i < n; i++)
    {
        arr[i] = fib(i + 1);
        std::cout << "Fib[" << i + 1 << "]: " << arr[i] << "\n";
    }
 
    delete [] arr;
    system("pause");
 
    return 0;
}