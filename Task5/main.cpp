#include "Func.h"
int main()
{
    setlocale(LC_ALL, "RUS");

    size_t rows, columns;
    std::cout << "Введите кол-во строк и столбцов: ";
    std::cin >> rows >> columns;
    int** A = Create(rows, columns);
    FillRandomNumbers(A, rows, columns);
    Print(A, rows, columns);
    Free(A, rows);
    return 0;
}