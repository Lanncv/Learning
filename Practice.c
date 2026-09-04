int getline(char s[], int lim)
{
    int c, i;
    if(lim=='0'||lim=='1')
        return 0;
    for (i = 0; i < lim - 1 && (c = getchar())!=EOF&& c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'&&i<lim-1) {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}