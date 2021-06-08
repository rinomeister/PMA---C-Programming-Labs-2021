#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
	char ime[50], prezime[50];
	int ocjena;
}Student;
 
void unos(Student *arr_st, int n) {
 
	for (int i = 0; i < n; i++) {
		printf("Unesite studenta: %d (ime, prezime, ocjena) ", i + 1);
		scanf("%s %s %d", &arr_st[i].ime, &arr_st[i].prezime, &arr_st[i].ocjena);
	}
}
 
void ispis(Student* arr_st, int n) {
	for (int i = 0; i < n; i++) {
		printf("Studenti su: %s %s %d", arr_st[i].ime, arr_st[i].prezime, arr_st[i].ocjena);
	}
}
 
int cmp(const void* a, const void* b) {
	Student* studentA = (Student*)a;
	Student* studentB = (Student*)b;
 
	return (studentB->ocjena - studentA->ocjena);
}
 
int cmps(const void* a, const void* b) {
	Student* studentA = (Student*)a;
	Student* studentB = (Student*)b;
 
	return (studentA->ocjena - studentB->ocjena);
}
 
void sortUzlazno( Student* arr_st, int n) {
	qsort(arr_st, n, sizeof(Student), cmp);
 
	printf("Studenti sortirani po ocjeni \n");
	for (int i = 0; i < n; i++) {
		printf("%s %s\n", arr_st[i].ime, arr_st[i].prezime);
	}
}
 
void sortSilazno(Student* arr_st, int n) {
	qsort(arr_st, n, sizeof(Student), cmps);
 
	printf("Studenti sortirani po ocjeni silazno \n");
	for (int i = 0; i < n; i++) {
		printf("%s %s\n", arr_st[i].ime, arr_st[i].prezime);
	}
}
 
int main() {
 
	struct Student *arr_st;
 
	arr_st = (int*)malloc(5 * sizeof(Student));
 
	unos(arr_st, 2);
	ispis(arr_st, 2);
	sortUzlazno(arr_st, 2);
	sortSilazno(arr_st, 2);
 
	return 0;
}