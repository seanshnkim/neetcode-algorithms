/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

bool comp(Interval x, Interval y) {
    return x.start < y.start;
}

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) {
            return true;
        }

        sort(intervals.begin(), intervals.end(), comp);
        int maxEnd = intervals[0].end;

        for (int i=1; i < intervals.size(); i++) {
            if (intervals[i].start < maxEnd) {
                return false;
            }
            maxEnd = max(intervals[i].end, maxEnd);
        }
        return true;
    }
};
