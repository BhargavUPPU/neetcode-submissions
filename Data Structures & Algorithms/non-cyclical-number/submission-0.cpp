class Solution {
public:
    int get_next_number(int n){
        int next_number=0;
        while(n>0){
            int digit=n%10;
             n=n/10;
            next_number+=digit*digit;
        }
        return next_number;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=get_next_number(slow);
            fast=get_next_number(get_next_number(fast));
        }while(slow!=fast);
        return slow==1;
    }

};
