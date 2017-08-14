#include <stdio.h>

struct person {
	int ID;
	char first[10];
	char last[10];
	struct person *next;
};

static struct person data[] = {
	{0, "Jack", "Johnson"},
	{1, "Kenny", "Lee"},
	{2, "Mike", "Smith"}
};

int look_up_name(struct person *ptr, int ID) {
	while (ptr != NULL) {
		if (ptr->ID == ID) {
			printf("ID: %d  Name: %s %s \n", ID, ptr->first, ptr->last);
			return 0;
		}

		ptr = ptr->next;
	}

	printf("No such ID in database.\n");
	return 0;
}

int main() {
	
	look_up_name(data, 0);

	return 0;
}
