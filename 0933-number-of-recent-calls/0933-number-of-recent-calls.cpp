class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        // we should keep only t-3000 time elements in queue
        int lower = t - 3000;
        // pop all unecessary items
        while(!q.empty() && lower > q.front()){
            q.pop();
        }

        q.push(t);
        // current size of queue
        return q.size();
    }
};