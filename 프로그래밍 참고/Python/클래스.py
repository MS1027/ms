# 생성자

class Calc():
    def __init__(self, first, second):
        self.first = first
        self.second = second
        
    def div(self):
        return self.first / self.second

a = Calc(4, 2) # 생성자는 객체가 생성되는 동시에 호출되므로 객체 생성 시 매개변수 입력 필수
print(a.first, a.second, a.div())


print('='*50) #구분선





# 상속

"""
기존 클래스가 라이브러리 형태로 제공되거나 수정이 허용되지 않는 상황에서는 상속을 사용
상속은 기존 클래스의 기능을 확장시키거나 수정할 때 사용
"""

class MoreCalc(Calc): # 클래스 Calc를 상속한 클래스 MoreCalc 생성
    def mul(self): # 새로운 기능(함수)를 추가
        return self.first * self.second

a = MoreCalc(4, 2) # 기존 클래스에 생성자는 상속 클래스에도 적용
print(a.mul())


class SafeDiv(Calc): # 클래스 Calc를 상속한 클래스 SafeDiv 생성
    def div(self):    # 기존 클래스의 함수를 수정
        if self.second == 0: # 0으로 나눌 수 없으므로 조건 부여
            return 0
        else:
            return self.first / self.second

a = SafeDiv(4, 0)
print(a.div())
