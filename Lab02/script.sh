#1/bin/bash
date



#print numbers from 1 to 20"

for i in {1..20};do
    echo "Number: $i"
done


current_time=$(date +%s)

echo "current time in seconds since epoch: $current_time"

# Using let or double parentheses for arithmetic
let double_time=current_time*2

echo "current time * 2: $double_time"
