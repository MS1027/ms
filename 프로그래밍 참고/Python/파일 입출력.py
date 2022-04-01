# 파일 생성하기

"""
기본 형태 : 파일 객체 = open(파일 이름, 파일 열기 모드)

파일 열기 모드
r : 읽기 모드 - 파일을 읽기만 할 때 사용
w : 쓰기 모드 - 파일에 내용을 쓸 때 사용
a : 추가 모드 - 파일의 마지막에 새로운 내용을 추가할 때 사용

w 모드 사용 시 기존에 내용이 있다면 모두 사라지고, 해당 파일이 없으면 새로 파일을 생성
모드 입력을 생략하면 자동으로 r모드로 열림
"""

f = open("C:/Users/MS/Documents/2017103999/프로그래밍 참고/Python/새파일.txt", 'w')
# 기본적으로 윈도우에서는 주소값에 \를 사용하지만 파이썬에서는 /를 사용
f.close() # 열려 있는 파일은 사용 후 꼭 닫아야 함





# 파일을 쓰기 모드로 열어 출력값 적기

file_name = "C:/Users/MS/Documents/2017103999/프로그래밍 참고/Python/새파일.txt"
f = open(file_name, 'w')
for i in range(1, 11):
    data = "%d번째 줄입니다.\n" %i
    f.write(data) # data를 파일에 쓰기
f.close()





# 파일에서 한 줄 읽기

f = open(file_name, 'r')
line = f.readline()  # 파일의 첫 번째 줄을 저장
print(line)
line2 = f.readline() # 그 다음 한 줄을 저장
print(line2)
f.close()


print('='*50) #구분선


f = open(file_name, 'r')
while True:
    line = f.readline()
    if not line: break # 더 이상 읽을 줄이 없으면 break를 수행
    print(line)
f.close()


print('='*50) #구분선





# 파일의 모든 줄 읽기

f = open(file_name, 'r')
lines = f.readlines() # 파일 내 모든 줄을 '리스트'로 반환
for i in lines:
    print(i)
f.close()


print('='*50) #구분선


f = open(file_name, 'r')
data = f.read() # 파일의 내용 전체를 '문자열'로 반환
print(data)
f.close()


print('='*50) #구분선





# 파일에 새로운 내용 추가하기

f = open(file_name, 'a') # 열기 모드를 'a'로 설정
for i in range(11,20):
    data = "%d번째 줄입니다.\n" %i
    f.write(data) # 기존 내용 뒤에 추가
f.close()





# with문과 함께 사용

with open(file_name, 'r') as f:
    data = f.read()
print(data) # with문을 사용하면 파일을 열고 닫는 행위를 자동으로 처리하므로 따로 닫아줄 필요가 없음


print('='*50) #구분선


