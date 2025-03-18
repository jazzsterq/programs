def chimes_at(hour, minute):
    if minute == 0:
        return 3  
    if minute in {15, 30, 45}:
        return 1 
    return 0 

def solution(S, T):
    start_hour, start_minute = map(int, S.split(':'))
    end_hour, end_minute = map(int, T.split(':'))

    total_chimes = 0
    current_hour = start_hour
    current_minute = start_minute

    while (current_hour != end_hour or current_minute != end_minute):
        total_chimes += chimes_at(current_hour, current_minute)
        current_minute += 1
        if current_minute == 60:
            current_minute = 0
            current_hour = (current_hour + 1) % 24  

    total_chimes += chimes_at(end_hour, end_minute)

    return total_chimes
