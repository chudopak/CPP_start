#include <stack>
#include "mutantstack.hpp"

int main()
{
	srand(time(NULL));
	MutantStack<int> mstack;

	std::cout << "pushing 5" <<std::endl;
	mstack.push(5);
	std::cout << "pushing 17" <<std::endl;
	mstack.push(17);

	std::cout << "top of the stack" << mstack.top() << std::endl;
	std::cout << std::endl;

	std::cout << "Popping" << std::endl;
	mstack.pop();

	std::cout << "Stack size - " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "pushing 3" <<std::endl;
	mstack.push(3);
	std::cout << "pushing 5" <<std::endl;
	mstack.push(5);
	std::cout << "pushing 737" <<std::endl;
	mstack.push(737);
	
	//[...] mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite) {
		std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "our stack size: " << mstack.size() << "\nnew stack size: " << s.size() << std::endl;

	std::cout << "Creating new stack" << std::endl;

	MutantStack<int> test_random;
	for (int i = 0; i < 10; i++) {
		test_random.push(rand() % 1000);
	}

	MutantStack<int>::iterator test_iter = test_random.begin();

	while (test_iter != test_random.end()) {
		std::cout << *test_iter << std::endl;
		test_iter++;
	}

	std::cout << "Creating copy of new stack" << std::endl;
	MutantStack<int> test_copy(test_random);

	MutantStack<int>::iterator iter_copy = test_copy.begin();

	std::cout << "Output copy" << std::endl;
	while (iter_copy != test_copy.end()) {
		std::cout << *iter_copy << std::endl;
		iter_copy++;
	}
	return 0;
}