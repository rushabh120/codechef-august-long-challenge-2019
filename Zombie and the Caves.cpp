#include<bits/stdc++.h>
#include <algorithm>

#define SIZE 100000
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))
using namespace std;


vector<int> radiation_level;
vector<int> radiation_power;


int main(){
	int T;
	cin>>T;

	while(T--){
		int N;
		cin>>N;
        long long int radiation_zombies[N];
        long long int radiation_final[N];

		radiation_level.assign(N+1,0);
		radiation_power.resize(N+1);

		for(int i=0;i<N;i++)
			cin>>radiation_power[i+1];



		int left,right;
		for(int i=1;i<=N;i++){
			left = MAX(0,i-radiation_power[i]);
			right = MIN(N,i+radiation_power[i]);

			radiation_level[left]++;
			if(right < N)
         		radiation_level[right+1]--;
		}

        int w=0;
		for(int i=1;i<=N;i++){
			radiation_level[i] += radiation_level[i-1];
            radiation_final[w]=radiation_level[i];
            w++;
		}

        for(int i=0;i<N;i++)
			cin>>radiation_zombies[i];

			sort(radiation_zombies,radiation_zombies+N);
            sort(radiation_final,radiation_final+N);

            int c=0;
            for(int i=0;i<N;i++){
                if(radiation_zombies[i]!=radiation_final[i]){
                    c=1;
                    break;
                }
            }
        if(c==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        }

	return 0;
}
