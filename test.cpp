/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

const int kMaxStr = 100; // 전역 상수 소개

// 문자열을 매개변수로 넣기
// 여기서는 모든 문자열 배열의 길이가 동일하다고 가정
bool IsEqual(const char str1[], const char str2[])
{
    // 크기 출력 확인 (배열 크기가 아님 주의!) - 문자열의 길이를 별도로 저장해야 합니다!
    //cout << sizeof(str1) << " " << sizeof(str2) << " " << endl;
   //exit(-1);
    for(int i = 0; i < kMaxStr; i++){
        if(str1[i] != str2[i]){
            return false;
        }
        // 문자열 종료 조건
        if(str1[i] == '\0')
            return true;
    }
    // 힌트: ==, != 같지 않다 비교 연산자
       
    // 디버깅 힌트: 문자를 정수로 바꿔서 출력해보기
    return true;
}

int main()
{
    // 영어 사용이 디버깅에 유리합니다.
    const char str1[kMaxStr] = "stop";
   
    while (1)
    {
        char str2[kMaxStr];
        cin >> str2;
        
        if(IsEqual(str1,str2))
        {
            break;
        }
       }
    return 0;
}
