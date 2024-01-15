#include <string>

std::string createPhoneNumber(const int arr[10]) {
    // Using string stream for concatenation
    std::stringstream ss;
    
    // Formatting the phone number
    ss << "(" << arr[0] << arr[1] << arr[2] << ") "
       << arr[3] << arr[4] << arr[5] << "-"
       << arr[6] << arr[7] << arr[8] << arr[9];
    
    // Returning the formatted string
    return ss.str();
}
