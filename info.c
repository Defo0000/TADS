#include "info.h"

void show_info(void)
{
	printf("Данная программа позволяет считывать данные о машинах(марка, страна-производитель, цена, цвет "
		"и состояние: новый - гарания в годах; нет - год выпуска, пробег, количество ремонтов, количество "
		"собственников) либо выбирать данные, указывая имя файла, содержащего сведения о машинах.\n\n"
		"Результат работы программы - вывод цены не новых машин указанной пользователем марки с одним "
		"предыдущим собственником, отсутствием ремонта в указанном пользователем диапазона цен.\n\n"
		"--------------------------------------------------------------------------------------------\n\n");
}

int choose_action(int *ans)
{
	printf("Что вы хотите сделать?\n\n"
		"1) Напечатать данные\n"
		"2) Отсортировать данные\n3) Добавить информацию о машине "
		"в конец таблицы\n4) Удалить данные по полю\n5) Выход\n6) Справка\n\nВаш ответ: ");
	if (scanf("%d", ans) != 1 || (*ans != PRINT && *ans != SORT 
		&& *ans != ADD && *ans != EXIT && *ans != DEL && *ans != HELP) || getchar() != (int)'\n')
	{
		printf("Ошибка ввода: необходимо ввести номер одного из предложенных вариантов.");
		return READ_ERR;
	}
	return EXIT_SUCCESS;
}

int choose_help(int *ans)
{
	printf("7) Просмотр отсортированной таблицы ключей при неотсортированной исходной таблице\n"
		"8) Вывод упорядоченной исходной таблицы\n"
		"9) Вывод исходной таблицы в упорядоченном виде, используя упорядоченную таблицу ключей\n"
		"10) Вывод результатов сравнения эффективности работы программы при обработке данных "
		"в исходной таблице и таблице ключей\n\nВаш ответ: ");
	if (scanf("%d", ans) != 1 || (*ans != H1 && *ans != H2 && *ans != H3 && *ans != H4) || getchar() != (int)'\n')
	{
		printf("Ошибка ввода: необходимо ввести номер одного из предложенных вариантов.");
		return READ_ERR;
	}
	return EXIT_SUCCESS;
}