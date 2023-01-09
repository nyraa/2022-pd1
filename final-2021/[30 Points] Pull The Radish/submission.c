int pull_radish(int *l, int *r, int *pos, int x) {
	// left
    int result = 0;
    for(int *cur = pos - x; cur - l >= 0; cur -= x)
    {
        result += *cur;
        *cur = 0;
    }
    for(int *cur = pos + x; r - cur >= 0; cur += x)
    {
        result += *cur;
        *cur = 0;
    }
    return result;
}