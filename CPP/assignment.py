import numpy as np
import matplotlib.pyplot as plt

# Parameters
n_samples = 10000
bin_size = 10
start, end = 0, 1  # Uniform distribution range

# Generate uniform distribution data
data = np.random.uniform(start, end, n_samples)

# Create histogram
hist, bin_edges = np.histogram(data, bins=bin_size, range=(start, end), density=True)
bin_centers = (bin_edges[:-1] + bin_edges[1:]) / 2

# Integrate the histogram to get the CDF
cdf = np.cumsum(hist) * (bin_edges[1] - bin_edges[0])

# Plotting
plt.figure(figsize=(10, 6))

# Plot histogram as a line plot for clear comparison
plt.plot(bin_centers, hist, label='Histogram', drawstyle='steps-mid')

# Plot CDF
plt.plot(bin_centers, cdf, label='CDF', linestyle='--')

plt.title('Histogram vs. CDF of Uniform Distribution')
plt.xlabel('Value')
plt.ylabel('Density / Cumulative Probability')
plt.legend()
plt.grid(True)
plt.show()
