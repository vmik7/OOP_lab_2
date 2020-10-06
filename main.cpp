#include <iostream>
#include <cmath>
using namespace std;

class square {
    private:
    
        // Сторона класса
        int a = 1;
        
        // Периметр
        int p;
        int calc_p() {
            return p = a * 4;
        }
        
        // Площадь
        int s;
        int calc_s() {
            return p = a * a;
        }
        
        // Диагональ
        double d;
        double calc_d() {
            return d = sqrt(2) * a;
        }
    
    public:

        // Конструктор по умолчанию
        square() {
            set_a(1);
        }
        
        // Конструктор с параметрами
        square(int side) {
            set_a(side);
        }
        
        // Конструктор копирования
        square(const square& obj) {
        // set_a(obj.get_a());
        }
    
        // Метод изменения стороны a
        void set_a(int val) {
        
            // Проверка на валидность
            if (val <= 0) {
                cout << "Ошибка! Устанавливаю сторону равной 1" << endl;
                val = 1;
            }
            
            // Устанавливаем сторону a = val
            this->a = val;
            
            // Пересчитываем остальные параметры
            this->calc_p();
            this->calc_s();
            this->calc_d();
            
            return;
        }
        
        // Доступ к сторонре
        int get_a() {
            return a;
        }
        
        // Доступ к периметру
        int get_p() {
            return p;
        }
        
        // Доступ к площади
        int get_s() {
            return s;
        }
        
        // Доступ к диагонали
        int get_d() {
            return d;
        }
    
        // Деструктор
        ~square();
};

int main() {
    square s1(10);
    cout << s1.get_a() << endl;

    return 0;
} 
