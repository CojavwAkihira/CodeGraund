#include <iosteam>

using namespace std;

class Flac{
protected:
	int bunshi;
	int bunbo;
private:
	int GCD(int n1, int n2){
		int m = n1 < n2 ? n2 % n1 : n1 % n2;
		if(m == 0)
			return n1 < n2 ? n1 : n2;
		return GCD(m, n1 < n2 ? n1 : n2);
	}
public:
	Flac(int seisuu){
		bunbo = 1;
		bunshi = seisuu;
	}

	Flac(int bunshi, int bunbo){
		this->bunbo = bunbo;
		this->bunshi = bunshi;
		if(bunbo % bunshi == 0){
			bunbo /= bunshi;
			bunshi /= bunshi;
		}
	}

	void mul(Flac b){
		bunshi *= b.bunshi;
		bunbo *= b.bunbo;
		if(bunbo % bunshi == 0){
			bunbo /= bunshi;
			bunshi /= bunshi;
		}
	}

	void add(Flac b){
		bunshi *= b.bunbo;
		bunshi += b.bunshi;
		if(bunbo % bunshi == 0){
			bunbo /= bunshi;
			bunshi /= bunshi;
		}
	}

	void sub(Flac b){
		
	}

	void div(Flac b){
		
	}

	print(void){
		if(bunbo == 1)
			cout << bunshi << endl;
		else
			cout << bunshi << "/" << bunbo << endl;
	}

int main(void){
	int seisuu;

	cin >> seisuu;
	Frac a(seisuu);
	a.print();

	int bunshi, bunbo;
	cin >> bunshi >>bunbo;
	Flac b(bunshi, bunbo);
	b.print();
	
	a.mul(b).print();
	a.add(b).print();
	a.sub(b).print();
	a.div(b).print();

	a.add(b).mul(b).print();

	return 0;
}