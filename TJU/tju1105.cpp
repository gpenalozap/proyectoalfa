#include<map>
#include<iostream>
#include<queue>
#include<string>

using namespace std;

map<string, int> M;

void posiciones(){
    queue<string> Q;
    string s;
    int cont;
    for(char c='a' ; c <='z' ; c++)
        Q.push(string(1,c));

    cont = 1;
    while(!Q.empty()){
        s = Q.front();
        Q.pop();
        M[s] = cont;
        cont++;
        if (s.size() == 5)
            continue;
        for(char c = s[s.size()-1]+1;c<='z';c++)
            Q.push(s+c);

    }
    return;
}



int main(){
    map<string, int>::iterator it;
    string s;

    posiciones();

    while(cin>>s){
        it = M.find(s);
        if (it == M.end())
            cout<<"0\n";
        else
            cout<<it->second<<endl;
    }
    return 0;
}
