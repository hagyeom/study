/* ������ ��� ���α׷� */
#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N; // �� �ݾ� X�� ���� ������ �� N�� �Է¹���

    int totalPrice = 0;
    for (int i = 0; i < N; i++) { // for �ݺ����� ����Ͽ� N���� ���ǿ� ���� ���ݰ� ������ �Է¹���
        int a, b;
        cin >> a >> b;
        totalPrice += a * b; // �� ������ ���ݰ� ������ ���� ���� totalPrice�� ����
    }

    if (totalPrice == X) { // totalPrice�� X�� ���Ͽ� ��ġ�ϴ��� Ȯ���ϰ� Yes �Ǵ� No�� ���
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
