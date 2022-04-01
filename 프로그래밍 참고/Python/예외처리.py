# try, except문

""" 기본형태
try:
    ...
except [발생 오류 [as 오류 메시지 변수]]:
    ...
try 블록을 수행하는 중 오류가 발생할 경우 except 블록 수행
[]는 생략 가능하다는 관례 표현
"""

try:
    print(4/0)
except:                            # except만 쓰는 경우
    print("0으로 나눌 수 없습니다.") # 오류 발생 시 출력


try:
    print(4/0)
except ZeroDivisionError:          # 발생 오류를 포함한 except문
    print("0으로 나눌 수 없습니다.") # 지정된 오류 발생 시 출력


try:
    print(4/0)
except ZeroDivisionError as e:     # 지정된 오류의 메시지를 변수 e에 저장
    print(e)                       # e에 저장된 오류 메시지 출력


print('='*50) #구분선





# try, finally문

f = open('TryFinally.txt', 'w')
try:
    pass
finally:    # 예외 발생 여부에 관계없이 수행함.
    f.close()





# 여러 개의 오류 처리하기

try:
    a = [1, 2]
    print(a[3])                         # 존재하지 않아서 인덱싱할 수 없음
    print(4/0)                          # 0으로 나눌 수 없음
except ZeroDivisionError as e:          # 인덱싱 에러가 먼저 발생하기 때문에 실행되지 않음
    print(e)
except IndexError as e:                 # 인덱싱 에러 발생
    print(e)
    

try:
    a = [1, 2]
    print(a[3])
    print(4/0)
except (ZeroDivisionError, IndexError) as e: # 2개 이상의 오류를 동시에 처리
    print(e)                                 # 오류 메시지는 처음 발생하는 오류의 메시지가 저장됨


print('='*50) #구분선





# 오류 회피하기

try:
    f = open("NoExistFile.txt", 'r') # 존재하지 않는 파일 열기
except FileNotFoundError:            
    pass                             # 파일이 없더라도 오류를 발생시키지 않고 통과

"""
오류 일부러 발생시키기
def MakeError():
    raise NotImplementedError # raise 함수를 이용해 오류를 발생시킴
"""





# 예외 만들기

class MyError(Exception): # 파이썬 내장 클래스인 Exception 클래스를 상속하여 만듦
    def __str__(self):    # 오류 메시지 설정 (필수적인 것은 아님)
        return "MyError 발생!!"  

def dont_say(name):       
    if name == 'MS':
        raise MyError() # 조건이 참이라면 오류를 발생시킴
    print(name)

dont_say('Minsik') # 정상적으로 출력이 됨      
# dont_say('MS')   # 오류 발생


try:
    dont_say('MS')   # 오류가 발생할 구문을 수행
except MyError as e: # 예외 처리
    print(e)         # 오류 발생대신 수행


