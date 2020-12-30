#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int userNumber = 0;

  while (true){
    std::cout << "Введите значение: ";
    std::cin >> userNumber;
    vec.push_back(userNumber);

    if(userNumber == -1){
      vec.pop_back();
    
      if (vec.size() > 20){
        vec.erase(vec.begin(), vec.begin() + (vec.size()-20));
      }
      if (vec.size() == 0){
        std::cout << "Вектор пуст\n";
      }
      else{
        for (int i = 0; i < vec.size(); ++i){
          std::cout << vec[i] << " ";
        }
        std::cout << std::endl;
      }
    }

  }

  
}

/*
Задача 3.

В базу данных, являющуюся вектором, с клавиатуры приходят целочисленные значения, и помещаются в конец. Однако, эта база может хранить только 20 элементов, а дальше необходимо будет удалять элементы, которые лежат в базе дольше всех. 

При вводе -1 с клавиатуры необходимо вывести всё содержимое базы данных (то есть 20 или менее элементов). При выводе элементы должны быть в том порядке, в котором они добавлялись в базу данных.

Попробуйте написать максимально оптимизированное решение данной задачи, чтобы совершалось как можно меньше расширений и перемещений элементов внутри вектора.
*/