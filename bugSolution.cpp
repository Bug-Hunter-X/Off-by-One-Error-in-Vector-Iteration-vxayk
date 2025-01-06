std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}

std::cout << std::endl; 

//Or using iterators which is generally safer and more idiomatic in C++:
for (int x : vec) {
    std::cout << x << " ";
}
std::cout << std::endl;