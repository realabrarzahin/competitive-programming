
#include <iostream>
#include <vector>

int lower_bound(const std::vector<int>& a, int target) {
    int low = 0, high = (int)a.size(); // note: high is exclusive

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (a[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }

    return low; // first index with a[i] ≥ target
}

int main() {
    std::vector<int> a = {1, 3, 3, 5, 7, 9};
    int target = 3;

    int idx = lower_bound(a, target);
    if (idx < a.size())
        std::cout << "First index ≥ " << target << " is " << idx << ", value = " << a[idx] << '\n';
    else
        std::cout << "No element ≥ " << target << '\n';
}
