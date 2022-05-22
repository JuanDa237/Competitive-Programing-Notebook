bool replace(string &str, const string &from, const string &to)
{
	size_t start_pos = str.find(from);
	if (start_pos == string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}

string text = "Apple, Banana, Apple";
replace(text, "Apple", "Banana");
// Output: Banana, Banana, Apple