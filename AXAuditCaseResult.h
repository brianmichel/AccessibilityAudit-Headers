0x0000003d500 AXAuditCaseResult : AXAuditTimedResult
{
	+0x0008 @"NSString" _caseTitle (0x8)
	+0x0010 @"AXAuditCategoryResult" _result (0x8)
	+0x0018 @"NSMutableArray" __mutableIssues (0x8)
}
 @property (strong, nonatomic) NSMutableArray *_mutableIssues
 @property (copy, nonatomic) NSString *caseTitle
 @property (strong, nonatomic) NSArray *auditIssues
 @property (weak, nonatomic) AXAuditCategoryResult *result

  // instance methods
  0x0000001e4ec -(id)init
  0x0000001e558 -(id)auditIssues
  0x0000001e5a4 -(void)setAuditIssues:(id)arg1 
  0x0000001e5ec -(void)addAuditIssue:(id)arg1 
  0x0000001e774 -(id)caseTitle
  0x0000001e784 -(void)setCaseTitle:(id)arg1 
  0x0000001e790 -(id)result
  0x0000001e7b0 -(void)setResult:(id)arg1 
  0x0000001e7c4 -(id)_mutableIssues
  0x0000001e7d4 -(void)set_mutableIssues:(id)arg1 