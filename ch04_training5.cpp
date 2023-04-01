#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
	int n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
	// rand() �Լ��� ���� ���� �Լ�

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while(true){
		string input;
		getline(cin, input, '\n');
		if (input == "exit") // "exit"�� �Է��ϸ� ����
			break;
		// �����ϰ� ������ ���� ����
		int index = rand() % input.length(); /* rand() �Լ��� '%'�����ڸ� ����Ͽ�
		0���� �Է¹��� ���ڿ��� ���� - 1������ ������ ���� index�� ���� */
		char original_char = input[index]; /* index�� ����Ͽ� input ���ڿ����� �����ϰ� ���õ� ����
		original_char�� �����ɴϴ�.*/
		char new_char = original_char; // new_char ������ original_char�� ���� ������ �ʱ�ȭ
		while (new_char == original_char) { // new_char ������ original_char ������ �ٸ� ������ �ݺ����� ����
			new_char = 'a' + rand() % 26; /* rand() �Լ��� % �����ڸ� ����Ͽ� ���ĺ� �ҹ��� �� 
			�����ϰ� ���õ� ���ڸ� new_char�� �Ҵ� */
		}
		// ������ ���� �����ϱ� 
		input[index] = new_char;
		// ������ ��� ����ϱ�
		cout << input << endl;
	}
	return 0;
}