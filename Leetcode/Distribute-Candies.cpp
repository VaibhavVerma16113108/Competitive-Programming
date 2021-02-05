class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_set<int> candies;
        for (int i : candyType)
            candies.insert(i);
        return min(candies.size(), candyType.size() / 2);
        ;
    }
};