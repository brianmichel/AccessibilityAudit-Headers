0x0000003d640 AXAuditCategory : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 i _targetPid (0x4)
	+0x0010 @"<AXAuditCategoryDelegate>" _delegate (0x8)
	+0x0018 Q _categoryType (0x8)
	+0x0020 @"NSArray" _quickLookCaseSelectors (0x8)
	+0x0028 @"NSArray" _xcTestCaseSelectors (0x8)
	+0x0030 @"NSArray" _postScreenshotTestCaseSelectors (0x8)
	+0x0038 @"NSString" _lastCaseSelectorName (0x8)
	+0x0040 @"NSString" _title (0x8)
	+0x0048 @"AXAuditCaseResult" _currentCaseResult (0x8)
	+0x0050 @"NSMutableArray" __currentTestingCaseSelectors (0x8)
	+0x0058 @"AXAuditCategoryResult" __result (0x8)
	+0x0060 @"NSMutableDictionary" __caseIdToSelector (0x8)
}
 @property (copy, nonatomic) NSString *title
 @property (strong, nonatomic) AXAuditCaseResult *currentCaseResult
 @property (strong, , nonatomic) NSArray *allCaseSelectors
 @property (strong, nonatomic) NSArray *quickLookCaseSelectors
 @property (strong, nonatomic) NSArray *xcTestCaseSelectors
 @property (strong, nonatomic) NSMutableArray *_currentTestingCaseSelectors
 @property (strong, nonatomic) AXAuditCategoryResult *_result
 @property (strong, nonatomic) NSMutableDictionary *_caseIdToSelector
 @property (weak, nonatomic) <AXAuditCategoryDelegate> *delegate
 @property (nonatomic) int targetPid
 @property (nonatomic) unsigned long categoryType
 @property (readonly, nonatomic) NSArray *postScreenshotTestCaseSelectors
 @property (strong, nonatomic) NSString *lastCaseSelectorName

  // class methods
  0x00000021220 +(id)selectorForAuditCaseID:(id)arg1 
  0x000000212d8 +(Class)categoryClassForAuditCaseID:(id)arg1 
  0x000000213b4 +(id)auditCaseIdForSelector:(id)arg1 

  // instance methods
  0x00000020fa8 -(id)init
  0x0000002105c -(id)caseSelectorPrefix
  0x00000021068 -(id)_testOnlyPrefix
  0x000000210c4 -(id)_selectorWithPrefix:(id)arg1 
  0x00000021470 -(void)_addCaseSelector:(id)arg1 
  0x0000002152c -(void)_buildCaseSelectorCache
  0x0000002173c -(id)humanReadableDecriptionForAuditCaseID:(id)arg1 
  0x00000021794 -(id)allAuditCaseIDs
  0x000000217e8 -(id)allCaseSelectors
  0x00000021888 -(id)_availableCasesDescription
  0x00000021bdc -(void)setTitle:(id)arg1 
  0x00000021c48 -(id)result
  0x00000021cf4 -(unsigned long)categoryType
  0x00000021d08 -(id)_humanReadableDescriptionForCategoryType
  0x00000021d78 -(id)_currentCaseSelectors
  0x00000021dd0 -(BOOL)supportAuditGroup:(id)arg1 
  0x00000021dd8 -(void)runAll
  0x00000021fa8 -(void)start
  0x00000022150 -(void)stop
  0x00000022438 -(id)caseStartedForSelectorName:(id)arg1 
  0x000000225f0 -(void)caseEndedForSelectorName:(id)arg1 result:(SEL)arg2 
  0x00000022798 -(void)addIssueWithClassification:(id)arg1 auditElement:(SEL)arg2 
  0x000000227b8 -(void)addIssueWithClassification:(id)arg1 auditElement:(SEL)arg2 elementRect:(long long)arg3 elementDescription:(id)arg4 
  0x000000227cc -(void)addIssueWithClassification:(id)arg1 auditElement:(SEL)arg2 elementRect:(long long)arg3 elementDescription:(id)arg4 longDescExtraInfo:({CGRect={CGPoint=dd}{CGSize=dd}})arg5 elementText:(id)arg6 
  0x000000229bc -(id)delegate
  0x000000229d4 -(void)setDelegate:(id)arg1 
  0x000000229e0 -(int)targetPid
  0x000000229e8 -(void)setTargetPid:(id)arg1 
  0x000000229f0 -(void)setCategoryType:(id)arg1 
  0x000000229f8 -(id)quickLookCaseSelectors
  0x00000022a00 -(void)setQuickLookCaseSelectors:(id)arg1 
  0x00000022a0c -(id)xcTestCaseSelectors
  0x00000022a14 -(void)setXcTestCaseSelectors:(id)arg1 
  0x00000022a20 -(id)postScreenshotTestCaseSelectors
  0x00000022a28 -(id)lastCaseSelectorName
  0x00000022a30 -(void)setLastCaseSelectorName:(id)arg1 
  0x00000022a3c -(id)title
  0x00000022a48 -(id)currentCaseResult
  0x00000022a50 -(void)setCurrentCaseResult:(id)arg1 
  0x00000022a5c -(id)_currentTestingCaseSelectors
  0x00000022a64 -(void)set_currentTestingCaseSelectors:(id)arg1 
  0x00000022a70 -(id)_result
  0x00000022a78 -(void)set_result:(id)arg1 
  0x00000022a84 -(id)_caseIdToSelector
  0x00000022a8c -(void)set_caseIdToSelector:(id)arg1 