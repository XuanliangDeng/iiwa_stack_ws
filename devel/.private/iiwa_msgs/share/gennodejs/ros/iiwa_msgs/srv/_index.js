
"use strict";

let TimeToDestination = require('./TimeToDestination.js')
let ConfigureControlMode = require('./ConfigureControlMode.js')
let SetEndpointFrame = require('./SetEndpointFrame.js')
let SetPTPCartesianSpeedLimits = require('./SetPTPCartesianSpeedLimits.js')
let SetSmartServoJointSpeedLimits = require('./SetSmartServoJointSpeedLimits.js')
let SetPTPJointSpeedLimits = require('./SetPTPJointSpeedLimits.js')
let SetWorkpiece = require('./SetWorkpiece.js')
let SetSpeedOverride = require('./SetSpeedOverride.js')
let SetSmartServoLinSpeedLimits = require('./SetSmartServoLinSpeedLimits.js')

module.exports = {
  TimeToDestination: TimeToDestination,
  ConfigureControlMode: ConfigureControlMode,
  SetEndpointFrame: SetEndpointFrame,
  SetPTPCartesianSpeedLimits: SetPTPCartesianSpeedLimits,
  SetSmartServoJointSpeedLimits: SetSmartServoJointSpeedLimits,
  SetPTPJointSpeedLimits: SetPTPJointSpeedLimits,
  SetWorkpiece: SetWorkpiece,
  SetSpeedOverride: SetSpeedOverride,
  SetSmartServoLinSpeedLimits: SetSmartServoLinSpeedLimits,
};
