#include "sharply.h"

string subset[1001];
vector<pair<int,string> > player_v;
vector<pair<int,string> > player_sharply;
vector<string> part;

void combination(int now,int start,int n,int m){
	string temp ="";
	char str[3];
	if(now == m+1){
    	for(int i = 1; i <= m; i++){
			temp = temp +"P" +subset[i]+" ";
		}
		player_v.push_back(make_pair(0,temp));
    	return ;
   }
	else
		for(int j = start; j<= n; j++){
			sprintf(str, "%d", j);
			subset[now]=str;
    		combination(now+1,j+1,n,m);
   }
}

int main(){
	int player_num,input_v;
	float sharply_temp,sharply_v;
	char *p;
	char temp[1024];
	int count;

	cout << "Please input players number : ";
	cin >> player_num;
	for(int rank = 1; rank <= player_num; rank++){
		combination(1,1,player_num,rank);
	}
	// input value
	for(int i = 0; i < player_v.size(); i++){
		cout << "{ "<<player_v[i].second <<"} value : ";
	    cin >> player_v[i].first;
	}	
	//calculate sharply value
	for(int i = 0; i < player_num; i++){
		sharply_v = 0.0;
		for(int j = 0; j < player_v.size(); j++){
			if(player_v[j].second.find(player_v[i].second,0) == -1 ){
				// |S|!*(n-|S|-1)!
				sharply_temp = factorial(find_P(player_v[j].second))*factorial(player_num-find_P(player_v[j].second)-1)*1.0;				
				for(int k = 0; k < player_v.size(); k++){
					count = 0;
					// coampared string partition 
					strcpy(temp, player_v[j].second.c_str());
					p = strtok (temp," ");
					while (p != NULL)
					{					
						part.push_back(p);						
					    p = strtok (NULL, " ");
					}
					// v(S U {i}) - v(S)
					if(find_P(player_v[k].second) == (find_P(player_v[j].second)+1)){
						for(int q = 0; q < part.size(); q++)
							if(player_v[k].second.find(part[q],0) != -1)
								count++;		
						if(player_v[k].second.find(player_v[i].second,0) != -1 && count == find_P(player_v[j].second))
							sharply_temp = sharply_temp * (player_v[k].first - player_v[j].first);																			
					}
					part.clear();				
				}	
				sharply_v +=  sharply_temp;								
			}		
		}	
		
		//handle {NULL}	
		sharply_temp = factorial(player_num-1)*1.0;
		sharply_temp = player_v[i].first * sharply_temp;
		sharply_v +=  sharply_temp;	
			
		// finally div n!
		sharply_v = sharply_v/factorial(player_num)*1.0;
		
		// store value
		char c[3];
		string str = "";
		sprintf(c, "%d", i+1);
		str = c;
		player_sharply.push_back(make_pair(sharply_v,"P"+str));
	}
		// print result
	for(int i = 0; i < player_sharply.size(); i++){
	    cout << player_sharply[i].second << " : " << player_sharply[i].first << endl;
	}
}
