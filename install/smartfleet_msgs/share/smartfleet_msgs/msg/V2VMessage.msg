int32 sender_id
int32[] receivers_id  # empty => broadcast to all within range
builtin_interfaces/Time stamp
string type          # "BID", "ASSIGN", "STATUS", etc.
string payload       # JSON or custom-encoded
