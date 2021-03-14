#include "menu.h"

int choose_action(int *act)
{
    printf("\nЧто Вы хотите сделать?\n\n1) Ввести целые числа в 2 стека\n2) Вывести элементы стеков\n"
        "3) Отсортировать все введенные данные\n4) Удалить последний элемент стека\n"
        "5) Добавить элемент в конец стека\n6) Сравнительный анализ алгоритмов\n"
        "7) Справка\n8) Выход\n\nВаш ответ: ");
    if (scanf("%d", act) != 1 || (*act != CREATE && *act != PRINT && *act != SORT &&
        *act != ANALYS && *act != INFO && *act != POP && *act != PUSH && *act != EXIT)
        || getchar() != '\n')
    {
        printf("\nОшибка: команда должна быть одним из чисел, предложенных в меню.\n");
        return ERR_ACT;
    }
    return EXIT_SUCCESS;
}

int choose_stack(int *act)
{
    printf("\nВыберите стек для выполнения операции:\n\n1) Первый\n2) Второй\n\nВаш ответ: ");
    if (scanf("%d", act) != 1 || (*act != 1 && *act != 2) || getchar() != '\n')
    {
        printf("\nОшибка: команда должна быть одним из чисел, предложенных в меню.\n");
        return ERR_ACT;    
    }
    *act += 10;
    return EXIT_SUCCESS;
}

int choose_stack_type(int *act)
{
    printf("\nВыберите тип организации стеков:\n\n1) В виде массива\n2) В виде списка\n\nВаш ответ: ");
    if (scanf("%d", act) != 1 || (*act != 1 && *act != 2))
    {
        printf("\nОшибка: команда должна быть одним из чисел, предложенных в меню.\n");
        return ERR_ACT;
    }
    *act += 8;
    return EXIT_SUCCESS;
}

void info(void)
{
    printf("\n\n\nДанная программа работает со стеком, реализуя программы добавления элемента в конец "
    "стека, исключение последнего элемента стека, \nа также просмотр текущего состояния стека.\n\n"
    "Стек реализуется двумя способами: в виде массива и в виде односвязного линейного списка.\n\n"
    "Программа позволяет ввести 2 стека в одном из предложенных видов организации и, \nиспользуя третий "
    "массив, сортирует все введенные данные.\n\n"
    "Автор программы: Сироткина Полина, ИУ7-36Б.\nДата: 15.11.2020\n\n\n");
}