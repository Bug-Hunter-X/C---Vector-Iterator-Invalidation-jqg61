std::vector<int> vec; for (int i = 0; i < 10; ++i) { vec.push_back(i); } for (auto it = vec.begin(); it != vec.end(); ) { std::cout << *it << " "; it = vec.erase(it); }