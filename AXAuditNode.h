0x0000003d2d0 AXAuditNode : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 B _isIgnored (0x1)
	+0x0010 @"AXAuditElement" _auditElement (0x8)
	+0x0018 @"NSArray" _children (0x8)
	+0x0020 @"NSString" _humanReadableDescription (0x8)
	+0x0028 @"NSString" _humanReadableRoleDescription (0x8)
	+0x0030 @"NSString" _className (0x8)
}
 @property (strong, nonatomic) AXAuditElement *auditElement
 @property (strong, nonatomic) NSArray *children
 @property (copy, nonatomic) NSString *humanReadableDescription
 @property (copy, nonatomic) NSString *humanReadableRoleDescription
 @property (copy, nonatomic) NSString *className
 @property (nonatomic) BOOL isIgnored

  // class methods
  0x00000017798 +(void)registerTransportableObjectWithManager:(id)arg1 

  // instance methods
  0x000000176ac -(id)initWithAuditElement:(id)arg1 description:(SEL)arg2 roleDescription:(id)arg3 
  0x00000017f4c -(BOOL)isEqual:(id)arg1 
  0x0000001827c -(id)copyWithZone:(id)arg1 
  0x000000183fc -(void)debugPrintDescendants
  0x0000001840c -(void)_printDescendantsWithLevel:(id)arg1 
  0x000000186a8 -(id)auditElement
  0x000000186b0 -(void)setAuditElement:(id)arg1 
  0x000000186bc -(id)children
  0x000000186c4 -(void)setChildren:(id)arg1 
  0x000000186d0 -(id)humanReadableDescription
  0x000000186dc -(void)setHumanReadableDescription:(id)arg1 
  0x000000186e4 -(id)humanReadableRoleDescription
  0x000000186f0 -(void)setHumanReadableRoleDescription:(id)arg1 
  0x000000186f8 -(id)className
  0x00000018704 -(void)setClassName:(id)arg1 
  0x0000001870c -(BOOL)isIgnored
  0x00000018714 -(void)setIsIgnored:(id)arg1 