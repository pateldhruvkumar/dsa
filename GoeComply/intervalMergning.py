def is_suspicious(intervals, K, N):
    # EDGE CASE: Empty input
    if not intervals:
        return False

    # STEP 1: Sort strictly by start time
    # Time Complexity: O(n log n)
    intervals.sort(key=lambda x: x[0])
    print(intervals)

    merged = []
    
    # Initialize with the first interval
    merged.append(intervals[0])
    print(merged)

    # STEP 2: Iterate and Merge
    for current_start, current_end in intervals[1:]:
        last_start, last_end = merged[-1]
        print("current_start, current_end", current_start, current_end)
        print("last_start, last_end", last_start, last_end)
        if current_start <= last_end:
            # Overlap detected: Merge them
            # We update the end time of the last interval in 'merged'
            merged[-1] = (last_start, max(last_end, current_end))
            print("merged[-1]", merged)
        else:
            # No overlap: Add as new interval
            merged.append((current_start, current_end))
            print("merged else", merged)

    # STEP 3: Calculate Total Duration
    total_duration = 0
    for start, end in merged:
        total_duration += (end - start)
        print("total_duration", total_duration)
    # STEP 4: Check Fraud Conditions
    # Condition 1: Total duration > K
    # Condition 2: Number of merged sessions > N
    count_sessions = len(merged)
    print("count_sessions", count_sessions)
    return total_duration > K and count_sessions > N

# Test with the provided example
input_intervals = [(1, 5), (10, 15), (4, 8), (20, 25)]
val_K = 15
val_N = 2

print(f"Suspicious: {is_suspicious(input_intervals, val_K, val_N)}")