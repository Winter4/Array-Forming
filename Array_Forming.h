struct Array { // ��������� �������
	float* items; // ��������
	int number; // ���-�� ���������
};

// ������� ����������
void Sorting();

// ������������ ������ (parent)
void FormArray(Array);
// ������ ������ � ���������� (child 1)
void EnterArrayByKeyboard(Array);
// ����������� ������ (child 2)
void RandomArray(Array);
// ������� ������ �� ����� (child 3)
void GetArrayFromFile(Array);
// �������� ������
float FloatRandom(float, float);
