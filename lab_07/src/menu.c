#include "../inc/menu.h"

int choose_act(int *act)
{
    printf("\nЧто вы хотите сделать?\n\n"
    "1) Ввести данные в систему из текстового файла\n"
    "2) Найти минимальный путь из одного города в другой\n"
    "3) Справка о программе\n"
    "4) Выход\n\nВаш ответ: ");
    if (scanf("%d", act) != 1 || (*act != INPUT && *act != SEARCH && *act != INFO && *act != EXIT) 
        || getchar() != '\n')
    {
        printf("\nОшибка: команда должна быть одним из чисел, предложенных в меню.\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

void show_info(void)
{
    printf("Данная программа реализует поиск минимального пути между заданными городами А и Б."
        "Существует 2 вида передвижения между городами - железные и шоссейные дороги.\n"
        "Минимальный путь может проходить как по железной, так и по шоссейной дорогам."
        "Места пересадок выводятся на экран. Результат выдается в графической форме.\n"
        "Информация о стоимостях прохождения между всеми городами задается в текстовом файле.\n"
        "\nАвтор: Сироткина Полина, ИУ7-36Б.\nДата: 14.12.2020\n");
}

void show_image_info(void)
{
    printf("\n\nГраф успешно сформирован.\n\nДля того, что получить представление графа в виде изображения, "
        "кликните по иконке с названием make_image.cmd в текущей директории."
        "\nPng-файл с соответствующим названием появится в директории images.\n");
}
