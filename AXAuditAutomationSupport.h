0x0000003ca60 AXAuditAutomationSupport : NSObject /usr/lib/libobjc.A.dylib <AXAuditerDelegate, AXFApplicationManagerDelegate>
{
	+0x0008 B _runContinuousAudit (0x1)
	+0x0009 B __runningContinuousAudit (0x1)
	+0x000a B __registeredForNotifications (0x1)
	+0x000c i _targetPid (0x4)
	+0x0010 @"NSArray" _auditWarningsToCapture (0x8)
	+0x0018 @"NSArray" _auditWarningsToIgnore (0x8)
	+0x0020 @"NSArray" _elementIdentifiersToIgnore (0x8)
	+0x0028 @"<AXAuditAutomationDelegate>" _delegate (0x8)
	+0x0030 @"NSTimer" _stopObservingApplicationsTimer (0x8)
	+0x0038 @"NSString" __auditTimestamp (0x8)
	+0x0040 @"AXAuditer" __auditor (0x8)
	+0x0048 @"AXAuditThrottler" __screenChangedThrottler (0x8)
	+0x0050 q __singleAuditPendingCount (0x8)
	+0x0058 @"NSObject<OS_dispatch_queue>" __auditQueue (0x8)
	+0x0060 ^{__AXObserver=} __axEventObserver (0x8)
	+0x0068 @"NSObject<OS_dispatch_queue>" __backgroudQueue (0x8)
}
 @property (strong, nonatomic) NSTimer *stopObservingApplicationsTimer
 @property (copy) NSString *_auditTimestamp
 @property (strong, nonatomic) AXAuditer *_auditor
 @property (strong, nonatomic) AXAuditThrottler *_screenChangedThrottler
 @property (nonatomic) long long _singleAuditPendingCount
 @property (strong, nonatomic) NSObject<OS_dispatch_queue> *_auditQueue
 @property (nonatomic) BOOL _runningContinuousAudit
 @property (nonatomic) ^{__AXObserver=} _axEventObserver
 @property (nonatomic) BOOL _registeredForNotifications
 @property (strong, nonatomic) NSObject<OS_dispatch_queue> *_backgroudQueue
 @property (strong, nonatomic) NSArray *auditWarningsToCapture
 @property (strong, nonatomic) NSArray *auditWarningsToIgnore
 @property (strong, nonatomic) NSArray *elementIdentifiersToIgnore
 @property (nonatomic) BOOL runContinuousAudit
 @property (weak, nonatomic) <AXAuditAutomationDelegate> *delegate
 @property (nonatomic) int targetPid
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // class methods
  0x00000005b80 +(id)sharedManager
  0x00000005d54 +(id)_currentTimestamp

  // instance methods
  0x00000005c1c -(id)init
  0x00000005e30 -(void)_setupAudit
  0x00000005f64 -(void)_runAudit
  0x0000000605c -(void)_runNextContinuousAudit
  0x00000006068 -(void)_runNextAuditIfNeeded
  0x000000060d4 -(void)_startContinuousAudit
  0x00000006118 -(void)_stopContinuousAudit
  0x0000000611c -(void)startSingleAudit
  0x00000006188 -(BOOL)runningSingleAudit
  0x000000061ac -(void)startContinuousAudit
  0x000000061e4 -(void)stopContinuousAudit
  0x0000000623c -(BOOL)runningContinuousAudit
  0x00000006248 -(id)screenshotHighlightingIssue:(id)arg1 
  0x00000006250 -(void)_captureScreenshot
  0x000000063d8 -(id)fetchScreenshot
  0x0000000646c -(void)auditer:(id)arg1 didAppendLogWithMessage:(SEL)arg2 
  0x00000006470 -(void)auditer:(id)arg1 didEncounterIssue:(SEL)arg2 
  0x00000006474 -(long long)_singleAuditPendingCount
  0x0000000647c -(void)auditer:(id)arg1 didCompleteWithResults:(SEL)arg2 
  0x00000006900 -(void)_sendResultsToDelegate:(id)arg1 
  0x00000006e58 -(void)_screenChangedThrottled
  0x00000006ec0 -(void)setAuditWarningsToIgnore:(id)arg1 
  0x00000006f88 -(void)applicationManager:(id)arg1 didUpdateRunningApplications:(SEL)arg2 
  0x00000006f8c -(void)applicationManager:(id)arg1 didUpdateFrontmostApplication:(SEL)arg2 
  0x000000071ac -(void)applicationManager:(id)arg1 didUpdateFocusedApplication:(SEL)arg2 
  0x000000071b0 -(id)auditWarningsToCapture
  0x000000071b8 -(void)setAuditWarningsToCapture:(id)arg1 
  0x000000071c4 -(id)auditWarningsToIgnore
  0x000000071cc -(id)elementIdentifiersToIgnore
  0x000000071d4 -(void)setElementIdentifiersToIgnore:(id)arg1 
  0x000000071e0 -(BOOL)runContinuousAudit
  0x000000071e8 -(void)setRunContinuousAudit:(id)arg1 
  0x000000071f0 -(id)delegate
  0x00000007208 -(void)setDelegate:(id)arg1 
  0x00000007214 -(int)targetPid
  0x0000000721c -(void)setTargetPid:(id)arg1 
  0x00000007224 -(id)stopObservingApplicationsTimer
  0x0000000722c -(void)setStopObservingApplicationsTimer:(id)arg1 
  0x00000007238 -(id)_auditTimestamp
  0x00000007244 -(void)set_auditTimestamp:(id)arg1 
  0x0000000724c -(id)_auditor
  0x00000007254 -(void)set_auditor:(id)arg1 
  0x00000007260 -(id)_screenChangedThrottler
  0x00000007268 -(void)set_screenChangedThrottler:(id)arg1 
  0x00000007274 -(void)set_singleAuditPendingCount:(id)arg1 
  0x0000000727c -(id)_auditQueue
  0x00000007284 -(void)set_auditQueue:(id)arg1 
  0x00000007290 -(BOOL)_runningContinuousAudit
  0x00000007298 -(void)set_runningContinuousAudit:(id)arg1 
  0x000000072a0 -(^{__AXObserver=})_axEventObserver
  0x000000072a8 -(void)set_axEventObserver:(id)arg1 
  0x000000072b0 -(BOOL)_registeredForNotifications
  0x000000072b8 -(void)set_registeredForNotifications:(id)arg1 
  0x000000072c0 -(id)_backgroudQueue
  0x000000072c8 -(void)set_backgroudQueue:(id)arg1 