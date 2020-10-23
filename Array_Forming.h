#include <iostream>

struct Array { // ñòðóêòóðà ìàññèâà
	float* items; // ýëåìåíòû
	int number; // êîë-âî ýëåìåíòîâ
};

// çàäàíèå ñîðòèðîâêè
void Sorting();

// ñôîðìèðîâàòü ìàññèâ (parent)
void FormArray(Array);
// ââåñòè ìàññèâ ñ êëàâèàòóðû (child 1)
void EnterArrayByKeyboard(Array);
// çàðàíäîìèòü ìàññèâ (child 2)
void RandomArray(Array);
// ñ÷èòàòü ìàññèâ èç ôàéëà (child 3)
void GetArrayFromFile(Array);
// ôëîòîâûé ðàíäîì
float FloatRandom(float, float);
