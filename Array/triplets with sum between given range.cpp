// A = [0.6, 0.7, 0.8, 1.2, 0.4] 
// ans = 1

bool isina(double x){
    if(x>0 && x<2.0/3.0)
        return true;
    return false;
}

bool isinb(double x){
    if(x>=2.0/3.0 && x<1)
        return true;
    return false;
}

bool isinc(double x){
    if(x>=1 && x<2)
        return true;
    return false;
}

int Solution::solve(vector<string> &A) {
    vector<double> v;
    for(int i=0;i<A.size();i++)
        v.push_back(stod(A[i]));
    double max1a=INT_MIN,max2a=INT_MIN,max3a=INT_MIN,max1b=INT_MIN;
    double min1a=INT_MAX,min1b=INT_MAX,min2a=INT_MAX,min2b=INT_MAX,min1c=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(max1a<v[i] && isina(v[i])){
            max3a=max2a;
            max2a=max1a;
            max1a=v[i];
        }else if(max2a<v[i] && isina(v[i])){
            max3a=max2a;
            max2a=v[i];
        }else if(max3a<v[i] && isina(v[i]))
            max3a=v[i];
        else if(max1b<v[i] && isinb(v[i]))
            max1b=v[i];
        if(min1a>v[i] && isina(v[i])){
            min2a=min1a;
            min1a=v[i];
        }else if(min2a>v[i] && isina(v[i]))
            min2a=v[i];
        else if(min1b>v[i] && isinb(v[i])){
            min2b=min1b;
            min1b=v[i];
        }else if(min2b>v[i] && isinb(v[i]))
            min2b=v[i];
        else if(min1c>v[i] && isinc(v[i]))
            min1c=v[i];
    }
    if(max1a+max2a+max3a>1.0)
        return 1;
    else if(max1a+max2a+max1b>1 && max1a+max2a+max1b<2)
        return 1;
    else if(min1a+min2a+min1b>1 && min1a+min2a+min1b<2)
        return 1;
    else if(min1a+min2a+min1c<2)
        return 1;
    else if(min1a+min1b+min2b<2)
        return 1;
    else if(min1a+min1b+min1c<2)
        return 1;
    return 0;
}
