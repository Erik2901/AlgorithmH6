
#include <iostream>



void ex1(int *arr[], int ll)
{
    int temp = 0;
    for (size_t j = 0; j < ll; ++j)
    {
        for (size_t u = 0; u < ll; ++u)
        {
            for (size_t z = 0; z < ll; ++z)
            {
                for (size_t i = 0; i < ll; ++i)
                {
                    if (i + 1 == ll && z + 1 == ll)
                    {
                        continue;
                    }
                    else
                    {
                        if (i + 1 == ll && arr[z][i] > arr[z + 1][0])
                        {
                            temp = arr[z][i];
                            arr[z][i] = arr[z + 1][0];
                            arr[z + 1][0] = temp;
                        }
                        else
                        {
                            if (arr[z][i] > arr[z][i + 1])
                            {
                                temp = arr[z][i];
                                arr[z][i] = arr[z][i + 1];
                                arr[z][i + 1] = temp;
                            }
                        }
                    }
                }
            }
        }
    }
    for (size_t i = 0; i < ll; i++)
    {
        for (size_t j = 0; j < ll; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

void ex2(int *numbers, int c)
{
    int y = 0;
    std::cout << "Enter 11 numbers:";

    for (size_t i = 0; i < c; i++)
    {
        std::cin >> numbers[i];
    }

    for (size_t i = 0; i < c; i++)
    {
        while (numbers[i])
        {
            y = y * 10 + numbers[i] % 10;
            numbers[i] /= 10;
        }
        numbers[i] = y;
        y = 0;
    }

    for (size_t i = 0; i < c; i++)
    {
        if (sqrt(fabs(numbers[i])) + 5 * pow(numbers[i], 3) >= 400)
        {
            std::cout << "Number " << i + 1 << " is more than 400" << std::endl;
        }
    }
}

int main()
{
    /// exercise 1
    const int ll = 3;
    int arr[ll][ll] = { {1,9,2}, 
                        {5,7,6},
                        {4,3,8} };
    int* parr[ll];

    for (size_t i = 0; i < ll; i++)
    {
        parr[i] = arr[i];
    }

    ex1(parr, ll);

    ////////
    
    //// exercise 2
    const int c = 11;
    int numbers[c];

    ex2(numbers, c);

    ////////
    
    system("pause");
    return 0;
}

