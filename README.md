:milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way::milky_way:
# c_programming
I study C everyday step by step with patience, passion!

# Chapter 1. A Tutorial Introduction
## 1.1 Getting Started 
### Hello World: Very first program
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

## 1.2 Variables and Arithmetic Expressions
### Fahrenheit to °C

- Main point: int, float, 
- 계산한 값을 어떻게 프린트할 수 있는지: %d, %f 

### 두 가지 방법으로 배운 화씨에서 섭씨로 변환 프로그램
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
``

### 두 번째:

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

:sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles::sparkles:
