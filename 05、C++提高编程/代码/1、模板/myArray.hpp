#include <iostream>

using namespace std;

template <class T> 
class MyArray
{
   public:
	// 有参构造 参数：容量
	MyArray(int capacity)
	{
		// cout << "MyArray的有参构造函数" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;

		this->m_Address = new T[this->m_Capacity];
	}
	// 拷贝构造
	MyArray(const MyArray& arr)
	{
		// cout << "MyArray的拷贝构造函数" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		// 深拷贝
		this->m_Address = new T[arr.m_Capacity];

		// 拷贝数据
		for (int i = 0; i < this->m_Size; i++) {
			this->m_Address[i] = arr.m_Address[i];
		}
	}

	//  operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		// 先判断原来堆区是否有数据,如果有先释放
		if (this->m_Address != nullptr) {
			// cout << "MyArray的operator=函数" << endl;
			delete[] this->m_Address;
			this->m_Address = nullptr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		// 深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->m_Address = new T[arr.m_Capacity];

		// 拷贝数据
		for (int i = 0; i < arr.m_Size; i++) {
			this->m_Address[i] = arr.m_Address[i];
		}
		return *this;
	}
	// 析构函数
	~MyArray()
	{
		if (this->m_Address != nullptr) {
			// cout << "MyArray的析构函数" << endl;
			delete[] this->m_Address;
			this->m_Address = nullptr;
		}
	}
	// 尾插法
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->m_Address[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_back()
	{
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}

	// operator[] 下标方式访问数据
	T& operator[](int index) { return this->m_Address[index]; }

	// 获取数组容量
	int getCapacity() { return this->m_Capacity; }

	// 获取数组大小
	int getSize() { return this->m_Size; }

   private:
	T* m_Address;	 //指针指向堆区开辟的真实数组
	int m_Capacity;	 //数组容量
	int m_Size;		 //数组大小
};
