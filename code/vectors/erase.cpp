vector<int> arr = {0, 1, 2, 3, 4, 5};

// Erase One Element At Index
arr.erase(arr.begin() + 1);
// [0, 2, 3, 4, 5]

// Erase from a to b (doesn't include b)
arr.erase(arr.begin() + 1, arr.begin() + 4);
// [0, 4, 5]