#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

template<typename T> class array{

private:
	int sz;
	T* var;
	
public:
	array();
	array(int i);

	~array();
	void set(int a, T n);
	T at(int i);
	void print();
	void print(int i);
	void push_back(T n);
	void pop_head();

	int len();
		
	array(std::initializer_list<T> list) : array(list.size())
	{
		int t = 0;
		for(auto i : list)
		{
			var[t] = i;
			++t;
		}
	}

	
	
};
template<typename T> int array<T>::len()
{
	return sz;
}
template<typename T> void array<T>::push_back(T n)
{
	var = (T*) realloc(var, sizeof(T));
	++sz;
	var[sz - 1] = n;
}

template<typename T> void array<T>::pop_head()
{
	--sz;
	T* nye = (T*) malloc (sz * sizeof(T));
	for(int i = 0; i < sz; ++i)
		nye[i] = var[i];
	var = nye;
}

template<typename T> void array<T>::print()
{
	for(int i = 0; i < sz; ++i)
		std::cout << var[i] << std::endl;
}
	
	template<typename T> void array<T>::print(int i)
	{
		try
		{
			if(i < 0 || i > sz)
				throw(i);
			std::cout << var[i] << std::endl;
		
		}
		catch(int i)
		{
			std::cout << i << " er ikkje  gyldig indeks" << std::endl;
		}
	}

template<typename T> void array<T>::set(int i, T b)
{
	try
	{
		if(i < 0 || i > sz)
			throw(i);
		var[i] = b;
	}
	catch(int i)
	{
		std::cerr << i << " er ikkje gyldig indeks" << std::endl;
	}
			
	

}

template<typename T> T array<T>::at(int i)
{
	try
	{
		if(i > sz || i < 0)
			throw(i);
		return var[i];
	}
	catch(int i)
	{
		std::cerr << i << " er ikkje gyldig indeks. indeks er: " << sz << std::endl;
	}
}

template<typename T> array<T>::array()
{
	std::cout << "hei" <<std::endl;
}

template<typename T> array<T>::array(int len)
{
	sz = len;
	var = new T[len];
}

template<typename T> array<T>::~array()
{
	if(var != nullptr)
	{
		delete[] var;
	}
}


int main()
{

	int storr = 10;
	array<int> a = {1,2,4};

	std::cout << a.len() << std::endl; 
}


