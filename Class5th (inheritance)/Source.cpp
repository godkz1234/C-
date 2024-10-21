#include <iostream>

using namespace std;

class Unit
{
protected:
	int health;
	int defense;
	int attack;

public:
	Unit()
	{
		cout << "Create Unit" << endl;
	}

	~Unit()
	{
		cout << "Release Unit" << endl;
	}
};


class Marine : public Unit
{
private:

public:
	Marine()
	{
		health = 40;
		defense = 2;
		attack = 6;

		cout << "Create Marine" << endl;
	}
	~Marine()
	{
		cout << "Release Unit" << endl;
	}

	void Show();

};

void Marine::Show()
{
	cout << "-Marine-" << endl;
	cout << "HP : " << health << endl;
	cout << "Attack : " << attack << endl;
	cout << "Defense : " << defense << endl;
}

class firebat : public Unit
{


public:
	firebat()
	{
		health = 50;
		defense = 1;
		attack = 16;

		cout << "Create firebat" << endl;
	}
	~firebat()
	{
		cout << "Release Unit" << endl;
	}

	void Show();
};

void firebat::Show()
{
	cout << "-FireBat-" << endl;
	cout << "HP : " << health << endl;
	cout << "Attack : " << attack << endl;
	cout << "Defense : " << defense << endl;
}

class ghost : public Unit
{


public:
	ghost()
	{
		health = 45;
		defense = 0;
		attack = 10;

		cout << "Create ghost" << endl;
	}
	~ghost()
	{
		cout << "Release Unit" << endl;
	}

	void Show();
};

void ghost::Show()
{
	cout << "-Ghost-" << endl;
	cout << "HP : " << health << endl;
	cout << "Attack : " << attack << endl;
	cout << "Defense : " << defense << endl;
}

int main()
{
#pragma region 캡슐화
	// 클래스 안에 서로 연관되어 있는 속성과
	// 기능들을 하나의 캡슐로 만들어 데이터를 외부로 보호하며,
	// 인터페이스 제공하여 사용자로 부터 내부에 있는 데이터를 
	// 사용하지 않고, 인터페이스를 사용할 수 있도록 설정하는 것입니다.

#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 
	// 있도록 설정해주는 기능입니다.

	// Unit unit;
	// Marine marine;
	// 
	// cout << "Unit의 메모리 크기 : " << sizeof(unit) << endl;
	// cout << "Marin의 메모리 크기 : " << sizeof(marine) << endl;

	// 클래스의 상속 관계에서 상위 클리스는 하위 클래스의 
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.

#pragma endregion

#pragma region 객체



	// Marine marine;
	// firebat firebat;
	// ghost ghost;
	// 
	// marine.Show();
	// firebat.Show();
	// ghost.Show();


#pragma endregion


	return 0;
}
