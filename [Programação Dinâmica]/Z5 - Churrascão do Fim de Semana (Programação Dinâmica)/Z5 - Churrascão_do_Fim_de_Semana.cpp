#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

	int N_itens, R_dinheiro, C_custo, F_felizes, k = 1;
   	vector<pair<int,int>> feliz_custo;

	cin >> N_itens >> R_dinheiro;
    int prog_din[R_dinheiro+1];
	feliz_custo.push_back(pair<int,int>(-1,-1));

	for(int i = 0; i < N_itens; i++) {
		cin >> F_felizes >> C_custo;
		feliz_custo.push_back(pair<int,int>(C_custo, F_felizes));
	}

	for(int i = 0; i <= R_dinheiro; i++)
	    prog_din[i] = 0;

	for(int i = 1; i <= N_itens; i++) {
	    for(int j = R_dinheiro; j >= 0; j--) {
		    if(j >= feliz_custo[i].first) {
    			prog_din[j] = max<int>(prog_din[j], prog_din[j-feliz_custo[i].first] + feliz_custo[i].second);
			} else
	    		prog_din[j] = prog_din[j];
		}
	}

	cout << prog_din[R_dinheiro] << endl;
    
}
