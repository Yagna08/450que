string reverseWord(string str){
    int i=0,j=str.length()-1;
    char temp;
    while(i<j)
    {
        temp=str[i];
        str[i++]=str[j];
        str[j--]=temp;
        
    }
    return str;
  //Your code here
}
