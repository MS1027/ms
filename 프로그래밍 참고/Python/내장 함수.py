# 절댓값

print(abs(-3))   # 절댓값을 반환
print(abs(-1.2))


print('='*50) #구분선





# 반복 가능한 자료형의 참/거짓 판별

print(all([1,2,3])) # 반복 가능한 자료형을 입력 받아 요소가 '모두' 참이면 True를 반환
print(all([0,1,2])) # 리스트에 0이 있으므로 False 반환 


print('='*50) #구분선





print(any([0,1,2])) # 반복 가능한 자료형을 입력 받아 요소 중 하나라도 참이면 True를 반환
print(any([0, ''])) # 리스트의 요소가 모두 거짓이므로 False 반환


print('='*50) #구분선





# ASCII 코드

print(chr(97)) # 입력받은 아스키 코드 값에 해당하는 문자를 반환
print(chr(48)) 

print(ord('a')) # 입력받은 문자의 아스키 코드 값을 반환
print(ord('0')) 

print('='*50) #구분선





# 지정된 자료형의 함수 

print(dir([1,2,3])) # 입력받은 자료형에 관련된 함수를 리스트 형태로 반환
func_str = '\n'.join(dir({'1':'a'})) # 반환된 리스트를 문자열 형태로 변수에 저장
print(func_str)


print('='*50) #구분선





# 몫/나머지 반환

print(divmod(7, 3)) # 입력받은 1번째 수를 2번째 수로 나누어 (몫, 나머지)의 튜플 형태로 반환
print((7//3, 7%2))  # 결과값이 같음


print('='*50) #구분선





# enumerate 객체

for i, name in enumerate(['zero', 'one', 'two']):
    print(i, name)
"""
enumerate 함수는 순서가 있는 자료형(리스트, 튜플, 문자열)을 입력 받아
'인덱스 값'을 포함하는 enmuerate 객체를 돌려줌
for문과 함께 자주 사용함
"""


print('='*50) #구분선





# 실행 가능한 문자열

print(eval('1+2'))         # 실행 가능한 문자열을 입력 받아 실행한 결괏값을 반환
print(eval("'hi'+'a'"))    # 입력 값이 '하나의 문자열'이어야 함
print(eval('divmod(4,3)')) # 입력 문자열이 실행 가능하면 됨
print(type(eval('1')))     # 결과값이 <int>임을 주목


print('='*50) #구분선





# filter 함수

def positive(num):
    return num > 0 # 입력받은 수가 양수면 참을 반환

print(list(filter(positive, [1, -3, 2, 0, -5, 6])))

"""
filter 함수는 첫 번째 인수로 함수의 이름, 두 번째 인수로 반복 가능한 자료형을 입력받음
반복 가능한 자료형의 인수가 첫 번째 함수에 입력 되었을 때 반환 값이 참인 것들만 묶어서 반환
반환된 값을 이용하기 위해서는 list와 같은 함수로 변환을 해주어야 함.
"""

print(list(filter(lambda x: x>0, [1, -3, 2, 0, -5, 6]))) # 람다식으로 작성 가능


print('='*50) #구분선





# 8진수와 16진수

print(oct(234)) # 정수 값을 입력받아 8진수로 변환하여 반환
print(hex(234)) # 정수 값을 입력받아 16진수로 변환하여 반환


print('='*50) #구분선





# 변수의 주솟값

a = 3        # a가 3을 참조
print(id(3)) # 3의 주솟값
print(id(a)) # a는 3을 참조하므로 3과 주솟값이 동일
b = a        # b가 a와 같은 값을 참조
print(id(b)) # b도 3을 참조하므로 3과 주솟값이 동일


print('='*50) #구분선





# 정수(10진수) 반환

print(int('3'))        # 문자열 형태의 정수를 정수 타입으로 반환
print(int(4.8))        # 실수를 입력받을 시 정수 부분만 반환
print(int('11', 2))    # 2진수 형태의 문자열을 10진수로 반환
print(int('0xFF', 16)) # 16진수 형태의 문자열을 10진수로 반환


print('='*50) #구분선





# 인스턴스 판별 함수

class ex_class: # 예시 클래스 생성
    pass
a = ex_class()  # ex_class의 인스턴스 a 생성
print(isinstance(a, ex_class)) # a가 ex_class의 인스턴스인지 판별하여 참/거짓으로 반환
print(isinstance(b, ex_class)) # b는 ex_class의 인스턴스가 아니므로 거짓을 반환


print('='*50) #구분선





# 입력값의 길이 반환

print(len('python'))  # 문자열의 길이 반환
print(len([1, 2, 3])) # 리스트의 길이(요소의 전체 개수) 반환 (튜플, 집합도 가능)
print(len({'1':'a'})) # 딕셔너리의 쌍 개수 반환


print('='*50) #구분선





# 자료형 변환

print(list("python")) # 입력받은 문자열의 한 글자씩을 요소로 하여 리스트 형태로 반환
print(list((1,2,3)))  # 입력받은 튜플을 리스트 형태로 반환

print(tuple("python")) # 입력받은 문자열의 한 글자씩을 요소로 하여 튜플 형태로 반환
print(tuple([1,2,3]))  # 입력받은 리스트를 튜플 형태로 반환


print('='*50) #구분선





# map 함수

def twice(num):
    return num * 2 # 입력받은 수에 2를 곱하여 반환

print(list(map(twice, [1, 2, 3, 4])))

"""
map함수는 filter와 같이 첫 번째 인수로 함수의 이름, 두 번째 인수로 반복 가능한 자료형을 입력받음
반복 가능한 자료형의 인수들이 첫 번째 함수에 입력 되었을 때의 반환 값을 묶어서 반환
반환된 값을 이용하기 위해서는 list와 같은 함수로 변환을 해주어야 함.
"""

print(list(map(lambda x: x*2, [1, 2, 3, 4]))) # 람다식으로 작성 가능


print('='*50) #구분선





# 최댓값 / 최솟값

print(max([1,2,3]), min([1,2,3])) # 리스트에서 최댓값, 최솟값을 반환
print(max('aBc'), min('aBc')) # 문자열에서 최댓값, 최솟값을 반환 (대문자<소문자)


print('='*50) #구분선





# 수학 관련 함수

print(pow(2, 3)) # 2의 3제곱을 반환

print(sum([1, 2, 3])) # 리스트나 튜플의 모든 요소의 합을 반환

print(round(4.6))      # 입력받은 수를 반올림하여 반환
print(round(4.5))      # 5는 내림으로 처리 됨
print(round(3.1415, 2)) # 소수점 2자리까지만 반올림하여 표시


print('='*50) #구분선





# range 함수

print(list(range(5)))    # 0 ~ 입력값-1까지의 범위 값을 객체로 만들어 반환
print(list(range(1, 5))) # 첫 번째 입력값 ~ 두 번째 입력값-1까지의 범위 값을 객체로 만들어 반환
print(list(range(1, 5, 2))) # 세 번째 입력값은 숫자 사이의 거리를 의미 (이 경우엔 1, 3) 반환


print('='*50) #구분선





# zip 함수

"""
길이가 같은 반복 가능한 자료형을 순서대로 튜플 형태로 묶음
리스트의 형태로 반환한다. (리스트의 각 요소가 튜플인 격)
"""

print(list(zip([1, 2, 3], (4, 5, 6)))) # 두 자료형이 같을 필요는 없음
print(list(zip((1,2),(3,4),(5,6))))    # 여러 개를 입력 가능
