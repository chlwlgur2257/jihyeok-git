#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> de;
	int N, M;
	int left, right;
	int count = 0;
	cin >> N >> M;
	
	for(int i=1; i<=N; i++)//deque에 1부터 n까지 숫자를 저장한다.
    {
		de.push_back(i);
	}

	while(M--)//m의 숫자만큼 찾아야하는 숫자를 입력받는다.
    {
		int num;
		cin >> num;
		
		for(int i=0; i<de.size(); i++)
        {
			
			if(de[i] == num)
            {
				left = i;
				right = de.size()-i;
				break;
				
			}
		}
		
		if(left<=right)
        {
			while(1)
            {
				if(de.front()==num)
                {
					break;
                }
				de.push_back(de.front());
				de.pop_front();
				count++;
				
			}
			de.pop_front();
		}
		
		else
        {
			count++;
			while(1)
            {
				if(de.back()==num)
                {
					break;
                }
				de.push_front(de.back());
				de.pop_back();
				count++;
			}
			de.pop_back();
		}
	}
	cout << count;
	return 0;
}