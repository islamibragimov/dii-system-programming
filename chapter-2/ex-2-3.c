    
-should take hex as decimal in form 0x1A1
-retrun int 1*1 + 16*10 + 16*16*1
*/
int bro_htoi(char s[]) {
    int i, result=0;
    for (i=2;i<=strlen(s);++i) {
        if (s[i]>='0' && s[i]<='9') {
            result = result + 123     
        } else if (s[i]=='A' || s[i]=='B' || s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='F') {
            
        }

    }
    return result;
    
}