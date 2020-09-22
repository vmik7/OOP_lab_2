#include <iostream>
#include <cmath>
using namespace std;

class square {
	private:
		
		// Ñòîðîíà êëàññà
		int a = 1;
		
		// Ïåðèìåòð
		int p;
		int calc_p() {
			return p = a * 4;
		}
		
		// Ïëîùàäü
		int s;
		int calc_s() {
			return p = a * a;
		}
		
		// Äèàãîíàëü
		double d;
		double calc_d() {
			return d = sqrt(2) * a;
		}
		
	public:
		
		// Êîíñòðóêòîð ïî óìîë÷àíèþ
		square() {
			set_a(1);
		}
		
		// Êîíñòðóêòîð ñ ïàðàìåòðàìè
		square(int side) {
			set_a(side);
		}
		
		// Êîíñòðóêòîð êîïèðîâàíèÿ
		square(const square& obj) {
			// set_a(obj.get_a());
		}
		
		
		// Ìåòîä èçìåíåíèÿ ñòîðîíû a
		void set_a(int val) {
			
			// Ïðîâåðêà íà âàëèäíîñòü
			if (val <= 0) {
				cout << "Îøèáêà! Óñòàíàâëèâàþ ñòîðîíó ðàâíîé 1" << endl;
				val = 1;
			}
			
			// Óñòàíàâëèâàåì ñòîðîíó a = val
			this->a = val;
			
			// Ïåðåñ÷èòûâàåì îñòàëüíûå ïàðàìåòðû
			this->calc_p();
			this->calc_s();
			this->calc_d();
			
			return;
		}
		
		// Äîñòóï ê ñòîðîíðå
		int get_a() {
			return a;
		}
		
		// Äîñòóï ê ïåðèìåòðó
		int get_p() {
			return p;
		}
		
		// Äîñòóï ê ïëîùàäè
		int get_s() {
			return s;
		}
		
		// Äîñòóï ê äèàãîíàëè
		int get_d() {
			return d;
		}
		
		// Äåñòðóêòîð
		~square();
};

int main() {
	square s1(10);
	cout << s1.get_a() << endl;
	
	

	return 0;
}
