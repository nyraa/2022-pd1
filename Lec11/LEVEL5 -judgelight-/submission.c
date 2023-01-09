int cmp(const void *a, const void *b) {
	return ((struct ESPer*)a)->level > ((struct ESPer*)b)->level ? 1 : -1;
}

void sort_level(struct ESPer *arr, int length) {
    qsort(arr, length, sizeof(struct ESPer), &cmp);
}
