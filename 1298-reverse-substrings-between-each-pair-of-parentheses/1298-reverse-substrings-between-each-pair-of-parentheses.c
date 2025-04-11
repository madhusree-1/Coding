int stack[2001],top=-1;
void push(int i){
    stack[++top]=i;
}
int pop(){
   return stack[top--];
}
void reverse(char *s,int l,int r){
    while(l<r){
        char temp = s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
}
char* reverseParentheses(char* s) {
static char str[100001];
    int k=0,l=0,r=0;
    for(int i=0;s[i]!='\0';++i){
        if(s[i]=='('){
            push(i);
        }
        else if(s[i]==')'){
            l=pop();
            r=i;
            if(l==-1) continue;
            reverse(s,l+1,r-1);
        }
    }
    for(int i=0;s[i]!='\0';++i){
        if(s[i]!='(' && s[i]!=')'){
            str[k++]=s[i];
        }
    }
    str[k]='\0';
    return str;
}