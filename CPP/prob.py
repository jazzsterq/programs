import numpy as np
import matplotlib.pyplot as plt

# Generate data from a uniform distribution
np.random.seed(0)  # for reproducibility
data = np.random.uniform(0, 1, size=1000)

# Define different bin sizes
bin_sizes = np.arange(10, 501, 10)

# Initialize lists to store areas
histogram_areas = []
integration_areas = []

# Calculate the areas for each bin size
for bin_size in bin_sizes:
    hist, bins = np.histogram(data, bins=bin_size, density=True)
    bin_centers = (bins[:-1] + bins[1:]) / 2
    histogram_area = np.sum(hist * np.diff(bins))
    integration_area = np.trapz(hist, x=bin_centers)
    histogram_areas.append(histogram_area)
    integration_areas.append(integration_area)

# Plot the results
plt.figure(figsize=(10, 6))
plt.plot(bin_sizes, histogram_areas, label='Histogram Area')
plt.plot(bin_sizes, integration_areas, label='Integration Area')
plt.xlabel('Number of Bins')
plt.ylabel('Area')
plt.title('Comparison of Histogram and Integration for Uniform Distribution')
plt.legend()
plt.show()
