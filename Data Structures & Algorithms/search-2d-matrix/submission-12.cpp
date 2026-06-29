class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), col = matrix[0].size();
        int l = 0, r = rows - 1, res, mid;
        mid = l + (r - l) / 2;

        if (rows == 1 && col == 1) {
            if (matrix[0][0] == target)
                return true;
            else
                return false;
        }

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (target >= matrix[mid][0] && target <= matrix[mid][col - 1]) {
                res = mid;
                break;
            }
            if (matrix[mid][col - 1] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (l > r)
            return false;
        else
            res = mid;

        l = 0;
        r = col - 1;

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (matrix[res][mid] == target) return true;
            if (matrix[res][mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        return false;
    }
};
