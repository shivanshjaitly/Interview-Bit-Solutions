// intervals = [1,3],[6,9]
// newInterval = [2,5]
// ans = [1,5],[6,9]


/*
struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> ans;
    bool flag=false;
    int start=newInterval.start,end=newInterval.end;
    for(int i=0;i<intervals.size();i++){
        if(intervals[i].end<start)
            ans.push_back(intervals[i]);
        else if(intervals[i].start>end){
            if(!flag)
                ans.push_back({start,end});
            ans.push_back(intervals[i]);
            flag=true;   
        }else{
            start=min(start,intervals[i].start);
            end=max(end,intervals[i].end);
        }
    }
    if(!flag)
        ans.push_back({start,end});
    return ans;
}
