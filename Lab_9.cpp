//chirkov 9.7 lab
#include <iostream>
#include <math.h>
#include <locale>

using namespace std;


int main()
{
    setlocale(LC_ALL, ("Russian"));
    const int n = 4;

    int a[n][n] = {0};
    int b[n][n] = {0};

    double arif, t = 0, s = 0;

    for (int i = 0; i < n; i++)//запонение rnd
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] =rand()%9;
        }
    }

    printf_s("\nМатрица А\n"); //вывод А
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    cout << "Матрица В  " << endl;//вывод и создание В
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = 1e20;
            for (int k = 0; k < n; k++)
            {    
                
                for (int l = 0; l < n; l++)
                {

                    if ((k <= l + i - j) ||  (k <= -l + i + j))
                    {
                        if (a[k][l] < b[i][j])
                            b[i][j] = a[k][l];
                    }
                    /*if ((k <= j) || (k >= l + j - i && k < i + j - l) || (k <= l + j - i && k >= i + j - l))
                    {
                        if (a[k][l] < min)
                            min = a[k][l];
                    }*/
                    /*if (k <= j)
                    {
                        if (a[k][l] < min)
                            min = a[k][l];
                    }
                    else if (k >= l + j - i && k < i + j - l)
                    {
                        if (a[k][l] < min)
                            min = a[k][l];
                    }
                    else if (k < l + j - i && k >= i + j - l)
                    {
                        if (a[k][l] < min)
                            min = a[k][l];
                    }*/
                    /*if (!(k<l + j - i && k<i + j - l))
                    {
                        if (a[k][l] < min)
                            min = a[k][l];
                    }*/

                }



            }
            cout << b[i][j] << "\t";
        }

        cout << endl;
    }

     cout << endl << "/--------//--------//--------//--------//--------//--------//--------//--------//--------//--------/" << endl;



    cout << endl;
    cout << "Матрица В со средним значением  " << endl;
    cout << endl;

    float  с[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s = 0; t = 0;
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if ((k <= l + i - j) || (k <= -l + i + j))
                    {
                        s = s + a[k][l];
                        t++;
                    }
                }
            }
            с[i][j] = s*1.0 / t;
            cout << с[i][j] << "\t";
            с[i][j] = 0;
        }
        cout << endl;
    }

}

    




