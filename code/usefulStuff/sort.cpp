// This works with any data type

vector<int> nums = {2, 3, 1, 4};

// Ascending
sort(nums.begin(), nums.end());
// nums = 1, 2, 3, 4

// Descending
sort(nums.begin(), nums.end(), ::greater<int>());
// nums = 4, 3 , 2, 1
