# 리스트 복사 방법

"""
a = [1, 2, 3]이라 했을 때
a = b를 수행하면 리스트 [1, 2, 3]을 참조하는 변수가 1개(a)에서 2개(a, b)가 된 것
따라서 a is b (a와 b가 가리키는 객체가 동일한가?)도 True가 됨
a와 같은 값을 가진 또 다른 객체인 b를 만들기 위해서는 다른 방법을 써야 함
"""

a = [1, 2, 3]
b = a[:] # [:]을 이용하여 복사
a[1] = 4 # a의 요소를 바꾸어도
print(b) # b의 요소는 바뀌지 않음


from copy import copy # copy모듈에서 copy함수를 적용
a = [1, 2, 3]
c = copy(a) # copy 함수를 이용하여 복사
a[1] = 4    # a의 요소를 바꾸어도
print(c)    # c의 요소는 바뀌지 않음


print('='*50) #구분선





# 변수를 만드는 여러 방법

(a, b) = ('python', 'life') # 튜플을 이용하여 a, b에 각각 'python'과 'life'를 대입
print(a, b)

"""
튜플은 괄호를 생략할 수 있기 때문에 아래 세 표현도 같은 의미
a, b = 'python', 'life'
a, b = ('python', 'life')
(a, b) = 'python', 'life'
"""

[a, b] = ['python', 'life'] # 리스트를 이용하여 대입
print(a, b)

a = b = 'python' # 여러 변수에 같은 값을 대입

a, b = 3, 5
print(a, b)
a, b = b, a # 두 변수의 값을 바꿈
print(a, b)
