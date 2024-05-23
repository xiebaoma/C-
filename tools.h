//这段代码是 C++ 中的预处理器指令，通常用于防止头文件的重复包含，以及在编译时控制代码的行为。
#ifndef TOOLS_H
#define TOOLS_H
/*
#ifndef 意味着 "if not defined"，它检查一个标识符是否已经在当前文件中定义过。如果这个标识符尚未定义，那么 #ifndef 下面的代码就会被执行。
#define 用于定义一个标识符，通常用于定义宏或者唯一标识符。
#endif 表示条件编译的结束。

这些代码就是书写规范，不用深究。
*/

void SetWindowSize(int cols, int lines);//设置窗口大小
void SetCursorPosition(const int x, const int y);
void SetColor(int colorID);
void SetBackColor();


#endif // TOOLS_H
