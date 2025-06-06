# DSA.4_Animated_Bubble_Sort_Visualization

This project visualizes the Bubble Sort algorithm in C++ using a stack-of-stars (`*`) animation. Each element of the array is represented as a column of stars to help visualize the sorting process step-by-step. The project also measures and compares the sorting time for different levels of initial sortedness.

## 🎯 Objective

- To implement an animated Bubble Sort algorithm using ASCII star columns for each array element.
- To compare performance across different levels of initial sortedness:
  - 75% sorted
  - 50% sorted
  - 25% sorted
  - 0% sorted (completely random)
- To visualize:
  - The sorting process
  - Comparisons using red-colored stars (as described in course material)
  - Time taken to sort arrays of increasing sizes
- To export timing results to Microsoft Excel and plot graphs for analysis.

## 📥 Input

- An array of size `n`, starting from `n = 10` and increasing in increments of 10 up to `n = 40`.
- Random integers in the range [1, 10] stored in each array element.
- Sortedness levels:
  - 75% sorted
  - 50% sorted
  - 25% sorted
  - 0% sorted

## 📤 Output

- **Animated visualization** of the Bubble Sort in ascending order:
  - Each number in the array is shown as a vertical stack of `*`.
  - Compared values are highlighted using red stars (as per course material).
- **Timing results** for each sorting run and sortedness level.
- **Excel Graphs** plotting:
  - **X-axis:** Array size (`n`)
  - **Y-axis:** Average time taken for complete sorting for each sortedness level
