//Push & Pop
//Cho vector và 2 thao tác.
//Thao tác 1 : Thêm 1 phần tử và cuối vector.
//Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng.
// nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác.
// Nếu vector rỗng in ra EMPTY, ngược lại in ra các phần tử trong vector trên 1 dòng.
            //                       _oo0oo_
            //                      o8888888o
            //                      88" . "88
            //                      (| -_- |)
            //                      0\  =  /0
            //                    ___/`---'\___
            //                  .' \\|     |// '.
            //                 / \\|||  :  |||// \
            //                / _||||| -:- |||||- \
            //               |   | \\\  -  /// |   |
            //               | \_|  ''\---/''  |_/ |
            //               \  .-\__  '-'  ___/-. /
            //             ___'. .'  /--.--\  `. .'___
            //          ."" '<  `.___\_<|>_/___.' >' "".
            //         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
            //         \  \ `_.   \_ __\ /__ _/   .-` /  /
            //     =====`-.____`.___ \_____/___.-`___.-'=====
            //                       `=---='
            //
            //     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
            //           	protected by the Buddha 
            //     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <set>
#include <map>
#include <climits>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iomanip>
#include <string>
#include <sstream>
using ll = long long;
const long long mod = 1000000007;
const int MAXV = 1e6 + 1;
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tt; cin >> tt;
        if (tt == 1) {
            int x; cin >> x;
            v.push_back(x);
        }
        else if (tt == 2) {
            if (v.size() > 0) v.pop_back();
        }
    }
    if (v.empty()) cout << "EMPTY";
    else for (int x : v) {
        cout << x << " ";
    }

}
