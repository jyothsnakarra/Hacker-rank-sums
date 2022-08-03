class MyCalendar {
map<int,int> calendar;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto next = calendar.upper_bound(start);
        if(next != calendar.end() && (*next).second < end)
          return false;
        calendar.insert({end,start});
        return true;
    }
};
