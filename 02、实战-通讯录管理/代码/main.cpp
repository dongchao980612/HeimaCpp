#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <iostream>
#include <string>

using namespace std;

#define MAXSIZE 1000  //最大人数

// 联系人结构体
struct Person {
	string m_Name;	 //姓名
	int m_Sex;		 //性别：1男 2女
	int m_Age;		 //年龄
	string m_Phone;	 //电话
	string m_Addr;	 //住址
};

// 通讯录结构体
struct Addressbooks {
	struct Person m_PersonArray[MAXSIZE];	 //通讯录中保存的联系人数组
	int m_Size;							 //通讯录中人员个数
};

void press_key()
{
	cout << "Press any key to continue...\n";
	cin.get();
	// system("clear");
}

void addPerson(Addressbooks *abs)
{
	// 判断电话本是否满了
	if (abs->m_Size == MAXSIZE) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	} else {
		// 姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->m_PersonArray[abs->m_Size].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		// 性别
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->m_PersonArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "性别输入有误，请重新输入：";
		}

		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->m_PersonArray[abs->m_Size].m_Age = age;

		// 联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		while (true) {
			cin >> phone;
			if (phone.size() == 11) {
				abs->m_PersonArray[abs->m_Size].m_Phone = phone;
				break;
			}
			cout << "联系电话输入有误，请重新输入：";
		}

		// 家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->m_PersonArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		press_key();
	}
}

void showPerson(Addressbooks abs)
{
	if (abs.m_Size == 0) {
		cout << "当前记录为空" << endl;
	} else {
		for (int i = 0; i < abs.m_Size; i++) {
			cout << "姓名：" << abs.m_PersonArray[i].m_Name << "\t";
			cout << "性别：" << (abs.m_PersonArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs.m_PersonArray[i].m_Age << "\t";
			cout << "电话：" << abs.m_PersonArray[i].m_Phone << "\t";
			cout << "住址：" << abs.m_PersonArray[i].m_Addr << endl;
		}
	}

	press_key();
}

//判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1
int isExist(Addressbooks abs, string name)
{
	for (int i = 0; i < abs.m_Size; i++) {
		if (abs.m_PersonArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

// 3、删除指定联系人信息
void deletePerson(Addressbooks *abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(*abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++) {
			abs->m_PersonArray[i] = abs->m_PersonArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功" << endl;
	} else {
		cout << "查无此人" << endl;
	}

	press_key();
}

// 4、查找指定联系人信息
void findPerson(Addressbooks abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs.m_PersonArray[ret].m_Name << "\t";
		cout << "性别：" << abs.m_PersonArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs.m_PersonArray[ret].m_Age << "\t";
		cout << "电话：" << abs.m_PersonArray[ret].m_Phone << "\t";
		cout << "住址：" << abs.m_PersonArray[ret].m_Addr << endl;
	} else {
		cout << "查无此人" << endl;
	}

	press_key();
}

// 5、修改指定联系人信息
void modifyPerson(Addressbooks *abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(*abs, name);
	if (ret != -1) {
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->m_PersonArray[ret].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		//性别
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->m_PersonArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->m_PersonArray[ret].m_Age = age;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->m_PersonArray[ret].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->m_PersonArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	} else {
		cout << "查无此人" << endl;
	}

	press_key();
}

void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	press_key();
}

void showMenu()
{
	cout << "\n===== 图书馆管理系统 =====" << endl;
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "0、退出通讯录" << endl;
	cout <<"==========================" << endl;
	cout <<"请输入操作编号：" << endl;
}

int main(int argc, char const *argv[])
{
	//创建通讯录
	Addressbooks abks;
	abks.m_Size = 0;  //初始化通讯录中人数

	int select = 0;

	while (true) {
		showMenu();

		cin >> select;

		switch (select) {
			case 1:	 //添加联系人
				addPerson(&abks);
				break;
			case 2:	 //显示联系人
				showPerson(abks);
				break;
			case 3:	 //删除联系人
				deletePerson(&abks);
				break;
			case 4:	 //查找联系人
				findPerson(abks);
				break;
			case 5:	 //修改联系人
				modifyPerson(&abks);
				break;
			case 6:	 //清空联系人
				cleanPerson(&abks);
				break;
			case 0:	 //退出通讯录
				cout << "欢迎下次使用..." << endl;
				break;
			default:
				cout << "无效操作编号，请重新输入！"<< endl;
		}
	}

	return 0;
}
