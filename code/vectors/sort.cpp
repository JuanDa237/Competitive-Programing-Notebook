// This works with any data type
vector<int> vecs = {2, 3, 1, 4};

sort(vecs.begin(), vecs.end());
// Ascending: [1, 2, 3, 4]

sort(vecs.begin(), vecs.end(), ::greater<int>());
// Descending: [4, 3, 2, 1]
