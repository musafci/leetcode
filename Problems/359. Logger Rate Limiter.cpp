// Problem: https://leetcode.com/problems/logger-rate-limiter/

/**
 * Time Complexity: O(1)
 * Space Complexity: O(N)
*/

class Logger {
public:
    unordered_map<string, int> msgTrack;
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (msgTrack.count(message) == 0 || timestamp >= msgTrack[message]) {
            msgTrack[message] = timestamp + 10;
            return true;
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */