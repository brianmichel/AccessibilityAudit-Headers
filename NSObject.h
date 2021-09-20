@protocol NSObject
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // instance methods
 -(BOOL)isEqual:(id)arg1 
 -(Class)class
 -(id)self
 -(id)performSelector:(id)arg1 
 -(id)performSelector:(id)arg1 withObject:(SEL)arg2 
 -(id)performSelector:(id)arg1 withObject:(SEL)arg2 withObject:(SEL)arg3 
 -(BOOL)isProxy
 -(BOOL)isKindOfClass:(id)arg1 
 -(BOOL)isMemberOfClass:(id)arg1 
 -(BOOL)conformsToProtocol:(id)arg1 
 -(BOOL)respondsToSelector:(id)arg1 
 -(id)retain
 -(void)release
 -(id)autorelease
 -(unsigned long)retainCount
 -(^{_NSZone=})zone
 -(Class)superclass

@optional
  // instance methods

@end
