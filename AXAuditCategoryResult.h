0x0000003d5f0 AXAuditCategoryResult : AXAuditTimedResult
{
	+0x0008 @"<AXAuditCategoryResultDelegate>" _delegate (0x8)
	+0x0010 @"NSString" _title (0x8)
	+0x0018 @"NSMutableArray" __mutableCases (0x8)
	+0x0020 @"NSMutableString" __mutableLog (0x8)
}
 @property (strong, nonatomic) NSMutableArray *_mutableCases
 @property (strong, nonatomic) NSMutableString *_mutableLog
 @property (weak, nonatomic) <AXAuditCategoryResultDelegate> *delegate
 @property (copy, nonatomic) NSString *title
 @property (readonly, nonatomic) NSArray *caseResults

  // instance methods
  0x0000002046c -(id)init
  0x000000204fc -(void)addCaseResult:(id)arg1 
  0x00000020584 -(id)caseResults
  0x000000205d0 -(void)appendLog:(id)arg1 
  0x000000206d8 -(id)log
  0x00000020724 -(long long)issueCount
  0x00000020880 -(id)allIssues
  0x00000020aa0 -(id)issueSummaryStrings
  0x00000020eac -(id)delegate
  0x00000020ecc -(void)setDelegate:(id)arg1 
  0x00000020ee0 -(id)title
  0x00000020ef0 -(void)setTitle:(id)arg1 
  0x00000020efc -(id)_mutableCases
  0x00000020f0c -(void)set_mutableCases:(id)arg1 
  0x00000020f20 -(id)_mutableLog
  0x00000020f30 -(void)set_mutableLog:(id)arg1 