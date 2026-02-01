bool isPalindrome(int x) {
    long temp = x, rev = 0, rem = 0;
    while(temp != 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(rev == x){
        if(rev < 0){
            return false;
        } else{
            return true;
        }
    } else{
        return false;
    }
}