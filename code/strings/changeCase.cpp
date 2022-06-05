string st = "ApPlE";

// To lower case
transform(st.begin(), st.end(), st.begin(), ::tolower);
// Output: apple

// To upper case
transform(st.begin(), st.end(), st.begin(), ::toupper);
// Output: APPLE

// Capitalize
transform(st.begin(), st.end(), st.begin(), ::tolower);
st[0] = toupper(st[0]);
// Output: Apple