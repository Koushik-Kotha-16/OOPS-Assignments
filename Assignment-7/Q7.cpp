#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], r, c;

public:
    void getData()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void show()
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2)
{
    Matrix temp;

    if(m1.c != m2.r)
    {
        cout << "Multiplication not possible";
        return temp;
    }

    temp.r = m1.r;
    temp.c = m2.c;

    for(int i=0; i<temp.r; i++)
    {
        for(int j=0; j<temp.c; j++)
        {
            temp.a[i][j] = 0;
            for(int k=0; k<m1.c; k++)
            {
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    return temp;
}

int main()
{
    Matrix m1, m2, m3;

    cout << "Matrix 1:\n";
    m1.getData();

    cout << "Matrix 2:\n";
    m2.getData();

    m3 = m1 * m2;

    cout << "Result matrix:\n";
    m3.show();

    return 0;
}