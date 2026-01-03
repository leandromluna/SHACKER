class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> valores = {
            {1000,"M"}, {900,"CM"}, {500,"D"}, {400,"CD"},
            {100,"C"},  {90,"XC"},  {50,"L"},  {40,"XL"},
            {10,"X"},   {9,"IX"},   {5,"V"},   {4,"IV"},
            {1,"I"}
        }; //O(1)



        string res = "";


        /**for (auto &v : valores){ //O(1)
            while (num >= v.first) { //O(1)
                res += v.second;
                num -= v.first;
            }
        }
        */

        for (auto &v : valores){
            int times = num/v.first;
            while (times--) {
                res += v.second;
               // num -= v.first;
            }
            num = num % v.first;
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

