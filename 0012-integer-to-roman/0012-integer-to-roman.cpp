class Solution {
public:
    string intToRoman(int num) {
        string once[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thoud[]={"","M","MM","MMM"};
        return thoud[(num/1000)]+hund[(num%1000)/100]+tens[(num%100)/10]+once[num%10];
    }
};