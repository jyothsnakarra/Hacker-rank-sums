class NumArray {
public:
    NumArray(vector<int>& nums)
        : Nums(std::move(nums))
    {}

    void update(int i, int val) {
        Nums[i] = val;
    }

    int sumRange(int i, int j) {
        return std::accumulate(Nums.begin() + i, Nums.begin() + j + 1, 0, std::plus<>());
    }

private:
    vector<int> Nums;
};
