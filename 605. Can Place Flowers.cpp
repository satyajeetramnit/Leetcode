class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        for (int i = 0; i < f.size(); ++i) {
            if (f[i]) continue;
            bool fl = true;
            if (i - 1 >= 0 && f[i - 1] == 1) {
                fl = false;
            } 
            if (fl && i + 1 < f.size() && f[i + 1] == 1) {
                fl = false;
            }
            f[i] = int(fl); n-= int(fl);
        }
        return n <= 0;
    }
};