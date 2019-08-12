# C-review
C++基本语法复习
### 内联函数
C++提供了程序内联机制来减少函数调用的开销。在函数定义的返回值类型前面加一个`inline`关键字，“建议”编译器函数代码复制到程序中，避免函数调用。
```
using std::cout;
using std::cin;
using std::endl;


inline double cube(const double side){
return side*side*side;
}

void testInlineFunction(){
double sideValue;
for (int i=1 ; i<=3 ; i++) {
cout << "enter the side length of your cube:";
cin >>sideValue;

cout << "side=" << sideValue << "cube=" << cube(sideValue) <<endl;
}
}

```
- `using std::cout;`using语句使我们不用重复写`std::`前缀；或者使用`using namespace std;`代替。



### 引用以及引用形参
- 两种传参方式是：按值传递和按引用传递。
- 采用按值传递方式传参时，首先生成实参值的副本，然后将该值传递给被调函数。改变副本的值不会影响主调函数中实参的值。
- 通过按引用传参，允许被调函数直接访问主调函数中的数据，允许被调函数有选择的修改主调函数中的数据。
- 引用实参是其对应的函数调用中实参的别名。
- 通过`&`来标记按引用传参
- 

引用以和引用形参
```
int squareByValue(int number){
return number *=number;
}

void squareByReference(int &numberRef){
numberRef *=numberRef;
}
```

函数体内引用作为别名
```
int z = 3;
int &z_alias = z;//int &z_alias；
cout << "z= " << z << endl << " z_alias = "  <<  z_alias << endl;
z = 7;
cout << "z= " << z << endl << " z_alias = "  <<  z_alias << endl;
```
输出
```
z= 3
z_alias = 3
z= 7
z_alias = 7
```
并且为初始化的引用`int &z_alias；`会导致错误
```
Declaration of reference variable 'z_alias' requires an initializer
```

### 空形参列表
在C++中，可以用`void`指定也可以通过在括号内不写任何语句定义空形参列表。如下两个函数是等价的：
```
void print();
void print(void);
```
### 默认实参
- 有些程序在多次调用一个函数时经常将相同的实参传递给某个形参，这种情况下，可以将该形参指定默认实参，即传递给该形参的默认值。
- 当发生函数调用时，如果省略了对应位置上的实参值，则编译器就会重写该函数调用并将默认值作为实参插入到函数调用中，在执行被调函数时，以该形参的默认值进行运算。
- 默认实参必须是函数形参列表中最右边的实参。
- 应该在函数名第一次出现时指定默认实参--通常在函数原型中指定。



### 一元作用域运算符
C++提供了一元作用域运算符，可以在含有与全局变量名的局部变量的域中访问该全局变量。

### 函数重载
- C++中允许定义同名的函数，只要这些函数具有不同的形参集合即可（至少在形参类型或形参个数或形参类型的顺序上有区别）。这个功能称为函数重载。
- 调用重载函数时，C++编译器通过检查函数调用语句中的实参个数、类型及顺序选择适当的函数。
- 重载函数由函数的签名进行区分。
- 编译器根据函数形参的个数与类型将每个函数标识符编码，以保证类型安全链接，从而确保可以调用适当的重载函数，也确保实参与形参类型一致。

### 函数模版
重载函数用于对不同数据类型的程序逻辑执行相似操作。如果各种数据类型的程序逻辑和操作是完全相同的，那么使用函数模版可以更加简洁、方便的执行重载。

demo链接🔗[https://github.com/samtake/C-review](https://github.com/samtake/C-review)
