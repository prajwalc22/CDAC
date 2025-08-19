fruits=("apple" "mango" "banana" "orange")
numbers=(1 2 3 4 5)
fruits[4]="grape"

# fruits+="melon"

echo "First fruit" ${fruits}

echo "All fruits" ${fruits[@]}

echo "All fruits" ${#fruits[@]}

for i in ${fruits[@]};do
echo $i
done