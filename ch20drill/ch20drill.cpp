#include "../std_lib_facilities.h"

template<typename iter1, typename iter2>
	iter2 ccopy(iter1 f1, iter1 e1, iter2 f2){
		for(;f1 !=e1;++f1){
			*f2 = *f1;
			f2++;
		}
		return f2;
	}
int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> lis = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int arr2[10];
	for (int i = 0;i<10;++i){
		arr2[i] = arr[i];
	}
	vector<int> vec2 = vec;
	list<int> lis2 = lis;

	for(int i = 0;i<10;++i){
		arr[i] += 2;
	}
	for(int i = 0;i<10;++i){
		vec[i] += 3;
	}
	for(int& i:lis){
		i +=5;
	}

	ccopy(arr, arr+10, vec.begin());
	ccopy(lis.begin(), lis.end(), arr);

	if(find(vec.begin(), vec.end(), 3) != vec.end()){
		for(int i = 0;i<vec.size(); ++i){
			if(vec[i] == 3){
				cout << "itt van a harom: " << i << "\n";
				break;
			}
		}
	}else{
		cout << "nincs harom :( \n";
	}
	if(find(lis.begin(), lis.end(), 27) != lis.end()){
		int counter = 0;
		for(int i:lis){
			if(i == 27){
				cout << "itt a huszonhét : " << counter << "\n";
				break;
			}
			counter++;
		}
	}else{
		cout << "nincs huszonhet :(( \n";
	}

	return 0;
}