void print_C(unsigned int mask[][MAX_SIZE])
{
    for(int x = 0; x < H; ++x)
    {
        for(int y = 0; y < W; ++y)
        {
            image[x][y] |= mask[x][y] << 16;
        }
    }
}

void print_M(unsigned int mask[][MAX_SIZE])
{
    for(int x = 0; x < H; ++x)
    {
        for(int y = 0; y < W; ++y)
        {
            image[x][y] |= mask[x][y] << 8;
        }
    }
}

void print_Y(unsigned int mask[][MAX_SIZE])
{
    for(int x = 0; x < H; ++x)
    {
        for(int y = 0; y < W; ++y)
        {
            image[x][y] |= mask[x][y];
        }
    }
}

void print_K(unsigned int mask[][MAX_SIZE])
{
    for(int x = 0; x < H; ++x)
    {
        for(int y = 0; y < W; ++y)
        {
            image[x][y] |= mask[x][y] << 24;
        }
    }
}

void CMYK_to_RGB()
{
    for(int x = 0; x < H; ++x)
    {
        for(int y = 0; y < W; ++y)
        {
            int c = (image[x][y] & (0xff << 16)) >> 16;
            int m = (image[x][y] & (0xff << 8)) >> 8;
            int _y = (image[x][y] & 0xff);
            int k = (image[x][y] & (0xff << 24)) >> 24;
            image[x][y] = (lround(255 * (100 - c) * (100 - k) / 10000.0) << 16) | (lround(255 * (100 - m) * (100 - k) / 10000.0) << 8) | (lround(255 * (100 - _y) * (100 - k) / 10000.0));
        }
    }
}
