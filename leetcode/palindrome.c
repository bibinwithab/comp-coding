bool isPalindrome(int x){
    long int a,sum=0,temp=x;
    if(x<0)
    return false;
    while(x)
    {
        a = x%10;
        sum = sum*10 + a;
        x = x/10;
    }
    if(sum==temp)
    return true;
    else
    return false;
}
