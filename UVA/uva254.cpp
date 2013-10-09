#include <cstdio>
#include <vector>

int discos, uno;
int tiradas, i;

const int MaxBuff = 1 << 20;

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

int main(){
	for (;;){
		discos = get_int();
		tiradas = get_int();
		if (discos+tiradas == 0)
			break;
		std::vector<int> torres[4];

		for (i = discos ; i >=1 ; i--)
            torres[1].push_back(i);
        uno = 1;
        for (i = 1 ; i <= tiradas; i++){
            if (i%2 == 1){
                torres[uno].pop_back();
                uno = (uno%3)+1;
                torres[uno].push_back(1);
            }
            else{
                int a, b;
                if (uno == 1){
                    a = 2;
                    b = 3;
                }
                else if (uno == 2){
                    a = 1;
                    b = 3;
                }
                else{
                    a = 1;
                    b = 2;
                }

                if (torres[a].empty()){
                    torres[a].push_back(torres[b].back());
                    torres[b].pop_back();
                }
                else if (torres[b].empty()){
                    torres[b].push_back(torres[a].back());
                    torres[a].pop_back();
                }
                else if (torres[a].back() < torres[b].back()){
                    torres[b].push_back(torres[a].back());
                    torres[a].pop_back();
                }
                else{
                    torres[a].push_back(torres[b].back());
                    torres[b].pop_back();
                }
            }
            /*printf("%d %d %d\n", torres[1].size() , torres[2].size(), torres[3].size());*/
        }

		printf("%d %d %d\n", torres[1].size() , torres[2].size(), torres[3].size());
	}
	return 0;
}

