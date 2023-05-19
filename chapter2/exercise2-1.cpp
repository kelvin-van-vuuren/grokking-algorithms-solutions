#include <iostream>

/* Suppose you're building an app to keep track of your finances. Every day, you write down everything you spent money
 * on. At the end of the month, you review your expenses and sum up how much you spent. So, you have lots of inserts and
 * a few reads. Should you use an array or a list? */

int main()
{
    std::cout << "Lists can perform insertion operations in constant time (O(1)) which is much faster compared to an "
                 "array's linear time (O(n)). Because you are performing a lot of inserts by writing down everything "
                 "you have spent money on at the end of the day, a list would be a better data structure to use. "
                 "Expenses are reviewed once at the end of the month, which means the entire list needs to be read. "
                 "Arrays provide an advantage when random access is required, which in this case it is not. Therefore, "
                 "a list would also perform well in comparison to an array when performing reads in this scenario."
              << std::endl;
}
