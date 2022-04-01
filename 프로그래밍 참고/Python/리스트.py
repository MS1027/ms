# 리스트 연산

list1 = [1, 2, 3]
list2 = [4, 5, 6]

print(list1 + list2) # 두 리스트를 합친 리스트를 반환
print(list1 * 3)     # 주어진 리스트를 지정한 횟수만큼 반복한 리스트를 반환
print(len(list1))    # 주어진 리스트의 길이를 반환


print('='*50) #구분선





# 리스트에서 값 수정/삭제

list1 = [1, 2, 3]
list2 = [1, 2, 3, 4, 5]

list1[2] = 4 # 지정한 인덱스의 값을 수정
print(list1)

del list1[1] # 지정한 인덱스의 값을 삭제
print(list1)

del list2[2:] # 여러 개의 요소를 한 번에 삭제 가능
print(list2)


print('='*50) #구분선





# 리스트 관련 함수

list1 = [1, 2, 3]

list1.append(4) # 리스트의 맨 마지막에 4를 추가
print(list1)

list1.append([5,6]) # 리스트의 맨 마지막에 [5,6]을 추가
print(list1)

list1.extend([7,8]) # 리스트의 맨 마지막에 7,8을 더해 확장 (= list1 + [7,8])
print(list1)


print('='*50) #구분선


list2 = [1, 4, 3, 2.0]
list2.sort() # 리스트를 순서대로 정렬 (숫자 : 오름차순)
print(list2) 

list3 = ['c','a','B']
list3.sort() # 리스트를 순서대로 (알파벳 : 대문자, 소문자순)
print(list3)

"""
리스트명.sort()를 수행하면 기존 리스트가 정렬 됨
print(sorted(리스트명))을 수행하면 기존 리스트는 그대로임
"""

print('='*50) #구분선


list4 = [1, 2, 3, 4, 5]
list4.reverse() # 리스트의 순서를 거꾸로 뒤집음
print(list4)


print('='*50) #구분선


list5 = [1,3,5,4,2]
print(list5.index(5)) # 리스트에서 주어진 값의 인덱스를 반환
# print(list5.index(0)) => 값이 없을 경우 오류를 발생


list6 = [1,3,4]
list6.insert(1,2) # 리스트의 1번째 위치에 2를 삽입
print(list6)


print('='*50) #구분선


list7= [1, 2, 3, 1, 2, 3]
list7.remove(3) # 리스트에서 '첫 번째로 나오는' 3을 삭제
print(list7)
list7.remove(3) # 한 번 더 실행하면 추가로 3을 삭제
print(list7)


print('='*50) #구분선


list8 = [1, 2, 3, 4]
print(list8.pop()) # 리스트의 맨 마지막 요소를 반환하고 그 요소를 삭제
print(list8)

print(list8.pop(1)) # 리스트의 1번째 요소를 반환한 후 삭제
print(list8)


print('='*50) #구분선


list9 = [1, 2, 3, 1]
print(list9.count(1)) # 리스트에서 지정된 값의 개수를 반환

