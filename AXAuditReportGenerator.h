0x0000003d320 AXAuditReportGenerator : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 @"NSString" _deviceName (0x8)
	+0x0010 @"NSMutableArray" __issues (0x8)
}
 @property (strong, nonatomic) NSMutableArray *_issues
 @property (copy, nonatomic) NSString *deviceName

  // instance methods
  0x00000018770 -(id)init
  0x000000187d4 -(void)appendIssues:(id)arg1 
  0x00000018844 -(id)_fileExtensionForReportType:(id)arg1 
  0x0000001889c -(id)_fullOutputPathForReportType:(id)arg1 outputPath:(SEL)arg2 outputFilename:(long long)arg3 
  0x00000018b88 -(void)generateXCTestReportType:(id)arg1 forAuditResult:(SEL)arg2 completion:(long long)arg3 
  0x00000018e1c -(void)_processScreenshotsForAXAuditResult:(id)arg1 completion:(SEL)arg2 
  0x000000190e0 -(id)generateReportType:(id)arg1 outputPath:(SEL)arg2 outputFilename:(long long)arg3 error:(id)arg4 
  0x00000019288 -(id)_defaultSavePath
  0x0000001928c -(id)_locStringForKey:(id)arg1 
  0x000000193a0 -(id)reportHeaderForIssues:(id)arg1 
  0x00000019560 -(id)textDescriptionForIssues:(id)arg1 
  0x00000019878 -(void)_writeToPDFPath:(id)arg1 withContent:(SEL)arg2 
  0x00000019b5c -(id)_pdfImageAttributedStringForImage:(id)arg1 
  0x00000019ce0 -(id)_generateTextSourceForIssues:(id)arg1 reportType:(SEL)arg2 
  0x0000001a298 -(void)_writeToRTFPath:(id)arg1 withContent:(SEL)arg2 
  0x0000001a434 -(id)_rtfImageAttributedStringForImage:(id)arg1 
  0x0000001a5e0 -(id)imageDataForIssue:(id)arg1 thumbnailOnly:(SEL)arg2 
  0x0000001a888 -(id)_htmlTemplatePath
  0x0000001a900 -(id)_htmlTemplate
  0x0000001a980 -(id)_generateHTMLSourceFromTemplates
  0x0000001aa34 -(id)_jsonDictionaryForIssue:(id)arg1 
  0x0000001ad64 -(id)_anyAuditIssueFromResults:(id)arg1 
  0x0000001afa8 -(id)_jsonDictionaryForAuditIssueImage:(id)arg1 thumbnailOnly:(SEL)arg2 
  0x0000001b768 -(id)_jsonArrayForIssues:(id)arg1 
  0x0000001b8e0 -(id)_jsonArrayForScreens
  0x0000001bb74 -(id)_josnDictionary
  0x0000001bbe4 -(id)_jsonData
  0x0000001bc64 -(id)_jsonString
  0x0000001bcc4 -(id)deviceName
  0x0000001bcd0 -(void)setDeviceName:(id)arg1 
  0x0000001bcd8 -(id)_issues
  0x0000001bce0 -(void)set_issues:(id)arg1 