// #include <iostream.h>

typedef unsigned long long int h;

h *separate (h a, h *n)  {
    h s[100]={0};
    while (a!=0)    {
        s[(*n)++] = a%10;
        a /= 10;
    }
    return s;
}

int checkAsc (h s[], h n)  {
    int i=0;
    for (i=0; i<n-1; ++i) {
        if (s[i] < s[i+1])
            return 0;
    return 1;
    }
}

void main() {
    unsigned long long int t=0, i=0, a=0, n=0, s[100]={0}, *p;
    p = &s[0];
    // cin >> t;
    while (t--) {
        // cin >> a;
        for (i=a; i>=a-10; --i) {
            p = separate (i,&n);
            if (checkAsc(p,n))    {
                // cout << i << endl;
                break;
            }
        }
    }
}