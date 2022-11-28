목표: 담임 선생님을 위한 종합 프로그램 (`class Util`)

- Class as a member of another class (V)

1. 계산기 (`class Calc`) - (method, attribute, function overload, reference variable)

   1. 사칙 연산 계산 및 출력
      - `private` and `public` members (V)
      - function overloading and `template` (V)
      - `cin` and `cout`
   2. 기본값 저장
      - Constructor and Destructor (V)
      - Default Parameter (V)
   3. 연산 기록 저장
      - `vector` 라이브러리를 이용한 배열 사용 (V)
      - `for` 문을 사용한 vector 접근 (V)

2. 성적 분포 계산기 (`class Exam`) - (`vector`, file input/output)

   1. 성적 입력 받기
      - `<fstream>` : file input (`ifstream`) (V)
      - `vector` 사용해 성적 저장
   2. 통계 (평균, 표준편차 등등)
      - `<cmath>` 등 새로운 라이브러리 사용 (V)
   3. 시험 성적 입력하면 등수 출력
      - `std::erf()` 등 `namespace std` 내에 있는 다양한 함수 사용 (V)
      - `<iomanip>`을 사용한 문자열 출력 포맷 조작

3. 짝궁 배치도 (`class Classmate`)
   1. ...
4. ...

- 배워야 할 내용:

  - c++ language (1)
    - iostream (`cout`, `cin`)
  - `class` (1)
    - method & attribute
    - constructor
  - function overload (1)
  - header files
  - reference variable (vs. pointer) (1)

  - Optional(\*)
    - `vector` (\*)
    - inheritance (\*)
    - file input/output(\*)
    - cascading of `iostream` (\*)
