# libft

# 프로젝트 소개

c 표준 라이브러리를 재구현해보는 과제

**중요 개념: 라이브러리, makefile, c프로그래밍**

# 라이브러리

자주 쓰는  코드를 미리 만들어놓은 구현체

# 라이브러리 만드는 법

## 빌드

고수준 언어로 작성된 코드는 컴퓨터에서 실행될 수 있도록 기계어로 바꿔주어야한다. 이때, 소스코드에서 실행파일까지의 변환과정을 **빌드**라고 한다.

![image](https://github.com/user-attachments/assets/6f0910e5-7e24-48ac-93f1-3be6b1bb2f6d)

hello.c(소스코드)에서 hello까지의 빌드과정

### makefile

빌드과정을 자동화해주는 툴이다. 형태는 다음과 같다:

```jsx
$(target): $(defendency)
							$(command)
```

특수한 경우가 아니라면 빌드는 컴파일과 링크과정을 통해 이루어진다고 이야기할 수 있다.

빌드 목표(target), 필요한 파일(defendency), 명령어(command)로 이루어져있다.

## 라이브러리 빌드

여러 파일을 합치는 과정은 마지막 Linker가 목적파일(.o)을 대상으로 필요한 파일을 링킹할때 이루어진다. 

라이브러리는 이러한 목적파일들을 묶어놓은 하나의 아카이브 파일(.a) 형태로 컴퓨터에 저장되어있다.

따라서, 소스코드 파일(.c)들을 목적파일(.o)들로 컴파일 후 하나의 아카이브 파일(.a)에 묶어놓았다.

```bash
#gcc -c 옵션으로 목적파일(.o) 생성
gcc -c src1.c src2.c src3.c

#ar 명령어로 아카이브 파일(.a) 생성
ar -rsc lib.a src1.o src2.o src3.o
```

# 주요함수 정리

## memset

인자로 주어진 배열에 바이트 단위로 접근하여 초기화하는 함수이다.

```jsx
void	*ft_memset(void *b, int c, size_t len)
```

### 포인터
![image](https://github.com/user-attachments/assets/b5c0d655-70e5-4662-920f-6a550d5ad374)

선언된 변수는 메모리를 할당받고 그 메모리 공간에 값을 저장한다. 포인터란 다른 변수의 메모리 주소값을 가르키는 변수를 말한다.

**배열과 포인터**

배열은 연속적인 메모리 공간을 가지는데, 이때 배열의 식별자는 배열의 첫번째 인덱스 공간에 대한 포인터가 된다.

![image](https://github.com/user-attachments/assets/3e940526-abe0-44a7-b6d2-a8a09a8288de)

또한 포인터를 더하거나 빼면 다음 공간이나 이전 공간을 가르키는 포인터가 된다.

**캐스팅**

변수의 자료형은 곧 메모리에 저장된 수를 해석하는 방식을 의미한다. 캐스팅은 변수의 해석방식을 변경하는 기능이다.

**구현**

```jsx
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*copy;

	copy = (unsigned char *)b;
	while (len--)
		copy[len] = c;
	return (b);
}
```

void* 로 들어온 첫번째 인자 b를 unsigned char*형으로 캐스팅함으로써 b에 byte단위로 접근할 수 있게 만들고 len만큼 루프를 돌면서 c로 초기화한다.

## calloc

malloc과 비슷하게 동적할당을 해주는 함수이다. 차이점은 calloc은 동적할당시 할당된 메모리영역을 0으로 초기화시켜준다.

```jsx
void	*ft_calloc(size_t number, size_t size)
```

**동적할당**

![image](https://github.com/user-attachments/assets/e9a5ebfe-fcfd-40da-a1be-46313637bdfd)

런타임에 메모리를 할당받는 방식을 동적할당이라고 한다. c언어에서는 malloc이라는 함수로 동적할당 기능을 사용할 수 있으며, 이는 지역변수나 매개변수가 저장되는 영역(stack)이 아니라 다른 영역(heap)을 사용한다.

**구현**

```jsx
void	*ft_calloc(size_t number, size_t size)
{
	void	*arr;

	arr = malloc(number * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, number * size);
	return (arr);
}
```

malloc을 이용한 동적할당 + bzero함수를 이용한 초기화
