# 튜플 요솟값 삭제/변경

t1 = (1, 2, 'a', 'b')
#del t1[0]   => 튜플의 요소는 지울 수 없어서 오류 발생
#t1[0] = 'c' => 튜플의 요소는 바꿀 수 없어서 오류 발생





# 튜플 슬라이싱

t1 = (1, 2, 'a', 'b')
print(t1[1:])


print('='*50) #구분선





# 튜플 더하기/곱하기

t2 = (3, 4)
print(t1 + t2) # 튜플을 이어서 반환
print(t2*3)    # 튜플을 지정한 횟수만큼 반복한 후 반환


print('='*50) #구분





# 딕셔너리 쌍 추가/삭제

a = {1:'a'}
a[2] = 'b' # 새로운 Key와 Value 추가
print(a)

del a[2] # 딕셔너리에서 key가 2인 요소 삭제
print(a)


print('='*50) #구분





# Key 리스트 만들기

a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.keys())    # 딕셔너리의 Key로만 이루어진 dict_keys형태를 반환
b = list(a.keys()) # 리스트로 활용하기 위해서는 list함수 사용
print(b)


print('='*50) #구분





# Value 리스트 만들기

print(a.values())    # 딕셔너리의 Value로만 이루어진 dict_values형태를 반환
c = list(a.values()) # 리스트로 활용하기 위해서는 list함수 사용
print(c)


print('='*50) #구분





# Key, Value 쌍 얻기

print(a.items())    # 딕셔너리의 각 쌍을 튜플(key, value)로 만들어 dict_items형태로 반환
d = list(a.items()) # 리스트로 활용하기 위해서는 list함수 사용
print(d)


print('='*50) #구분





# Key, Value 쌍 모두 지우기

a.clear() # 딕셔너리 내 모든 요소를 삭제
print(a)


print('='*50) #구분





# Key로 Value 얻기

a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.get('name')) # 딕셔너리에서 Key가 'name'인 Value 반환

"""
a.get('name')은 a['name']과 동일한 결괏값을 반환한다.
하지만 a[Key]형태는 존재하지 않는 Key를 사용하면 오류를 발생시키지만
get함수는 존재하지 않는 Key를 사용하면 None을 반환한다.
"""

print(a.get('address', 'abc@gmail.com')) # 찾으려는 Key값이 없을 경우 미리 정해둔 값을 반환

