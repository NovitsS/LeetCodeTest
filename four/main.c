bool isPalindrome(int x) {
    int y=0,save=0,k=x;
    if(x<0)
        return false;
    if(x==0)
        return true;
    while(x!=0){
        save=x%10;
        y=y*10+save;
        x=x/10;
    }
    if(k==y)
        return true;
    else return false;
}
