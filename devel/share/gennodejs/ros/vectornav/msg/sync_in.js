// Auto-generated. Do not edit!

// (in-package vectornav.msg)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class sync_in {
  constructor() {
    this.header = new std_msgs.msg.Header();
    this.gps_time = 0.0;
    this.sync_in_count = 0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type sync_in
    // Serialize message field [header]
    bufferInfo = std_msgs.msg.Header.serialize(obj.header, bufferInfo);
    // Serialize message field [gps_time]
    bufferInfo = _serializer.float64(obj.gps_time, bufferInfo);
    // Serialize message field [sync_in_count]
    bufferInfo = _serializer.uint32(obj.sync_in_count, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type sync_in
    let tmp;
    let len;
    let data = new sync_in();
    // Deserialize message field [header]
    tmp = std_msgs.msg.Header.deserialize(buffer);
    data.header = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [gps_time]
    tmp = _deserializer.float64(buffer);
    data.gps_time = tmp.data;
    buffer = tmp.buffer;
    // Deserialize message field [sync_in_count]
    tmp = _deserializer.uint32(buffer);
    data.sync_in_count = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a message object
    return 'vectornav/sync_in';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2086a0f9af37a9d42ba81363cb03ae33';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header       header
    float64		      gps_time
    uint32                sync_in_count
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    `;
  }

};

module.exports = sync_in;