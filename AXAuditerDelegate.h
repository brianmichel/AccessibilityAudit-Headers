@protocol AXAuditerDelegate <NSObject>
  // instance methods
 -(void)auditer:(id)arg1 didAppendLogWithMessage:(SEL)arg2 
 -(void)auditer:(id)arg1 didEncounterIssue:(SEL)arg2 
 -(void)auditer:(id)arg1 didCompleteWithResults:(SEL)arg2 
 -(id)fetchScreenshot

@end
