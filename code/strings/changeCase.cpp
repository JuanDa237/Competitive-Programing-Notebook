string text = "ApPlE";

// To lower case
transform(text.begin(), text.end(), text.begin(), ::tolower);
// Output: apple

// To upper case
transform(text.begin(), text.end(), text.begin(), ::toupper);
// Output: APPLE

// Capitalize
transform(text.begin(), text.end(), text.begin(), ::tolower);
str[0] = toupper(str[0]);
// Output: Apple