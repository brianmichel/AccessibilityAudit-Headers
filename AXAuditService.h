

0x0000003c970 AXAuditService : NSObject /usr/lib/libobjc.A.dylib <AXAuditAPIDevice1, AXAuditerDelegate, AXAuditDeviceSettingsManagerDelegate>
{
	+0x0008 @"DTXConnection" _connection (0x8)
	+0x0010 B _applicationStateNotificationsEnabled (0x1)
	+0x0011 B _runningAudit (0x1)
	+0x0014 i _targetPid (0x4)
	+0x0018 Q _monitoredEventType (0x8)
	+0x0020 @"AXAuditer" _currentAuditer (0x8)
	+0x0028 @"AXAuditDeviceSettingsManager" _deviceSettingsManager (0x8)
	+0x0030 @? __channelRestrictBlock (0x8)
}
 @property (copy) @? _channelRestrictBlock
 @property (strong, nonatomic) AXAuditDeviceSettingsManager *deviceSettingsManager
 @property (nonatomic) BOOL applicationStateNotificationsEnabled
 @property (nonatomic) BOOL runningAudit
 @property (nonatomic) int targetPid
 @property (nonatomic) unsigned long monitoredEventType
 @property (strong, nonatomic) AXAuditer *currentAuditer
 @property (readonly, nonatomic) DTXConnection *connection
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // class methods
  0x00000003584 +(Class)deviceSettingsManagerClass

  // instance methods
  0x00000003590 -(id)initWithTransport:(id)arg1 
  0x000000039d4 -(void)restrictChannelsWithBlock:(id)arg1 
  0x000000039e0 -(id)deviceInspectorSupportedEventTypes
  0x000000039f8 -(id)deviceInspectorCanNavWhileMonitoringEvents
  0x00000003a10 -(void)cancel
  0x00000003a68 -(void)resume
  0x00000003aa8 -(void)setMaxConnectionEnqueue:(id)arg1 
  0x00000003af0 -(void)axAuditDeviceManager:(id)arg1 settingDidChange:(SEL)arg2 
  0x00000003bf0 -(void)auditer:(id)arg1 didEncounterIssue:(SEL)arg2 
  0x00000003cf4 -(void)auditer:(id)arg1 didAppendLogWithMessage:(SEL)arg2 
  0x00000003d80 -(void)auditer:(id)arg1 didCompleteWithResults:(SEL)arg2 
  0x00000004130 -(id)fetchScreenshot
  0x0000000413c -(void)connectionInterrupted
  0x0000000422c -(void)auditCategorySetup
  0x00000004230 -(void)deviceSetAuditUIPid:(id)arg1 
  0x00000004234 -(void)deviceSetAuditTargetPid:(id)arg1 
  0x00000004278 -(id)deviceAuditIssueSupportedKeys
  0x00000004280 -(id)deviceCapabilities
  0x00000004374 -(id)deviceApiVersion
  0x0000000438c -(id)deviceRunningApplications
  0x00000004394 -(id)deviceCurrentState
  0x000000043ac -(void)deviceSetAppMonitoringEnabled:(id)arg1 
  0x000000043f0 -(id)deviceAllAuditCaseIDs
  0x0000000443c -(id)auditCaseIDsForAuditGroup:(id)arg1 
  0x000000044c4 -(id)deviceHumanReadableDescriptionForAuditCaseID:(id)arg1 
  0x00000004540 -(void)deviceBeginAuditCaseIDs:(id)arg1 
  0x000000046c8 -(void)deviceInspectorSetMonitoredEventType:(id)arg1 
  0x00000004714 -(void)deviceInspectorEnable:(id)arg1 
  0x00000004784 -(id)deviceInspectorSupportedEventType
  0x0000000478c -(void)deviceInspectorShowVisuals:(id)arg1 
  0x00000004790 -(void)deviceInspectorLockOnCurrentElement
  0x00000004794 -(void)deviceInspectorFocusOnElement:(id)arg1 
  0x00000004798 -(void)deviceInspectorMoveWithOptions:(id)arg1 
  0x0000000479c -(id)deviceInspectorSupportsIgnoredElements
  0x000000047b4 -(void)deviceInspectorShowIgnoredElements:(id)arg1 
  0x000000047b8 -(void)deviceInspectorPreviewOnElement:(id)arg1 
  0x000000047bc -(void)deviceInspectorInformCurrentCursorPosition:(id)arg1 
  0x000000047c0 -(void)devicePerformFinalCleanup
  0x000000047c4 -(id)deviceAccessibilitySettings
  0x00000004878 -(void)deviceResetToDefaultAccessibilitySettings
  0x000000048b8 -(void)deviceUpdateAccessibilitySetting:(id)arg1 withValue:(SEL)arg2 
  0x000000049e4 -(id)deviceElement:(id)arg1 performAction:(SEL)arg2 withValue:(id)arg3 
  0x000000049ec -(id)deviceElement:(id)arg1 valueForAttribute:(SEL)arg2 
  0x000000049f4 -(id)deviceElement:(id)arg1 valueForParameterizedAttribute:(SEL)arg2 withObject:(id)arg3 
  0x000000049fc -(void)deviceElement:(id)arg1 setValue:(SEL)arg2 attribute:(id)arg3 
  0x00000004a00 -(id)synchronousDeviceCaptureScreenshot
  0x00000004a08 -(id)deviceFetchSpecialElement:(id)arg1 
  0x00000004a10 -(id)deviceCaptureScreenshot
  0x00000004a18 -(void)deviceBailWithMessage:(id)arg1 
  0x00000004a1c -(void)deviceHighlightIssue:(id)arg1 
  0x00000004b00 -(void)highlightElement:(id)arg1 
  0x00000004b04 -(void)highlightElements:(id)arg1 
  0x00000004b08 -(void)deviceHighlightIssues:(id)arg1 
  0x00000004d4c -(void)deviceEnableHighlight:(id)arg1 
  0x00000004d50 -(id)connection
  0x00000004d58 -(BOOL)applicationStateNotificationsEnabled
  0x00000004d60 -(void)setApplicationStateNotificationsEnabled:(id)arg1 
  0x00000004d68 -(BOOL)runningAudit
  0x00000004d70 -(void)setRunningAudit:(id)arg1 
  0x00000004d78 -(int)targetPid
  0x00000004d80 -(void)setTargetPid:(id)arg1 
  0x00000004d88 -(unsigned long)monitoredEventType
  0x00000004d90 -(void)setMonitoredEventType:(id)arg1 
  0x00000004d98 -(id)currentAuditer
  0x00000004da0 -(void)setCurrentAuditer:(id)arg1 
  0x00000004dac -(id)deviceSettingsManager
  0x00000004db4 -(void)setDeviceSettingsManager:(id)arg1 
  0x00000004dc0 -(@?)_channelRestrictBlock
  0x00000004dcc -(void)set_channelRestrictBlock:(id)arg1 