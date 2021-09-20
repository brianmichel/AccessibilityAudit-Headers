0x0000003d4b0 AXAuditThrottler : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 B __alwaysReschedule (0x1)
	+0x0009 B __pendingFire (0x1)
	+0x0010 d __interval (0x8)
	+0x0018 @"NSDate" __lastFireTime (0x8)
	+0x0020 : __selector (0x8)
	+0x0028 @"NSObject" __target (0x8)
	+0x0030 @"NSObject<OS_dispatch_queue>" __fireQueue (0x8)
	+0x0038 @"NSObject<OS_dispatch_source>" __dispatchTimer (0x8)
}
 @property (nonatomic) double _interval
 @property (strong, nonatomic) NSDate *_lastFireTime
 @property (nonatomic) SEL _selector
 @property (nonatomic) BOOL _alwaysReschedule
 @property (nonatomic) BOOL _pendingFire
 @property (weak, nonatomic) NSObject *_target
 @property (strong, nonatomic) NSObject<OS_dispatch_queue> *_fireQueue
 @property (strong, nonatomic) NSObject<OS_dispatch_source> *_dispatchTimer

  // class methods
  0x0000001dda4 +(id)throttlerWithInterval:(id)arg1 target:(SEL)arg2 selector:(double)arg3 queue:(id)arg4 alwaysReschedule:(SEL)arg5 

  // instance methods
  0x0000001de84 -(id)_fireQueue
  0x0000001dec4 -(void)_scheduleTimerAfterDelay:(id)arg1 
  0x0000001e090 -(void)_fire
  0x0000001e168 -(void)scheduleNow
  0x0000001e410 -(double)_interval
  0x0000001e418 -(void)set_interval:(id)arg1 
  0x0000001e420 -(id)_lastFireTime
  0x0000001e428 -(void)set_lastFireTime:(id)arg1 
  0x0000001e434 -(SEL)_selector
  0x0000001e43c -(void)set_selector:(id)arg1 
  0x0000001e444 -(BOOL)_alwaysReschedule
  0x0000001e44c -(void)set_alwaysReschedule:(id)arg1 
  0x0000001e454 -(BOOL)_pendingFire
  0x0000001e45c -(void)set_pendingFire:(id)arg1 
  0x0000001e464 -(id)_target
  0x0000001e47c -(void)set_target:(id)arg1 
  0x0000001e488 -(void)set_fireQueue:(id)arg1 
  0x0000001e494 -(id)_dispatchTimer
  0x0000001e49c -(void)set_dispatchTimer:(id)arg1 