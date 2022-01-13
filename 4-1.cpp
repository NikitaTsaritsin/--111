#include <iostream>
#include <cmath>
#include <random>

using namespace std;

/**
 * \brief Проверка ввода размера массива.
 * \return Размер массива.
 */
size_t GetSize();

/**
 * \brief Вывод индексов элементов кратных 3 и 6.
 * \param myArray массив.
 * \param size размер массива.
 */
void PrintElementsIndexMultiples3And6(const int* myArray, const size_t size);

/**
 * \brief Заполнение массива случайными числами.
 * \param size размер массива.
 * \param minValue минимальное значение элементов массива.
 * \param maxValue максимальное значение элементов массива.
 * \return заполненный массив.
 */
int* FillRandomArray(size_t size, int minValue, int maxValue);

/**
 * \brief Вывод массива на консоль.
 * \param myArray массив.
 * \param size размер массива.
 */
void ArrayPrint(const int* myArray, size_t size);

/**
 * \brief Функция находит сумму отрицательных элементов.
 * \param myArray массив.
 * \param size размер массива.
 * \return Сумма отрицательных элементов.
 */
int SummOfNegativeElements(const int* myArray, const size_t size);

/**
 * \brief Замена элементов между минимум и максимумом на 0.
 * \param myArray массив.
 * \param size размер массива.
 * \param maxValue максимальное значение, которое может принимать элемент массива.
 * \param minValue минимальное значение массива.
 */
int* ElementsToZeroAmongMinAndMax(int* myArray, const size_t size, const int maxValue, const int minValue);

/**
 * \brief Метод, возвращающий заполненный пользователем массив.
 * \param size размер массива.
 * \param minValue минимальное значение элементов массива.
 * \param maxValue максимальное значение элементов массива.
 * \return заполненный массив.
 */
int* FillUserArray(size_t size);

/**
 * \brief Варианы ввода массива.
 */
enum class ArrayInputWay
{
    random,
    keyboard
};

/**
 * \brief Точка входа в программу.
 * \return 0, в случае успеха.
 */
int main()
{
    setlocale(LC_ALL, "Russian");
    size_t size = GetSize();

    if (size == 0)
        return 1;

    cout << "Как вы хотите заполнить массив?\n";
    cout << static_cast<int>(ArrayInputWay::random) << " - random,\n";
    cout << static_cast<int>(ArrayInputWay::keyboard) << " - keyboard.\n";
    cout << "Ваш выбор: ";
    int choice;
    cin >> choice;

    const auto chosen = static_cast<ArrayInputWay>(choice);
    int* myArray = nullptr;

    auto minValue = 0;
    auto maxValue = 0;
    cout << "Введите диапазон чисел массива (сначала минимум, потом максимум) " << endl;
    cin >> minValue >> maxValue;
    if (maxValue <= minValue)
    {
        cout << "Введен неправильный диапазон!" << endl;
        return 1;
    }

    switch (chosen)
    {
    case ArrayInputWay::random:
    {
        myArray = FillRandomArray(size, minValue, maxValue);
        break;
    }
    case ArrayInputWay::keyboard:
    {
        myArray = FillUserArray(size);
        break;
    }
    }

    ArrayPrint(myArray, size);

    cout << "Сумма отрицательных элементов массива: " << SummOfNegativeElements(myArray, size);


    PrintElementsIndexMultiples3And6(myArray, size);

    cout << "Заменённый массив";
    myArray = ElementsToZeroAmongMinAndMax(myArray, size, maxValue, minValue);
    ArrayPrint(myArray, size);

    if (myArray != nullptr) {

        delete[] myArray;
        myArray = nullptr;

    }
    return 0;

}

size_t GetSize()
{
    int size = 0;
    cout << "Введите размер массива" << endl;
    cin >> size;
    if (size <= 0)
    {
        cout << "Введён неверный размер";
        return 0;
    }
    else
        return size;
};

void PrintElementsIndexMultiples3And6(const int* myArray, const size_t size)
{
    cout << "\n Индексы элементов, кратных 3 и 6: ";
    for (size_t index = 1; index < size; index++) {
        if ( myArray[index] % 6 == 0) {
            cout << index << " ";
        }
    }
    cout << "\n";
}

int SummOfNegativeElements(const int* myArray, const size_t size)
{
    int sum = 0;
    for (size_t index = 0; index < size; index++) {
        if (myArray[index] < 0)
            sum += myArray[index];
    }
    return sum;

}

int* ElementsToZeroAmongMinAndMax(int* myArray, const size_t size, const int maxValue, const int minValue)
{
    if (myArray == nullptr) {
        cout << "Массива не существует";
        return nullptr;
    }

    auto minArrayValue = maxValue;
    auto minElementIndex = 0;
    auto maxArrayValue = minValue;
    auto maxElementIndex = 0;
    auto firstindex = 0;
    auto lastindex = 0;

    for (size_t index = 0; index < size; index++) {
        if (myArray[index] < minArrayValue) {
            minArrayValue = myArray[index];
            minElementIndex = index;
        }
        if (myArray[index] > maxArrayValue) {
            maxArrayValue = myArray[index];
            maxElementIndex = index;
        }
    }

    for (size_t index = 0; index < size; index++) {
        if (index == minElementIndex || index == maxElementIndex) {
            firstindex = index;
            break;
        }
    }

    for (size_t index = 0; index < size; index++) {
        if ((index == minElementIndex || index == maxElementIndex) && index != firstindex) {
            lastindex = index;
            break;
        }
    }
    
    int* newArray = new int[size];
    newArray = myArray;
    
    for (firstindex = firstindex + 1; firstindex < lastindex; firstindex++) {
        newArray[firstindex] = 0;
    }
    return newArray;
}

void ArrayPrint(const int* myArray, const size_t size)
{
    if (myArray == nullptr)
    {
        cout << "Массива не существует";
    }
    else {
        cout << "\nМассив:\n";
        for (size_t index = 0; index < size; index++) {
            cout << myArray[index] << " ";
        }
        cout << "\n";

    }
}

int* FillRandomArray(const size_t size, const int minValue, const int maxValue)
{
    random_device rd;

    mt19937 gen(rd());

    const std::uniform_int_distribution<> uniformIntDistribution(minValue, maxValue);

    auto* myArray = new int[size];

    for (size_t index = 0; index < size; index++)
    {
        myArray[index] = uniformIntDistribution(gen);
    }
    return myArray;
}

int* FillUserArray(const size_t size)
{
    auto* array = new int[size];
    cout << "Введите элементы массива" << "\n";
    for (size_t index = 0; index < size; index++)
    {
        cin >> array[index];
    }
    return array;
}