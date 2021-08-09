#include <bits/stdc++.h>
using namespace std;

string day_str[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

string month_str[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL","AUG", "SEP", "OCT", "NOV", "DEC"};

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int a,b,i,t,r;

	scanf("%d", &t);

	while (t--) {
		char s1[20], s2[20];

		scanf("%s %s", s1, s2);

		a = find (day_str, day_str+7, s2) - day_str;
		b = find (month_str, month_str+12, s1) - month_str;

		r = 0;

		for (i = 0; i < days[b]; i++)
        {
			if ((a + i)%7 == 5 || (a + i)%7 == 6)
			{
                r++;
			}
		}
		printf("%d\n", r);
	}
	return 0;
}
