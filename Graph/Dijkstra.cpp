Simple Dijkstra:

int arrival[N][N], departure[N][N];
vector<pair<int, int> > g[N];

void dijkstra(int source, int destination, int arrival[], int departure[])
{
	for(int i=1;i<=n;i++)
	{
		arrival[i]=inf;
		departure[i]=inf;
	}
	arrival[source]=0;
	set<pair<int, int> > s;
	s.insert({0, source});
	while(!s.empty())
	{
		auto x = *(s.begin());
		s.erase(x);
		departure[x.second]=arrival[x.second];
		for(auto it:g[x.second])
		{
			if(arrival[it.first] > departure[x.second] + it.second)
			{
				s.erase({arrival[it.first], it.first});
				arrival[it.first]=departure[x.second] + it.second;
				s.insert({arrival[it.first], it.first});
			}
		}
	}
}
