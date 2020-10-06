#include <iostream>
#include <cmath>
using namespace std;

class square {
    private:
    
        // Сторона класса
        int a = 1;
        
        // Периметр
        int p;
        void calc_p() {
            this->p = this->a * 4;
        }
        
        // Площадь
        int s;
        void calc_s() {
            this->s = this->a * this->a;
        }
        
        // Диагональ
        double d;
        void calc_d() {
            this->d = sqrt(2) * this->a;
        }
    
    public:

        // Конструктор по умолчанию
        square() {
           this->set_a(1);
        }
        
        // Конструктор с параметрами
        square(int side) {
            this->set_a(side);
        }
        
        // Конструктор копирования
        square(const square& obj) {
            this->set_a(obj.get_a());
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
        int get_a() const {
            return this->a;
        }
        
        // Доступ к периметру
        int get_p() const {
            return this->p;
        }
        
        // Доступ к площади
        int get_s() const {
            return this->s;
        }
        
        // Доступ к диагонали
        double get_d() const {
            return this->d;
        }
    
        // Деструктор
        ~square() {
            cout << "Запущен деструктор" << endl;
        }
};

int main() {
    // Проверяем конструктор по умолчанию
    square s0;
    cout << "Конструктор по умоляанию, стороона получилась: " << s0.get_a() << endl;
    
    // Проверяем свой конструктор
    square s1(10);
    cout << "В конструктор было передано значение 10, сторона получилась: " << s1.get_a() << endl;
    
    // Проверяем конструктор копирования
    square s2(s1);
    cout << "Конструктор копирования, стороона получилась: " << s2.get_a() << endl;
    
    cout << "\nИтого:\n";
    
    // Проверяем периметр, площадь, диагональ
    cout << "Сторона: " << s2.get_a() << endl;
    cout << "Периметр: " << s2.get_p() << endl;
    cout << "Площадь: " << s2.get_s() << endl;
    cout << "Диагональ: " << s2.get_d() << endl;
    
    // Меняем сторону
    cout << "\nПоменли сторону (теперь она 20)\n";
    s2.set_a(20);
    
    cout << "\nИтого:\n";
    
    // Проверяем периметр, площадь, диагональ
    cout << "Сторона: " << s2.get_a() << endl;
    cout << "Периметр: " << s2.get_p() << endl;
    cout << "Площадь: " << s2.get_s() << endl;
    cout << "Диагональ: " << s2.get_d() << endl;
    
    cout << "\nБыло создано 3 объекта, должно быть запущено 3 деструктора:\n";

    return 0;
} 
