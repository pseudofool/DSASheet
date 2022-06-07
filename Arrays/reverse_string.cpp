string reverseWord(string str){
    int len = str.length();
    int i = 0;
    int j = len-1;
    while(i < j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}