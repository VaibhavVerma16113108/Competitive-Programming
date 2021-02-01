class Solution
{
public:
    vector<int> findRook(vector<vector<char>> &board)
    {
        vector<int> pos(2);
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 'R')
                {
                    pos[0] = i, pos[1] = j;
                    break;
                }
            }
        }
        return pos;
    }

    int numRookCaptures(vector<vector<char>> &board)
    {
        vector<int> pos = findRook(board);
        int posx = pos[0], posy = pos[1];
        int cnt = 0;
        for (int i = posx - 1; i >= 0; i--)
        {
            char piece = board[i][posy];
            if (piece == 'p')
            {
                cnt++;
                break;
            }
            else if (piece == 'B')
                break;
        }
        for (int i = posx + 1; i < board.size(); i++)
        {
            char piece = board[i][posy];
            if (piece == 'p')
            {
                cnt++;
                break;
            }
            else if (piece == 'B')
                break;
        }
        for (int i = posy - 1; i >= 0; i--)
        {
            char piece = board[posx][i];
            if (piece == 'p')
            {
                cnt++;
                break;
            }
            else if (piece == 'B')
                break;
        }
        for (int i = posy + 1; i < board[0].size(); i++)
        {
            char piece = board[posx][i];
            if (piece == 'p')
            {
                cnt++;
                break;
            }
            else if (piece == 'B')
                break;
        }
        return cnt;
    }
};