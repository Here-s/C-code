#pragma once  //防止.c文件多次引用头文件的时候 多次拷贝内容  这样的话 
//就算多次引用头文件 也只会拷贝一份内容
extern int Add(int x, int y);//函数的声明   extern 可以不写