import pandas as pd
import matplotlib.pyplot as plt

# Your original data
data = {
    'Name': ['Alice','Bob','Charlie','David'],
    'Department':['HR','Engineering','Engineering','HR'],
    'Salary': [50000, 80000, 75000, 52000]
}

df = pd.DataFrame(data)
grouped = df.groupby('Department')['Salary'].mean()
print(grouped)

# Create visualizations
fig, ((ax1, ax2), (ax3, ax4)) = plt.subplots(2, 2, figsize=(12, 10))

# 1. Bar Chart (Most common for this type of data)
grouped.plot(kind='bar', ax=ax1, color=['skyblue', 'lightcoral'])
ax1.set_title('Average Salary by Department', fontsize=14, fontweight='bold')
ax1.set_xlabel('Department')
ax1.set_ylabel('Average Salary ($)')
ax1.tick_params(axis='x', rotation=45)
ax1.grid(axis='y', alpha=0.3)

# 2. Horizontal Bar Chart
grouped.plot(kind='barh', ax=ax2, color=['lightgreen', 'orange'])
ax2.set_title('Average Salary by Department (Horizontal)', fontsize=14, fontweight='bold')
ax2.set_xlabel('Average Salary ($)')
ax2.set_ylabel('Department')
ax2.grid(axis='x', alpha=0.3)

# 3. Pie Chart
grouped.plot(kind='pie', ax=ax3, autopct='%1.1f%%', startangle=90)
ax3.set_title('Salary Distribution by Department', fontsize=14, fontweight='bold')
ax3.set_ylabel('')  # Remove default ylabel for pie chart

# 4. Individual Employee Salaries
df.plot(x='Name', y='Salary', kind='bar', ax=ax4, color=['red', 'blue', 'blue', 'red'])
ax4.set_title('Individual Employee Salaries', fontsize=14, fontweight='bold')
ax4.set_xlabel('Employee Name')
ax4.set_ylabel('Salary ($)')
ax4.tick_params(axis='x', rotation=45)
ax4.grid(axis='y', alpha=0.3)

# Color-code by department
colors = ['red' if dept == 'HR' else 'blue' for dept in df['Department']]
ax4.clear()
bars = ax4.bar(df['Name'], df['Salary'], color=colors)
ax4.set_title('Individual Employee Salaries (Color-coded by Dept)', fontsize=14, fontweight='bold')
ax4.set_xlabel('Employee Name')
ax4.set_ylabel('Salary ($)')
ax4.tick_params(axis='x', rotation=45)
ax4.grid(axis='y', alpha=0.3)

# Add legend for color coding
import matplotlib.patches as mpatches
hr_patch = mpatches.Patch(color='red', label='HR')
eng_patch = mpatches.Patch(color='blue', label='Engineering')
ax4.legend(handles=[hr_patch, eng_patch])

plt.tight_layout()
plt.show()
