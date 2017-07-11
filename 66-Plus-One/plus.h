//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_66_PLUS_ONE_PLUS_H
#define INC_66_PLUS_ONE_PLUS_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
 * You may assume the integer do not contain any leading zero, except the number 0 itself.
 * The digits are stored such that the most significant digit is at the head of the list.
 */

/*
 * 这道题有各种花式解法，我在这里用的是控制进位
 */

/*
 *  这是一种花式解法，非常优美简洁
void plusone(vector<int> &digits)
{
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i)
	{
		if (digits[i] == 9)
		{
			digits[i] = 0;
		}
		else
		{
			digits[i]++;
			return;
		}
	}
		digits[0] =1;
		digits.push_back(0);
}
 */
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int len = digits.size();
        int carry = 1;
        for(int i = len - 1; i >= 0; i--) {
            int temp = digits[i] + carry;
            digits[i] = temp % 10;
            carry = temp / 10;
        }
        if(carry != 0)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
#endif //INC_66_PLUS_ONE_PLUS_H
