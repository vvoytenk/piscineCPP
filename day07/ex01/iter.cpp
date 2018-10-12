#include <iostream>

template<typename T>
void iter(T *p, size_t s, void(*f)(T))
{
	size_t i = -1;
	while (++i < s)
		f(p[i]);
}

template<typename T>
void check(T t)
{
	std::cout << t << std::endl;
}

int main(void) {
	char str[] = "helloworld!";
	int arr[] = {1, 12, 432, 65, 33, 91, 19};
	float fp[] = {1.1, 123.321, 4.6, 23.5, 9.11, 6.76};
	std::string s[] = {"blablabla", "toto", "vvoytenk"};
	::iter(str, 11, ::check);
	::iter(arr, 7, ::check);
	::iter(fp, 6, ::check);
	::iter(s, 3, ::check);

	return 0;
}