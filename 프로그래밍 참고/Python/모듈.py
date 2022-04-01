# 모듈 불러오기

import mod1 # 모듈 불러오기 (현재 디렉토리, 파이썬 라이브러리가 저장된 디렉토리에 있는 모듈만)
print(mod1.add(1, 2)) # mod1 모듈에 있는 add함수 호출
print(mod1.sub(4, 2)) # mod1 모듈에 있는 sub함수 호출


print('='*50) #구분선





# 모듈에서 특정 함수 불러오기

from mod1 import add # mod1에서 add함수만 불러오기
print(add(1, 2))     # mod1.add가 아닌 add로만 호출 가능

"""
print(sub(4, 2)) => mod1 없이는 호출 불가능하므로 오류 발생
from mod1 import add, sub으로 두 개 이상의 함수를 불러올 수 있음
"""

from mod1 import * # mod1의 모든 함수를 불러오기
print(sub(4, 2))   # mod1.sub가 아닌 sub로만 호출 가능


print('='*50) #구분선






# time 모듈

import time

print(time.time()) # 1970년 1월 1일 0시 0분 0초를 기준으로 지난 시간을 초 단위로 돌려줌
print(time.localtime(time.time())) # 위 함수가 돌려준 실수값을 연,월,일,시,분,초 등의 형태로 바꾸어 줌
print(time.asctime(time.localtime(time.time()))) # 위 함수가 돌려준 튜플 형태의 값을 알아보기 쉬운 형태로 반환
print(time.ctime()) # asctime함수와 같은 형태로 '현재의 시간'을 반환(asctime은 시간을 변수에 저장 후 변환 가능)

print(time.strftime('%c', time.localtime(time.time()))) # 지정된 포맷 코드로 시간을 반환
"""
strftime 함수의 포맷 코드
코드          설명          예
%a        요일 줄임말       Mon
%A           요일         Monday
%b         달 줄임말       Jan
%B            달         January
%c        날짜, 시간 Fri Feb 28 15:45:14 2020 
%d          날(day)        28
%H       시간:24시간        15
%I       시간:12시간        03
%j     1년 중 누적 날짜     59
%m           달            02
%M           분            34
%p        오전/오후         PM
%S           초            07
%U    누적 주(일요일 시작)   08
%w      숫자로 된 요일      04  (00부터 월요일) 
%W    누적 주(월요일 시작)   08
%x   설정된 지역 기반 날짜 02/28/20
%X   설정된 지역 기반 시간 15:42:34
%y    세기 부분 제외 연도    20
%Y          연도           2020 
%Z         시간대      대한민국 표준시
"""

for i in range(4):
    print(i, end = ' ')
    time.sleep(1) # 1초 간격을 두고 실행
print()


print('='*50) #구분선





# calendar 모듈

import calendar
print(calendar.calendar(2020))       # 지정된 해의 전체 달력을 출력
calendar.prcal(2020)                 # 위 문장과 같은 결괏값
calendar.prmonth(2020, 2)            # 지정한 년도의 지정한 달의 달력을 출력
print(calendar.weekday(2020, 2, 28)) # 지정한 날짜의 요일 정보를 반환(0부터 월요일)
print(calendar.monthrange(2020, 2))  # 지정한 년도의 지정한 달의 1일의 요일과 며칠까지 있는 지 튜플형태로 반환


print('='*50) #구분선





# random 모듈

import random # random 모듈 불러오기
print(random.random()) # 0.0에서 1.0 사이의 난수 값 1개 반환

print(random.randint(1,10))   # 1에서 10 사이의 정수 중 난수 값 1개 반환

data = [1, 2, 3]
print(random.choice(data)) # 주어진 리스트에서 무작위로 하나를 선택하여 반환

random.shuffle(data) # 주어진 리스트를 무작위로 섞음
print(data)


print('='*50) #구분선





# webbrowser 모듈

import webbrowser # webbrowser 모듈 불러오기
webbrowser.open("http://google.com")
webbrowser.open_new("http://google.com")

"""
webbrowser의 open함수는 웹브라우저가 이미 실행된 상태라면 입력 주소로 이동
실행되지 않은 상태라면 새로 웹브라우저를 실행한 후 해당 주소로 이동
open_new함수는 새로운 창으로 해당 주소가 열리게 함
그런데 어찌된게 크롬으로 둘 다 새 탭으로 열림
"""


