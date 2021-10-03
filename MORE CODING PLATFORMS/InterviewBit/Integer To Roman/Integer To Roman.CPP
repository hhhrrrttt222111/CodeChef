string Solution::intToRoman(int n) {
    string ans;
        while(n!=0){
            if(n >= 1000){
                while(n>=1000){
                ans = ans+'M';
                n = n-1000;
                }
            }
             if(n>=900){
                ans = ans+"CM";
                 n -= 900;
            }
            if(n >= 500){
                ans = ans+'D';
                n -= 500;
            }
            if(n >= 400){
                ans = ans+"CD";
                n -= 400;
            }
            if(n >= 100){
                while(n>=100){
                ans = ans+'C';
                n = n-100;
                }
            }
            if(n >= 90){
                ans += "XC";
                n -= 90;
            }  
            if(n >= 50){
                ans += 'L';
                n -= 50;
            }
            if(n >= 40){
                ans += "XL";
                n -= 40;
            }
            if(n >= 10){
                while(n>= 10){
                    ans += 'X';
                    n -= 10;
                }
            }
            if(n == 9){
                ans += "IX";
                n -= 9;
            }
            if(n >= 5){
                ans += 'V';
                n -= 5;
            }
            if(n == 4){
                ans += "IV";
                n -= 4;
            }
            if(n>=1){
                while(n>=1){
                    ans += 'I';
                    n--;
                }
            }
        }
        return ans;
}