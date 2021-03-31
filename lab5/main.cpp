#include <iostream>
#include <string>

//5.1
#include "OutputFunction.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
//5.2
#include "User.h"
#include "PaidUser.h"
#include "Login.h"
//5.3
#include "ShowCheckWithDiscount.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"
#include "Product.h"


int main()
{
	//5.1
	std::string personFirstName = "g2";
	std::string personMiddleName = "Alexandrov";
	std::string personSurname = "Chichicov";
	Person* person = new Person(personFirstName, personMiddleName,
		personSurname);
	ShowName(*person);

	std::string studentFirstName = "Slava";
	std::string studentMiddleName = "Michalovich";
	std::string studentSurname = "Hrom";
	int numberRecordBook = 24;
	int receiptDate = 2021;
	Student* student = new Student(studentFirstName,
		studentMiddleName, studentSurname, numberRecordBook,
		receiptDate);
	ShowName(*student);

	std::string teacherFirstName = "Ivan";
	std::string teacherMiddleName = "Ivanovich";
	std::string teacherSurname = "Ivanin";
	std::string post = "math";
	Teacher* teacher = new Teacher(teacherFirstName,
		teacherMiddleName, teacherSurname, post);
	ShowName(*teacher);

	delete person;
	delete student;
	delete teacher;

	//5.2
	User** users = new User * [4]
	{
		new User(100000, "morkovka1995", "1995morkovka"),
		new User(100001, "ilon_mask", "X æ A-12"),
		new User(100002, "megazver", "password"),
		new User(100003, "yogurt", "ksTPQzSu"),
	};

	User** paidUsers = new User * [4]
	{
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
		new PaidUser(200001, "system_exe", "UgfkDGmU"),
		new PaidUser(200002, "RazorQ", "TBgRnbCP"),
		new PaidUser(200003, "schdub", "CetyQVID"),
	};
	std::string login = "megazver";
	std::string password = "password";
	User* loginedUser = Login(users, 4, login, password);
	std::cout << "Signed in as: " << loginedUser->GetLogin() << std::endl;

	login = "system_exe";
	password = "UgfkDGmU";
	User* loginedPaidUser = Login(paidUsers, 4,
		login, password);
	std::cout << "Signed in as: " << loginedPaidUser->GetLogin() << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete users[i];
	}
	delete[] users;

	for (int i = 0; i < 4; i++)
	{
		delete paidUsers[i];
	}
	delete[] paidUsers;

	//5.3
	const int arrayCount = 4;
	std::string names[arrayCount]
	{
		"xiaomi 124gt",
		"samsung 421",
		"dexp pi14.2",
		"lg 00254m"
	};
	Product** products = new Product * [arrayCount]
	{
		new Product(names[0], TV, 3100.0),
			new Product(names[1], TV, 150.0),
			new Product(names[2], TV, 2100.0),
			new Product(names[3], TV, 5000.0)
	};

	//TODO: Можно вместо PercentDiscount слева от равно написать DiscountBase, тогда это будет выглядеть как полиморфизм
	PercentDiscount* percentDiscount = new PercentDiscount(2.0, TV);
	ShowCheckWithDiscount(percentDiscount, products, arrayCount);
	delete percentDiscount;
	std::cout << std::endl;
	//TODO: Можно вместо CertificateDiscount слева от равно написать DiscountBase, тогда это будет выглядеть как полиморфизм
	CertificateDiscount* certificateDiscount = new CertificateDiscount(310.0, TV);
	ShowCheckWithDiscount(certificateDiscount, products, arrayCount);
	delete certificateDiscount;

	for (int i = 0; i < arrayCount; i++)
	{
		delete products[i];
	}
	delete[] products;
}