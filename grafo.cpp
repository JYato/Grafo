#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Grafo{
    vector<int> nodos;
    map<int,vector<int> > vectores;
    public:
        Grafo(vector<int>&inicio, vector<int>&fin){
            map<int,vector<int> >::iterator it;
            it = vectores.begin();
            for(int i = 0; i != inicio.size(); i++){
                if(inicio[i]==fin[i+1]){
                nodos.push_back(fin[i]);
                }
                else
                    nodos.push_back(fin[i]);
                    vectores[inicio[i]]=nodos;
                    nodos.clear();
            }
        }
        int verificar(const int id){
            map<int, vector<int> >::iterator it;
            it==vectores.find(id);
            return it->second.size();
        }
        const vector<int>& list_ady(const int id){
            map<int, vector<int> >::iterator it;
            it==vectores.find(id);
            return it->second;
        }

};

int main()
{
    vector<int>a,b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    b.push_back(4);
    Grafo mapa(a,b);
    cout<<mapa.verificar(3);
    return 0;
}
