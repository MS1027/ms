# 매개변수 지정하여 호출

def add(a, b):
    return a+b

result = add(a=3, b=7)  # 매개변수에 값 지정하여 호출 가능
print(result)
result2 = add(b=4, a=1) # 매개변수에 값 지정 시 순서에 상관없이 사용 가능
print(result2)


print('='*50) #구분선





# 여러 개의 입력 값을 받는 함수

def add_many(*args):          # 매개변수 앞에 *을 붙여입력 값이 몇 개이든 모두 모아서 튜플로 만듦
    result = 0                
    for i in args:            # 이 때 args는 입력 값들로 만든 튜플
        result = result + i
    return result





# 키워드 파라미터

def print_kargs(**kargs):          # 매개변수 앞에 **을 붙이면 매개변수 kargs는 딕셔너리가 됨
    print(kargs)

print_kargs(a = 1)                 
print_kargs(name = 'MS', age = 3)  # 매개변수 Key = Value 형태로 딕셔너리에 저장, Key가 문자열이지만 따옴표 생략


print('='*50) #구분선





# 매개변수 초깃값 미리 설정

def add(a, b = 3): # 매개변수 b의 초깃값을 3으로 설정
    return a + b

print(add(1))      # 매개변수 b에 초깃값이 있으므로 입력 생략 가능
print(add(1,2))    # 매개변수 b의 초깃값을 무시하고 값 입력 가능

"""
매개변수 초깃값을 미리 설정할 때는 무조건 뒤에서부터 설정
또한 최소한 초깃값이 설정되지 않은 매개변수의 수만큼의 입력값이 필요
"""


print('='*50) #구분선





# lambda식

"""
lambda는 함수를 생성할 때 사용하는 예약어로 def와 동일한 역할을 함
보통 함수를 한 줄로 간결하게 만들 때 사용
def를 사용할 정도로 복잡하지 않거나 def를 사용할 수 없는 곳에서 주로 사용

기본형태
lambda 매개변수1, 매개변수2, ... : 매개변수를 사용한 표현식
"""

add = lambda a, b : a+b # add라는 이름의 lambda 함수 생성
result = add(3, 4)      # def add(a, b):   
print(result)           #   return a+b     와 완전히 동일
