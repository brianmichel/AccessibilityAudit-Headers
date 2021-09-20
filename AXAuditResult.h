0x0000003d280 AXAuditResult : NSObject /usr/lib/libobjc.A.dylib <AXAuditTransportableObjectProtocol>
{
	+0x0008 @"NSArray" _auditIssues (0x8)
	+0x0010 @"NSDictionary" _auditIssueToScreenshotMapping (0x8)
}
 @property (strong, nonatomic) NSArray *auditIssues
 @property (strong, nonatomic) NSDictionary *auditIssueToScreenshotMapping
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // class methods
  0x00000017138 +(void)registerTransportableObjectWithManager:(id)arg1 

  // instance methods
  0x000000161b4 -(id)initWithAXAuditCategoryResults:(id)arg1 
  0x00000016488 -(id)initWithAuditIssues:(id)arg1 
  0x00000016510 -(void)_generateIssueToImageMapping
  0x00000016b48 -(id)screenshotInfoDictionaryForAuditIssue:(id)arg1 
  0x00000016bf4 -(id)screenshotForAuditIssue:(id)arg1 
  0x00000016d00 -(id)borderFrameForAuditIssue:(id)arg1 
  0x00000016dd8 -(id)scaleForAuditIssue:(id)arg1 
  0x00000016eb0 -(id)rotationForAuditIssue:(id)arg1 
  0x00000016f88 -(id)displayBoundsForAuditIssue:(id)arg1 
  0x00000017060 -(id)shouldFlipOutlineForAuditIssue:(id)arg1 
  0x00000017444 -(BOOL)isEqual:(id)arg1 
  0x000000175a0 -(id)copyWithZone:(id)arg1 
  0x00000017654 -(id)auditIssues
  0x0000001765c -(void)setAuditIssues:(id)arg1 
  0x00000017668 -(id)auditIssueToScreenshotMapping
  0x00000017670 -(void)setAuditIssueToScreenshotMapping:(id)arg1 