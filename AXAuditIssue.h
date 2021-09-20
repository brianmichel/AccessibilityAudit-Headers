0x0000003cce0 AXAuditIssue : NSObject /usr/lib/libobjc.A.dylib <NSCopying>
{
	+0x0008 q _issueClassification (0x8)
	+0x0010 @"AXAuditElement" _auditElement (0x8)
	+0x0018 @"NSString" _elementDescription (0x8)
	+0x0020 @"NSArray" _longDescExtraInfo (0x8)
	+0x0028 @"NSString" _elementText (0x8)
	+0x0030 @"NSString" _foregroundColor (0x8)
	+0x0038 @"NSString" _backgroundColor (0x8)
	+0x0040 d _fontSize (0x8)
	+0x0048 @"NSString" _timeStamp (0x8)
	+0x0050 q _platform (0x8)
	+0x0058 @"NSArray" _suggestedSelectorsToFix (0x8)
	+0x0060 @"NSNumber" _imageIdentifier (0x8)
	+0x0068 {CGPoint="x"d"y"d} _containerOrigin (0x10)
	+0x0078 {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _elementRect (0x20)
}
 @property (nonatomic) long long issueClassification
 @property (strong, nonatomic) AXAuditElement *auditElement
 @property (strong, nonatomic) NSString *elementDescription
 @property (strong, nonatomic) NSArray *longDescExtraInfo
 @property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} elementRect
 @property (nonatomic) {CGPoint=dd} containerOrigin
 @property (strong, nonatomic) NSString *elementText
 @property (strong, nonatomic) NSString *foregroundColor
 @property (strong, nonatomic) NSString *backgroundColor
 @property (nonatomic) double fontSize
 @property (copy, nonatomic) NSString *timeStamp
 @property (nonatomic) long long platform
 @property (strong, nonatomic) NSArray *suggestedSelectorsToFix
 @property (strong, nonatomic) NSNumber *imageIdentifier

  // class methods
  0x00000009920 +(Class)_auditIssueClassForType:(id)arg1 
  0x0000000992c +(id)auditIssueForClassification:(id)arg1 
  0x00000009d40 +(void)registerTransportableObjectWithManager:(id)arg1 

  // instance methods
  0x0000000997c -(id)init
  0x000000099c8 -(void)setIssueClassification:(id)arg1 
  0x00000009a04 -(long long)_platformForClassification:(id)arg1 
  0x00000009a18 -(id)foundLogMessage
  0x0000000a960 -(id)copyWithZone:(id)arg1 
  0x0000000ac0c -(BOOL)isEqual:(id)arg1 
  0x0000000b328 -(BOOL)_isSameRelativeLocationAsAuditIssue:(id)arg1 
  0x0000000b4d8 -(long long)compare:(id)arg1 
  0x0000000b5f0 -(long long)issueClassification
  0x0000000b5f8 -(id)auditElement
  0x0000000b600 -(void)setAuditElement:(id)arg1 
  0x0000000b60c -(id)elementDescription
  0x0000000b614 -(void)setElementDescription:(id)arg1 
  0x0000000b620 -(id)longDescExtraInfo
  0x0000000b628 -(void)setLongDescExtraInfo:(id)arg1 
  0x0000000b634 -({CGRect={CGPoint=dd}{CGSize=dd}})elementRect
  0x0000000b640 -(void)setElementRect:(id)arg1 
  0x0000000b654 -({CGPoint=dd})containerOrigin
  0x0000000b65c -(void)setContainerOrigin:(id)arg1 
  0x0000000b668 -(id)elementText
  0x0000000b670 -(void)setElementText:(id)arg1 
  0x0000000b67c -(id)foregroundColor
  0x0000000b684 -(void)setForegroundColor:(id)arg1 
  0x0000000b690 -(id)backgroundColor
  0x0000000b698 -(void)setBackgroundColor:(id)arg1 
  0x0000000b6a4 -(double)fontSize
  0x0000000b6ac -(void)setFontSize:(id)arg1 
  0x0000000b6b4 -(id)timeStamp
  0x0000000b6c0 -(void)setTimeStamp:(id)arg1 
  0x0000000b6c8 -(long long)platform
  0x0000000b6d0 -(void)setPlatform:(id)arg1 
  0x0000000b6d8 -(id)suggestedSelectorsToFix
  0x0000000b6e0 -(void)setSuggestedSelectorsToFix:(id)arg1 
  0x0000000b6ec -(id)imageIdentifier
  0x0000000b6f4 -(void)setImageIdentifier:(id)arg1 