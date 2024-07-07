MOD = 998244353

def mod_exp(base, exp, mod):
    result = 1
    while exp > 0:
        if exp % 2 == 1:
            result = (result * base) % mod
        base = (base * base) % mod
        exp //= 2
    return result

N = 4
K = 4

# Calculate (N + 1) % MOD
numerator = (N + 1) % MOD  # 5 % 998244353 = 5

# Find the modular inverse of 2 under MOD
inverse_of_2 = mod_exp(2, MOD - 2, MOD)  # 2^998244351 % 998244353 = 499122177

# Calculate the result as (numerator * inverse_of_2) % MOD
result = (numerator * inverse_of_2) % MOD  # (5 * 499122177) % 998244353

print(result)  # Expected output for N = 4, K = 4 is 592707587
