# 집합 자료형 만들기

s1 = set([1, 2, 3]) # 리스트를 입력하여 만들기
s2 = set("Hello")   # 문자열을 입력하여 만들기
print(s1,"\n",s2, sep='')

#집합 자료형은 중복과 순서가 없기 때문에 인덱싱으로 값을 얻을 수 없음


print('='*50) #구분





# 집합 자료형에 저장된 값을 인덱싱으로 접근하기

s1 = set([1, 2, 3])
l1 = list(s1) # list로 변환
print(l1)
t1 = tuple(s1) # tuple로 변환
print(t1)


print('='*50) #구분





# 교집합, 합집합, 차집합 구하기

s1 = set([1, 2, 3, 4, 5, 6])
s2 = set([4, 5, 6, 7, 8, 9])

print(s1&s2) # 교집합
print(s1.intersection(s2)) #교집합

print(s1|s2) # 합집합
print(s1.union(s2)) # 합집합

print(s1 - s2, s2 - s1)
print(s1.difference(s2), s2.difference(s1)) # 차집합(s1 - s2, s2 - s1)


print('='*50) #구분





# 집합 자료형에 값 추가/제거

s1 = set([1, 2, 3])
s1.add(4) # s1에 값 1개 추가
print(s1)

s1.update([5,6]) # s1에 여러 값 추가
print(s1)

s1.remove(1) # 특정 값 제거
print(s1)
#s1.remove([2, 3]) => 여러 값을 제거 할 수 없어서 오류 발생


print('='*50) #구분





# 자료형의 참과 거짓

"""
1) 문자열. 리스트, 튜플, 딕셔너리
값이 있을 경우 참    EX) "Python", [1,2,3], (1,2,3), {1:2, 2:3}
값이 없을 경우 거짓  EX) "", [], (), {}

2) 숫자형
0이 아닌 숫자는 참 EX) 1, -2
0과 None은 거짓
"""

print(bool('python'), bool(0)) # bool 내장 함수를 이용하여 참/거짓 판별





