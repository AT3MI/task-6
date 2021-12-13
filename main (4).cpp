#include <iostream>
#include <locale>
using namespace std;
int maxCol(int**, int, int);
int main()
{
    setlocale(LC_ALL, "rus");
    while (true)
    {
        float menuu;
        cout << "Нажмите 1 - для решения задания, 0 - для выхода: ";
        cin >> menuu;
    
        if (menuu == 0) break;
        else if (menuu == 1)
        {
    
            const int mn = 1, mx = 10;
            // двумерный динамический массив n x m заполненный случайными числами из заданного выше диапазона
            int n, m, a, b;
            srand((int)time(0));
            cout << "Задайте число строк матрицы> ";
            cin >> n;
            cout << "Задайте число столбцов матрицы> ";
            cin >> m;
            a = n - 1;
            b = m;
            int* *mas = new int*[n];
            int* *mas2 = new int*[a];
            cout << "Исходная матрица: "<< endl;
            for (int i = 0; i < n; i++)
            {
                mas[i] = new int[m];
                for(int j = 0; j < m; j++)
                {
                    mas[i][j] = rand() % (mx - mn + 1) + mn;
                    cout << mas[i][j] << "\t";
                }
                cout << endl;
            }
            cout << "Преобразованная матрица: " << endl;
            //последняя строка, которая вычиталась из всех остальных, не выводится
            for (int x = 0; x < (n - 1); x++)
            {
                mas2[x] = new int[b];
                for (int q = 0; q < m; q++)
                {
                    mas2[x][q] = mas[x][q] - mas[m - 1][q];
                    cout << mas2[x][q] << "\t";
                }
                cout << endl;
            }
        }
    }
    return 0;
}

