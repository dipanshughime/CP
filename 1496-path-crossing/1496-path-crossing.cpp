class Solution {
public:
    bool isPathCrossing(string path) {
        
        set<pair<int, int>>s;
        int x = 0, y = 0;
        s.insert(make_pair(x, y));
        int n = path.length();

        for (int i = 0; i < n; i++) {
            if (path[i] == 'N')
                y += 1;
            else if (path[i] == 'S')
                y -= 1;
            else if (path[i] == 'E')
                x += 1;
            else if (path[i] == 'W')
                x -= 1;

            if (s.find(make_pair(x, y)) != s.end())
                    return true;
            s.insert(make_pair(x, y));
        }

        return false;
    }
};