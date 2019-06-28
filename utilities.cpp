//turns the board into a one-D array, easier to access
int getValue(char* pointer, int x, int y, int size)
{
    return pointer[x + (size * y)];
}

int getIndex(int x, int y, int size)
{
    return x + (size * y);
}