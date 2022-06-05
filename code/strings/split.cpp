vector<string> split(string str, string token)
{
	vector<string> result;

	while (str.size())
	{
		int index = str.find(token);

		if (index != string::npos)
		{
			result.push_back(str.substr(0, index)); // Push until token
			str = str.substr(index + token.size()); // Remove text from 0 to index + token size

			if (str.size() == 0) // Cause token was last content, it should be splitted
				result.push_back(str);
		}
		else
		{
			result.push_back(str);
			str = "";
		}
	}

	return result;
}

vector<string> tokens = split(" Apple Banana  Apple ", " ");
// Output: ["", "Apple", "Banana", "", "Apple", ""]