class MyCalendarTwo {
    vector<pair<int, int>> singleBookings;
    vector<pair<int, int>> doubleBookings;
public:
    MyCalendarTwo() {
        
    }
    bool book(int start, int end) {
        for (auto& booking : doubleBookings) {
            if (max(start, booking.first) < min(end, booking.second)) {
                return false;
            }
        }
        for (auto& booking : singleBookings) {
            int overlapStart = max(start, booking.first);
            int overlapEnd = min(end, booking.second);
            if (overlapStart < overlapEnd) {
                doubleBookings.push_back({overlapStart, overlapEnd});
            }
        }
                singleBookings.push_back({start, end});
        
        return true;
    }
};


