/* 영수증 계산 프로그램 */
#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N; // 총 금액 X와 물건 종류의 수 N을 입력받음

    int totalPrice = 0;
    for (int i = 0; i < N; i++) { // for 반복문을 사용하여 N개의 물건에 대한 가격과 개수를 입력받음
        int a, b;
        cin >> a >> b;
        totalPrice += a * b; // 각 물건의 가격과 개수를 곱한 값을 totalPrice에 더함
    }

    if (totalPrice == X) { // totalPrice와 X를 비교하여 일치하는지 확인하고 Yes 또는 No를 출력
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
