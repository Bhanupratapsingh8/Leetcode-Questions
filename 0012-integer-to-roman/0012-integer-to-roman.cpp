class Solution {
public:
    string intToRoman(int nums) {

        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundred[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousand[]={"","M","MM","MMM"};

        string roman=thousand[nums/1000]+hundred[nums%1000/100]+tens[nums%100/10]+ones[nums%10];

        return roman;
        
    }
};