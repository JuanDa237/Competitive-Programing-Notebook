void ltrim(string &s)
{
	s.erase(s.begin(), find_if(s.begin(), s.end(), !::isspace));
}

void rtrim(string &s)
{
	s.erase(find_if(s.rbegin(), s.rend(), !::isspace).base(), s.end());
}

string text = "   ' Apple '   ";
ltrim(text);
rtrim(text);
// Output:' Apple '