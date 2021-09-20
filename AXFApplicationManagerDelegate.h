@protocol AXFApplicationManagerDelegate <NSObject>
@optional
  // instance methods
 -(void)applicationManager:(id)arg1 didUpdateRunningApplications:(SEL)arg2 
 -(void)applicationManager:(id)arg1 didUpdateFrontmostApplication:(SEL)arg2 
 -(void)applicationManager:(id)arg1 didUpdateFocusedApplication:(SEL)arg2 

@end
