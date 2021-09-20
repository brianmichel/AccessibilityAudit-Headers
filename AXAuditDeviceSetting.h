0x0000003cb00 AXAuditDeviceSetting : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 B _enabled (0x1)
	+0x0010 @"NSString" _identifier (0x8)
	+0x0018 @"NSNumber" _currentValueNumber (0x8)
	+0x0020 Q _settingType (0x8)
	+0x0028 q _sliderTickMarks (0x8)
}
 @property (copy, nonatomic) NSString *identifier
 @property (strong, nonatomic) NSNumber *currentValueNumber
 @property (nonatomic) BOOL enabled
 @property (nonatomic) unsigned long settingType
 @property (nonatomic) long long sliderTickMarks

  // class methods
  0x000000076ac +(id)allKnownIdentifiers
  0x00000007728 +(id)createWithIdentifier:(id)arg1 currentValue:(SEL)arg2 settingType:(id)arg3 
  0x000000077d8 +(void)registerTransportableObjectWithManager:(id)arg1 

  // instance methods
  0x00000007e20 -(id)init
  0x00000007e60 -(id)copyWithZone:(id)arg1 
  0x00000008144 -(BOOL)isEqual:(id)arg1 
  0x0000000834c -(id)identifier
  0x00000008358 -(void)setIdentifier:(id)arg1 
  0x00000008360 -(id)currentValueNumber
  0x00000008368 -(void)setCurrentValueNumber:(id)arg1 
  0x00000008374 -(BOOL)enabled
  0x0000000837c -(void)setEnabled:(id)arg1 
  0x00000008384 -(unsigned long)settingType
  0x0000000838c -(void)setSettingType:(id)arg1 
  0x00000008394 -(long long)sliderTickMarks
  0x0000000839c -(void)setSliderTickMarks:(id)arg1 