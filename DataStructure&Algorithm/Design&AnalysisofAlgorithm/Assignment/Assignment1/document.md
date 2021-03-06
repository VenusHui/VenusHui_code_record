## 题目分析及算法思想

本题给定一些硬币面值和一个目标金额 ，要求我们用最少的硬币数量凑出这个目标金额。

### 暴力做法

由于目标金额 `amount` 一定，每一个硬币面值 `coins[i]` 也一定，所以对于每一个面值的硬币，最多拿 $\frac{amount}{coins[i]}$ 个，这样我们就可以对于每一个面值的硬币所拿的个数进行枚举，最终找到总数量最小的即为答案。

显然这种枚举法具有指数级别的时间复杂度，无法有效解决问题。

### 动态规划

为了对暴力解法进行一些优化，我们可以采取动态规划，本题可以采用动态规划的原因主要有一下两点：

- **最优子结构**：为了计算出凑出 $a_i$ 金额所用硬币的最少数量，对于所有小于 $a_i$ 的金额 $a_j$ ，我们可以先计算出凑出 $a_j$ 金额所用硬币的最少数量，如果从 $a_j$ 到 $a_i$ 只需要一枚硬币就可以凑出的话，那么凑出 $a_i$ 金额所用硬币的最少数量一定就是凑出 $a_j$ 金额所用硬币的最少数量再加上 $1$ 。

- **无后效性**：我们并不关心凑出 $a_i$ 金额所用的硬币具体都是什么面值，而只关心凑出该面值所用硬币的最少数量。

用数学语言描述即为：

- **状态**：用 $dp[i]$ 来表示凑出金额为 $i$ 所用硬币的最少数量。

- **转移**：对于一个金额 $a_i$ ，我们枚举硬币面值集合中的面值 $coins[j]$ 满足 $coins[j] <= i$，则有转移方程为：
$$
dp[i] = min(dp[i], dp[i - coins[j]] + 1)
$$

- 核心代码

```cpp
for (int i = 1; i <= amount; i++) {
    for (int j = 0; j < size; j++) {
        if (coins[j] <= i) {
            dp[i] = min(dp[i], dp[i - coins[j]] + 1);
    }
}
```

## 复杂度分析

### 时间复杂度

本题时间复杂度主要体现在上面核心代码中的两层循环，外层循环为从 $0$ 开始搜索每一个金额，直到要求的金额 `amount` ，复杂度为 $O(n)$，内层循环为遍历每一种面值的硬币，复杂度为 $O(m)$。所以总的时间复杂度为 $O(nm)$，其中 $n$ 为所求金额，$m$ 为硬币面值种类。

### 空间复杂度

本题使用一个大小为 `amount + 1` 的数组来记录dp的中间结果，空间复杂度为 $O(n)$。

## 运行截图

![运行截图](./test.png)