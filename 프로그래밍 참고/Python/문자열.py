# 여러 줄의 문자열 대입 or 출력

ex_str = '''이렇게
여러 '줄'의
문자열을
대입할 수 있다.'''
print(ex_str)

print('''바로
출력도
가능''')


print('='*50) #구분선





# 포매팅 연산자를 활용한 문자열 포매팅

print("I ate %d apples." %3) # 숫자 바로 대입
print("I ate %s apples." %'five') # 문자열 바로 대입

number = 3
print("I ate %d apples." %number) # 변수로 대입

print("I ate %d apples. so I was sick for %s days." %(3, "five")) # 2개 이상 대입

"""
%s: 문자열     %c: 문자 1개      %d: 정수    %f: 부동 소수
%o: 8진수      %x: 16진수        %%: '%'자체(%d같은 포매팅 연산자가 있을 때만)
"""

print("%10s" %"HI")  # 10자리 확보 후 HI를 오른쪽으로 정렬 (앞에 공백 8개)
print("%-10s" %"HI") # 10자리 확보 후 HI를 왼쪽으로 정렬   (뒤에 공백 8개)

print("%0.4f" %3.421342234)  # 주어진 소수를 소수점 4번째 자리까지만 나타냄
print("%10.4f" %3.421342234) # 10자리 확보 후 주어진 소수를 소수점 4번째 자리까지만 나타낸 후 오른쪽 정렬


print('='*50) #구분선





# format 함수를 활용한 문자열 포매팅

print("I ate {0} apples.".format(3))      # 숫자 바로 대입
print("I ate {0} apples.".format("five")) # 문자열 바로 대입

number = 3
print("I ate {0} apples.".format(number)) # 변수로 대입

print("I ate {0} apples. so I was sick for {1} days.".format(3, "five")) # 2개 이상 대입

print("I ate {num} apples. so I was sick for {day} days.".format(num=3, day="five")) # 이름으로 대입

print("I ate {0} apples. so I was sick for {day} days.".format(3, day="five")) # 인덱스와 이름 혼용

print("{0:<10}".format("HI")) # 10자리 확보 후 HI를 왼쪽으로 정렬 (뒤에 공백 8개)
print("{0:>10}".format("HI")) # 10자리 확보 후 HI를 오른쪽으로 정렬 (앞에 공백 8개)
print("{0:^10}".format("HI")) # 10자리 확보 후 HI를 가운데로 정렬 (앞뒤에 공백 4개씩)

print("{0:=^10}".format("HI")) # 10자리 확보 후 HI를 가운데로 정렬한 후 공백을 =으로 채우기
print("{0:!<10}".format("HI")) # 10자리 확보 후 HI를 왼쪽으로 정렬한 후 공백을 !으로 채우기

print("{0:0.4f}".format(3.42134234))  # 주어진 소수를 소수점 4번째 자리까지만 나타냄
print("{0:10.4f}".format(3.42134234)) # 10자리 확보 후 주어진 소수를 소수점 4번째 자리까지만 나타낸 후 오른쪽 정렬

print("{{ and }}".format()) # 중괄호 출력 (format 함수를 쓸 경우에만)


print('='*50) #구분선





# f 문자열 포매팅

age = 23
print(f'나의 이름은 {"MS"}입니다. 나이는 {age}입니다.') # 바로 대입과 변수 대입 가능
print(f'나의 나이는 {20+3}입니다.') # 표현식 지원

print(f'{"HI":<10}') # 10자리 확보 후 HI를 왼쪽으로 정렬 (뒤에 공백 8개)
print(f'{"HI":>10}') # 10자리 확보 후 HI를 오른쪽으로 정렬 (앞에 공백 8개)
print(f'{"HI":^10}') # 10자리 확보 후 HI를 가운데로 정렬 (앞뒤에 공백 4개씩)

print(f'{"HI":=^10}') # 10자리 확보 후 HI를 가운데로 정렬한 후 공백을 =으로 채우기
print(f'{"HI":!<10}') # 10자리 확보 후 HI를 왼쪽으로 정렬한 후 공백을 !으로 채우기

print(f'{3.42134234:0.4f}')  # 주어진 소수를 소수점 4번째 자리까지만 나타냄
print(f'{3.42134234:10.4f}') # 10자리 확보 후 주어진 소수를 소수점 4번째 자리까지만 나타낸 후 오른쪽 정렬

print(f'{{ and }}') # 중괄호 출력 (f 문자열을 쓸 경우에만)


print('='*50) #구분선





#문자열 관련 함수 (※ 문자열 자체가 바뀌지는 않음)

print("hobby".count('b')) # 주어진 문자열에서 b의 개수를 반환

string = "Python is the best choice"
print(string.find('b')) # 주어진 문자열에서 b가 처음으로 나온 위치를 반환 (0부터 시작)
print(string.find('k')) # 존재하지 않을 경우 -1을 반환

string = "Life is too short"
print(string.index('t')) # 주어진 문자열에서 t가 처음으로 나온 위치를 반환
# print(string.index('k')) # 존재하지 않을 경우 오류를 발생시킴. (find와의 차이)

string = "abcd"
print(','.join(string)) # 주어진 문자열에서 각각의 문자 사이에 지정한 ,를 삽입

"""
join 함수는 리스트나 튜플에도 사용할 수 있음 (문자열로 반환)
EX)
','.join(['a','b','c']) => 'a,b,c,d'
"""

a = "hi"
print(a.upper()) # 주어진 문자열에서 소문자를 대문자로 바꾸어 줌
b = "HI"
print(b.lower()) # 주어진 문자열에서 대문자를 소문자로 바꾸어 줌

c = "  hi  "
print(c.lstrip()) # 주어진 문자열에서 가장 왼쪽에 있는 공백들을 지움
print(c.rstrip()) # 주어진 문자열에서 가장 오른쪽에 있는 공백들을 지움
print(c.strip())  # 주어진 문자열에서 양쪽에 있는 공백들을 지움

string = "Life is too short"
print(string.replace("Life", "My Leg")) # 문자열 내 특정한 값을 다른 값으로 바꾸어 줌

a = 'a b c d'
print(a.split())   # 공백(스페이스, 탭, 엔터)을 기준으로 문자열을 나눈 후 리스트로 돌려줌
b = 'a:b:c:d'
print(b.split(':')) # ':'을 기준으로 문자열을 나눈 후 리스트로 돌려줌
