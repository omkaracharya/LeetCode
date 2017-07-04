class Solution {
public:
    vector<int> constructRectangle(int area) {
        int length, width;
        length = area;
        width = 1;
        for (int i = 1; i * i <= area; i++) {
            if (area % i == 0) {
                width = i;
                length = area / width;
            }
        }
        vector <int> dim;
        dim.push_back(length);
        dim.push_back(width);
        return dim;
    }
};