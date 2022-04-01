# 패키지 안의 함수 실행

import ex_pack.low_pack1.ex_mod1 #ex_pack/low_pakc1/ex_mod1 불러오기
ex_pack.low_pack1.ex_mod1.pack_test1() #ex_mod1 내 함수 pack_test1 실행

from ex_pack.low_pack1 import ex_mod1 # 구체적으로 디렉토리를 지정하여 모듈 불러오기
ex_mod1.pack_test1() # 함수 호출이 더 쉬워짐

from ex_pack.low_pack1.ex_mod1 import pack_test1 # 모듈까지 지정하여 함수 불러오기
pack_test1() # 함수 이름만으로 호출 가능

"""
import ex_pack과 같이 상위 폴더를 불러올 경우
ex_pack.low_pack1.ex_mod1.pack_test1()처럼 하위 디렉토리는 사용 불가능
단순히 ex_pack 내에 있는 '모듈'만 사용 가능
"""


print('='*50) #구분선





# __init__파일 내 __all__변수 설정 후 불러오기

from ex_pack.low_pack2 import *
"""
★import의 대상은 모듈 또는 함수 (디렉토리는 X)
위 문장을 실행하여 low_pack2 디렉토리 내 __init__.py의
__all__ 변수에 입력되어 있는 모듈을 모두 import 하게 됨
"""
ex_mod2.pack_test2()


print('='*50) #구분선








