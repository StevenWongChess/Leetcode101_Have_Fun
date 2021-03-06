class Solution
{
public:
    string reformatDate(string date)
    {
        unordered_map<string, string> dict = {
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"},
        };

        stringstream ss(date);
        string year, month, day;
        ss >> day >> month >> year;

        int n = day.length();
        day = day.substr(0, n - 2);
        if (day.length() == 1)
        {
            day = "0" + day;
        }
        return year + "-" + dict[month] + "-" + day;
    }
};