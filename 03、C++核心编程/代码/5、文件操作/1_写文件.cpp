#include <fstream>	// 1. 包含头文件

using namespace std;

void test01()
{
	ofstream ofs;					 // 2. 创建流对象
	ofs.open("test.txt", ios::out);	 // 3. 打开文件

	// 4. 写数据
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	// 5. 关闭文件
	ofs.close();
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
