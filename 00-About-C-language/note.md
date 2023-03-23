# 字符串输入
```c
char first_name[25];
int age;
printf("Enter your first name and age: \n");
scanf("%s %d", first_name, &age);

char full_name[50];
printf("Enter your full name: ");
gets(full_name);

char full_name[50];
printf("Enter your full name: ");
fgets(full_name, 50, stdin);
```
# 字符串输出
```c
fputs(city, stdout);

puts(city);
```
# The sprintf and sscanf Functions 
```c
#include <stdio.h>
int main()
{
  char info[100];
  char dept[ ] = "HR";
  int emp = 75;
  sprintf(info, "The %s dept has %d employees.", dept, emp);
  printf("%s\n", info);

  return 0;
}
```

# Converting a String to a Number 
```c
#include <stdio.h>
int main()
{
    char input[10 ];
    int num;
    
    
    printf("Enter a number: ");
    gets(input);
    num = atoi(input);
      
    printf("You entered %d", num);

    return 0;
}
```