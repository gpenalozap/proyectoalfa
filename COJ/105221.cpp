/*
	username: leandro
	program: CDs
	lang: C++
*/

#include <cstdio>

const int MaxBuff = 1 << 20;
int n, m;
char buffer[ MaxBuff ], *ptr = buffer + MaxBuff;

inline bool isdigit( char c )
{
		return ('0' <= c) && (c <= '9');
}

char get_char()
{
		if ( ptr == buffer + MaxBuff )
		{
				fread(buffer, 1, MaxBuff, stdin);
				ptr = buffer;
		}
		return *ptr++;
}

int get_int()
{
		char c;
		while ( !isdigit(c = get_char()) );
		int num = c - '0';
		while ( isdigit(c = get_char()) )
			num = 10 * num + (c - '0');
		return num;
}

int main()
{

		for (;;)
		{
				n = get_int();
				m = get_int();
				if ( !(n + m) ) break;
				printf("[%d][%d]\n", n, m);

		}

		return 0;
}
