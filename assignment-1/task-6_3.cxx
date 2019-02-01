//
// Решение предполагает использование кучи.
//

/****************************************************************************
Задача 6_3. Тупики.

На вокзале есть некоторое количество тупиков, куда прибывают
электрички. Этот вокзал является их конечной станцией. Дано расписание
движения электричек, в котором для каждой электрички указано время ее
прибытия, а также время отправления в следующий рейс. Электрички в
расписании упорядочены по времени прибытия. Когда электричка прибывает,
ее ставят в свободный тупик с минимальным номером. При этом если
электричка из какого-то тупика отправилась в момент времени X, то
электричку, которая прибывает в момент времени X, в этот тупик ставить
нельзя, а электричку, прибывающую в момент X+1 — можно.

В данный момент на вокзале достаточное количество тупиков для работы по
расписанию.

Напишите программу, которая по данному расписанию определяет, какое
минимальное количество тупиков требуется для работы вокзала.

*Формат входных данных.* Вначале вводится n - количество электричек в
расписании. Затем вводится n строк для каждой электрички, в строке -
время прибытия и время отправления. Время - натуральное число от 0 до
10\^9. Строки в расписании упорядочены по времени прибытия.

*Формат выходных данных.* Натуральное число - минимальное количеством
тупиков.

*Максимальное* время: 50мс, память: 5Мб.

  in     | out
  -------|-----
  1      | 1
  10 20  | 

  in     | out
  -------|-----
  2      | 2
  10 20  | 
  20 25  | 

  in     | out
  -------|-----
  3      | 2
  10 20  | 
  20 25  | 
  21 30  | 

****************************************************************************/

#include <iostream>

int main()
{
    return 0;
}
