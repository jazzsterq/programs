import numpy as np
import matplotlib.pyplot as plt

def uniform_integral(bins, data_range):
    bin_width = bins[1] - bins[0]
    total_area = data_range * 1.0
    integral = np.linspace(0, total_area, len(bins) - 1)
    return integral

def integral_histogram(hist, bins):
    return np.cumsum(hist) * (bins[1] - bins[0])

def plot_graph(data, bin_size):
    plt.figure(figsize=(10, 5))
    plt.subplot(1, 2, 1)
    hist, bins, _ = plt.hist(data, bins=bin_size, density=True, alpha=0.7,
                             label='Histogram Distribution', edgecolor='black', color='green')
    plt.title(f'Histogram with {bin_size} bins')
    plt.xlabel('Value')
    plt.ylabel('Probability Density')
    
    plt.subplot(1, 2, 2)
    integral_hist = integral_histogram(hist, bins)
    plt.plot(bins[:-1], integral_hist, label='Histogram Integral')

    data_range = max(data) - min(data)
    integral_uniform = uniform_integral(bins, data_range)
    plt.plot(bins[:-1], integral_uniform, label='Uniform Distribution Integral')

    plt.title('Comparison of Integral')
    plt.xlabel('Value')
    plt.legend()
    plt.show()

data = np.random.uniform(0, 1, 1000)
bin_size = 100
plot_graph(data, bin_size)
