:milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way:
# c_programming
I study C everyday step by step with patience, passion!

# Chapter 1. A Tutorial Introduction
## 1.1 Getting Started 
### ex1_1 Hello World: Very first program
```c
#include <stdio.h>
int main(void)
{
printf("hello, world");
}
```
<여기서 배운 것>
- C언어에 시작할 때 Library #include stdio.h
- 라이브러리와 메인 코드 시작 전에 한 줄 
- 프로그램이 실행되기 위해서는 main이 필요하다
- 프로그램 컴파일: Makefile 
- 어떻게 디렉토리 분류, 커밋 메시지 남기는 지 
- 커밋은 하나씩만! (한 커밋에는 하나의 내용만) https://github.com/notypicalus/c_programming/commit/1626848c392cafec0cc341908f85d3cab6b5f589
- Syntax 익숙해지기: Linux Kernel Coding Style 
https://www.kernel.org/doc/html/v4.10/process/coding-style.html?fbclid=IwAR2ob1ConygIGPMiyl-JcXsEf4DLp1lfmYpJh-9tBmH8cF64qBDNqnzpGko

## 1.2 Variables and Arithmetic Expressions
### ex1_3 Modify the temperature conversion program to print a heading above the table 

- Main point: int, float, 
- 계산한 값을 어떻게 프린트할 수 있는지: %d, %f

### ex1_4 Write a program to print the corresponding Celsius to Fahrenheit table  

### 두 가지 방법으로 배운 화씨에서 섭씨로 변환 프로그램 Fahrenheit to °C
#### 첫 번째: 
```c
int main()
{
  printf("A program prints Fahrenheit-Celsius\n");
  int lower, upper, step;
  int celsius, fahr;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  
  printf("화씨\t 섭씨\n");
  while(fahr <= upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
```

#### 두 번째:

```c
int main()
{
  //Variable declaration

  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower; 
  
  printf("화씨\t섭씨\n");
  while(fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr-32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
```

## 1.3 The For Statement
### ex1_5 Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0

## 1.4 Symbolic Constants
## 1.5 Character Input and Output
<여기서 배운 것>
- getchar & putchar function 차이점
- buffer

### 1.5.1 File Copying
"The simplest example is a program that copies its input to its output one character at a time"

read a character
while (character is not end-of-file indicator)
    output the character just read
    read a character 

1st version:

```c
int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
	putchar(c);
	c = getchar();
    }
}
```
2nd version: 

```c
int main()
{
    int c;

    while ((c = getchar()) != EOF)
	putchar(c);
}
```

<여기서 배운 것>
- datatype char & int: 왜char를 사용하지 않고 int를 사용 했는 지
- EOF (end of file)

#### ex1_6 Verify that the expression getchar() != EOF is 0 or 1.
#### ex1_7 Write a program to print the value of EOF.

### 1.5.2 Character Counting

1st version:
```c
int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
	++nc;
    printf("%ld\n", nc);
}
```

2nd version:
```c
int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
	;
    printf("%.0f\n", nc);
}
```

### 1.5.3 Line Counting
#### ex1_8 Write a progrma to count blanks, tabs, and newlines
#### ex1_9 Write a program to copy its input to output, replacing each string of one ore more blanks by a single blank.
#### ex1_10 Write a program to copy its input to its output, replacing each tab by /t, each backspace by /b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. 

### 1.5.4 Word Counting
- 참고: https://blog.naver.com/sdfgh724/221425441903

#### ex1_11
#### ex1_12

### 1.6 Arrays
#### ex1_13
#### ex1_14 

### 1.7 Functions
#### ex1_15

### 1.8 Arguments--Call by Value
### 1.9 Character Arrays
#### ex1_16
#### ex1_17
#### ex1_18
#### ex1_19

### 1.10 External Variables and Scope
#### ex1_20
#### ex1_21
#### ex1_22
#### ex1_23
#### ex1_24

:sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles:
