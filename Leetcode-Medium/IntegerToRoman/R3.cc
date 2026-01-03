class Solution {
public:
    string intToRoman(int num) {
        static const int val[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        static const char* sym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string res;
        for(int i=0;i<13;i++){
            int times = num / val[i];
            while(times--){
                res += sym[i];
            }
            num %= val[i];
        }
        return res;
    }
};

// O(1)
//  Time Complexity: O(1)
//  The space complexity: O(1)
//** This algorithm uses a greedy approach based on Roman numeral blocks.
//Instead of processing decimal digits, it directly applies the real Roman numeral rules.
//We define a fixed table of Roman values ordered from largest to smallest and always apply the largest possible blockfirst.
//This guarantees a correct, efficient, and case-free conversion.
//The trade-off is that the algorithm depends on a fixed rule table,
//but in exchange we obtain clean, maintainable code with constant time complexity.

