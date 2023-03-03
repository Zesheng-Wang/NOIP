# 1、二进制
- 十进制数到二进制数的互相转换
- 315 = 5x10<sup>0</sup> + 1x10<sup>1</sup> + 3x10<sup>2</sup>
- 1101 = 8+4+1= 13
- 正数以它本身存储
- 负数以补码形式存储

# 2、符号常量
- #define MAX 1000

# 3、格式控制符
- %lld : long long
- %nd : 以n字符宽度输出整数，宽度不足时用空格填充
- %0nd : 以n字符宽度输出整数，宽度不足时用0填充
- %.nf : 精确到小数点后n位

# 4、用cin读入所有输入的字符，包括空格，回车
```c++
int c;
while ((c = cin.get()) != EOF){
    cout << (char)c;
}

char c;
while (scanf("%c", &c) != EOF){
    printf("%c", c);
}
```


