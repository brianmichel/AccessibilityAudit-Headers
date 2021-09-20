0x0000003ce70 AXAuditer : NSObject /usr/lib/libobjc.A.dylib <AXAuditCategoryResultDelegate, AXAuditCategoryDelegate>
{
	+0x0008 i _targetPid (0x4)
	+0x0010 @"<AXAuditerDelegate>" _delegate (0x8)
	+0x0018 Q _categoryType (0x8)
	+0x0020 @"NSMutableArray" _currentRunningCategories (0x8)
	+0x0028 @"NSArray" __auditCategories (0x8)
	+0x0030 @"NSMutableArray" __results (0x8)
}
 @property (strong, nonatomic) NSArray *_auditCategories
 @property (strong, nonatomic) NSMutableArray *_results
 @property (weak, nonatomic) <AXAuditerDelegate> *delegate
 @property (nonatomic) int targetPid
 @property (nonatomic) unsigned long categoryType
 @property (strong, nonatomic) NSMutableArray *currentRunningCategories
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // class methods
  0x0000000ce0c +(void)initialize

  // instance methods
  0x0000000ce48 -(id)init
  0x0000000cecc -(void)_initializeAuditCategories
  0x0000000d008 -(id)_allCategoriesDescription
  0x0000000d2c4 -(id)_auditCategoryForClass:(id)arg1 
  0x0000000d420 -(id)_auditCategoryForAuditCaseID:(id)arg1 
  0x0000000d460 -(id)allAuditCaseIDs
  0x0000000d5fc -(id)auditCaseIDsForAuditGroup:(id)arg1 
  0x0000000d7c0 -(id)humanReadableDecriptionForAuditCaseID:(id)arg1 
  0x0000000d844 -(void)_clearCurrentRunningCategories
  0x0000000d8ec -(void)startWithAuditCaseIDs:(id)arg1 
  0x0000000dadc -(void)startForAuditExampleUIAppWithAuditCaseIDs:(id)arg1 
  0x0000000dcf4 -(void)runAllCategories
  0x0000000e128 -(void)runCategories:(id)arg1 
  0x0000000e42c -(void)_runCategories:(id)arg1 
  0x0000000e624 -(void)didCompleteCategory:(id)arg1 
  0x0000000e784 -(void)auditCategoryResult:(id)arg1 didAppendLogWithMessage:(SEL)arg2 
  0x0000000e7f4 -(void)auditCategory:(id)arg1 didEncounterIssue:(SEL)arg2 
  0x0000000e864 -(id)detectionResultsFromImageData:(id)arg1 
  0x0000000e8e8 -(id)_currentTime
  0x0000000e9c4 -(id)delegate
  0x0000000e9dc -(void)setDelegate:(id)arg1 
  0x0000000e9e8 -(int)targetPid
  0x0000000e9f0 -(void)setTargetPid:(id)arg1 
  0x0000000e9f8 -(unsigned long)categoryType
  0x0000000ea00 -(void)setCategoryType:(id)arg1 
  0x0000000ea08 -(id)currentRunningCategories
  0x0000000ea10 -(void)setCurrentRunningCategories:(id)arg1 
  0x0000000ea1c -(id)_auditCategories
  0x0000000ea24 -(void)set_auditCategories:(id)arg1 
  0x0000000ea30 -(id)_results
  0x0000000ea38 -(void)set_results:(id)arg1 