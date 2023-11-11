#include <iostream>
template <typename T>
class Pair {
private:
	T firstObject, secondObject;
public:
	void set(T f1, T s1) {
		firstObject = f1;
		secondObject = s1;
	}
	void Show() {
		std::cout << "First element = " << firstObject << std::endl;
		std::cout << "Second element = " << secondObject << std::endl;
	}
};



int main() {
	Pair<int> integerus;
	integerus.set(-234, 534.6780);
	std::cout << "Integer elements : "<< std::endl;
	integerus.Show();
	std::cout << std::endl;
	Pair<double> doublucus;
	doublucus.set(43.654, -0.43422);
	std::cout << "Double elements : " << std::endl;
	doublucus.Show();
	std::cout << std::endl;
	Pair<char> charnicus;
	charnicus.set('F', 's');
	std::cout << "Char elements : " << std::endl;
	charnicus.Show();
	return 0;
}