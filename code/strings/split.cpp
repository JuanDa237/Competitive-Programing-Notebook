vector<string> split(string str, char del)
{
	vector<string> tokens;
	string token;
	stringstream ss(str);

	while (getline(ss, token, del))
	{
		tokens.push_back(token);
	}

	return tokens;
}

vector<string> tokens = split("Apple Banana Apple", ' ');
copy(tokens.begin(), tokens.end(), ostream_iterator<string>(cout, ","));
// Output: Apple,Banana,Apple,