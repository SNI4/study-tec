#include "cone.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    // Создание объектов конусов
    Cone cone1(2.0, 5.0);
    Cone cone2(1.0, 3.0, 2.0, 4.0, 6.0);

    // Вывод информации о площади поверхности и объеме первого конуса
    cout << "Площадь поверхности конуса 1: " << cone1.surfaceArea() << endl;
    cout << "Объем конуса 1: " << cone1.volume() << endl;

    // Вывод информации о площади поверхности и объеме второго конуса
    cout << "Площадь поверхности конуса 2: " << cone2.surfaceArea() << endl;
    cout << "Объем конуса 2: " << cone2.volume() << endl;

    // Создание и ввод данных для третьего конуса
    Cone* cone3 = new Cone();
    cone3->input();
    cone3->output();

    // Вывод информации о площади поверхности и объеме третьего конуса
    cout << "Площадь поверхности конуса 3: " << cone3->surfaceArea() << endl;
    cout << "Объем конуса 3: " << cone3->volume() << endl;
    delete cone3;

    // Создание и вывод информации о нескольких конусах
    const int numCones = 2;
    Cone cones[numCones] = {
        Cone(0.0, 0.0, 0.0, 2.0, 3.0),
        Cone(1.0, 1.0, 1.0, 4.0, 5.0)
    };
    for (int i = 0; i < numCones; i++) {
        cones[i].output();
        cout << "Площадь поверхности: " << cones[i].surfaceArea() << endl;
        cout << "Объем: " << cones[i].volume() << endl;
    }

    return 0;
}
