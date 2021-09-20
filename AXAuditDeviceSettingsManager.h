0x0000003d0f0 AXAuditDeviceSettingsManager : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 B _deviceSettingsCanBeRestored (0x1)
	+0x0010 @"<AXAuditDeviceSettingsManagerDelegate>" _delegate (0x8)
	+0x0018 @"NSArray" _settings (0x8)
	+0x0020 @"NSArray" __cachedSettings (0x8)
	+0x0028 @"NSArray" _defaultSettings (0x8)
}
 @property (strong, nonatomic) NSArray *_cachedSettings
 @property (strong, nonatomic) NSArray *settings
 @property (strong, nonatomic) NSArray *defaultSettings
 @property (weak, nonatomic) <AXAuditDeviceSettingsManagerDelegate> *delegate
 @property (nonatomic) BOOL deviceSettingsCanBeRestored

  // instance methods
  0x00000012f4c -(id)init
  0x00000012fa8 -(void)dealloc
  0x00000012ff4 -(void)startObservingChanges
  0x00000013004 -(void)stopObservingChanges
  0x00000013008 -(id)settingsToCache
  0x00000013014 -(void)cacheDeviceSettingsValues
  0x000000131d0 -(void)restoreDeviceSettingsValues
  0x00000013340 -(void)updateCurrentValueForAllSettingsAndPostNotificationIfChanged:(id)arg1 
  0x00000013474 -(id)settingForIdentifier:(id)arg1 
  0x00000013608 -(void)resetToDefaultAccessibilitySettings
  0x00000013788 -(void)updateSetting:(id)arg1 withNumberValue:(SEL)arg2 
  0x000000137d4 -(id)delegate
  0x000000137ec -(void)setDelegate:(id)arg1 
  0x000000137f8 -(id)settings
  0x00000013800 -(void)setSettings:(id)arg1 
  0x0000001380c -(BOOL)deviceSettingsCanBeRestored
  0x00000013814 -(void)setDeviceSettingsCanBeRestored:(id)arg1 
  0x0000001381c -(id)_cachedSettings
  0x00000013824 -(void)set_cachedSettings:(id)arg1 
  0x00000013830 -(id)defaultSettings
  0x00000013838 -(void)setDefaultSettings:(id)arg1 